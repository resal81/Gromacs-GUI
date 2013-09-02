

 #include <QMdiArea>
 #include <QFileDialog>
 #include <QMessageBox>
 #include <QString>
 #include <QFileInfo>
 #include <QMdiSubWindow>
 #include <QSettings>
 #include <QMenuBar>
 #include <QToolBar>
 #include <QStatusBar>
 #include <QAction>
 #include <QSignalMapper>
 #include <QtGui>
 
 #include "editor.h"
 #include "mdichild.h"
 


 Editor::Editor(QWidget *parent)
	: QMainWindow(parent)
 {
     
     setWindowFlags ( Qt::Widget );
     setContextMenuPolicy(Qt::NoContextMenu);
     mdiArea = new QMdiArea;
     setCentralWidget(mdiArea);
     connect(mdiArea, SIGNAL(subWindowActivated(QMdiSubWindow *)),this, SLOT(updateMenus()));
     windowMapper = new QSignalMapper(this);
     connect(windowMapper, SIGNAL(mapped(QWidget *)),this, SLOT(setActiveSubWindow(QWidget *)));
    

     createActions();
     createMenus();
     createToolBars();
     createStatusBar();
     updateMenus();

     readSettings();

     setWindowTitle(tr("File Editor"));
     
     find_dlg = new FindDialog(this);
 }

 void Editor::closeEvent(QCloseEvent *event)
 {
     mdiArea->closeAllSubWindows();
     if (activeMdiChild()) {
         event->ignore();
     } else {
         writeSettings();
         //this->close();
         event->accept();
     }
 }

 void Editor::newFile()
 {
     MdiChild *child = createMdiChild();
     child->newFile();
     child->show();
 }

 void Editor::open()
 {
     emit requestWorkDirName();
     
     QString fileName = QFileDialog::getOpenFileName(this, "Open a File",m_dirname);
     if (!fileName.isEmpty()) {
         QMdiSubWindow *existing = findMdiChild(fileName);
         if (existing) {
             mdiArea->setActiveSubWindow(existing);
             return;
         }

         MdiChild *child = createMdiChild();
         if (child->loadFile(fileName)) {
             statusBar()->showMessage(tr("File loaded"), 2000);
             child->show();
         } else {
             child->close();
         }
     }
 }

 void Editor::save()
 {
     if (activeMdiChild() && activeMdiChild()->save())
         statusBar()->showMessage(tr("File saved"), 2000);
 }

 void Editor::saveAs()
 {
     if (activeMdiChild() && activeMdiChild()->saveAs())
         statusBar()->showMessage(tr("File saved"), 2000);
 }

 void Editor::cut()
 {
     if (activeMdiChild())
         activeMdiChild()->cut();
 }

 void Editor::copy()
 {
     if (activeMdiChild())
         activeMdiChild()->copy();
 }

 void Editor::paste()
 {
     if (activeMdiChild())
         activeMdiChild()->paste();
 }
 
 void Editor::undo()
 {
     if (activeMdiChild())
         activeMdiChild()->undo();
 }

 void Editor::redo()
 {
     if (activeMdiChild())
         activeMdiChild()->redo();
 }

 void Editor::about()
 {
    QMessageBox::about(this, tr("About Editor"),
             tr("A Simple Editor."));
 }

 void Editor::updateMenus()
 {
     bool hasMdiChild = (activeMdiChild() != 0);
     saveAct->setEnabled(hasMdiChild);
     saveAsAct->setEnabled(hasMdiChild);
     pasteAct->setEnabled(hasMdiChild);
     findAct->setEnabled(hasMdiChild);
     closeAct->setEnabled(hasMdiChild);
     closeAllAct->setEnabled(hasMdiChild);
     tileAct->setEnabled(hasMdiChild);
     cascadeAct->setEnabled(hasMdiChild);
     nextAct->setEnabled(hasMdiChild);
     previousAct->setEnabled(hasMdiChild);
     separatorAct->setVisible(hasMdiChild);

     bool hasSelection = (activeMdiChild() && activeMdiChild()->textCursor().hasSelection());
     cutAct->setEnabled(hasSelection);
     copyAct->setEnabled(hasSelection);
     
     bool hasUndo= (activeMdiChild() && activeMdiChild()->isUndoAvailable());
     bool hasRedo= (activeMdiChild() && activeMdiChild()->isRedoAvailable());
     undoAct->setEnabled(hasUndo);
     redoAct->setEnabled(hasRedo);
 }

 void Editor::updateWindowMenu()
 {
     windowMenu->clear();
     windowMenu->addAction(closeAct);
     windowMenu->addAction(closeAllAct);
     windowMenu->addSeparator();
     windowMenu->addAction(tileAct);
     windowMenu->addAction(cascadeAct);
     windowMenu->addSeparator();
     windowMenu->addAction(nextAct);
     windowMenu->addAction(previousAct);
     windowMenu->addAction(separatorAct);

     QList<QMdiSubWindow *> windows = mdiArea->subWindowList();
     separatorAct->setVisible(!windows.isEmpty());

     for (int i = 0; i < windows.size(); ++i) {
         MdiChild *child = qobject_cast<MdiChild *>(windows.at(i)->widget());

         QString text;
         if (i < 9) {
             text = tr("&%1 %2").arg(i + 1)
                                .arg(child->userFriendlyCurrentFile());
         } else {
             text = tr("%1 %2").arg(i + 1)
                               .arg(child->userFriendlyCurrentFile());
         }
         QAction *action  = windowMenu->addAction(text);
         action->setCheckable(true);
         action ->setChecked(child == activeMdiChild());
         connect(action, SIGNAL(triggered()), windowMapper, SLOT(map()));
         windowMapper->setMapping(action, windows.at(i));
     }
 }

 MdiChild *Editor::createMdiChild()
 {
     MdiChild *child = new MdiChild;
     mdiArea->addSubWindow(child);

     connect(child, SIGNAL(copyAvailable(bool)), cutAct, SLOT(setEnabled(bool)));
     connect(child, SIGNAL(copyAvailable(bool)), copyAct, SLOT(setEnabled(bool)));
     connect(child, SIGNAL(undoAvailable(bool)), undoAct, SLOT(setEnabled(bool)));
     connect(child, SIGNAL(redoAvailable(bool)), redoAct, SLOT(setEnabled(bool)));
     //connect(child, SIGNAL(copyAvailable(bool)), findAct, SLOT(setEnabled(bool)));

     return child;
 }

 void Editor::createActions()
 {
     newAct = new QAction(QIcon(":/images/new.png"), tr("&New"), this);
     newAct->setShortcut(tr("Ctrl+N"));
     //newAct->setStatusTip(tr("Create a new file"));
     connect(newAct, SIGNAL(triggered()), this, SLOT(newFile()));

     openAct = new QAction(QIcon(":/images/open.png"), tr("&Open..."), this);
     openAct->setShortcut(tr("Ctrl+O"));
     connect(openAct, SIGNAL(triggered()), this, SLOT(open()));

     saveAct = new QAction(QIcon(":/images/save.png"), tr("&Save"), this);
     saveAct->setShortcut(tr("Ctrl+S"));
     connect(saveAct, SIGNAL(triggered()), this, SLOT(save()));

     saveAsAct = new QAction(QIcon(":/images/save_as.png"),tr("Save &As..."), this);;
     connect(saveAsAct, SIGNAL(triggered()), this, SLOT(saveAs()));

     exitAct = new QAction(tr("E&xit"), this);
     exitAct->setShortcut(tr("Ctrl+Q"));
     connect(exitAct, SIGNAL(triggered()), this, SLOT(close()));

     cutAct = new QAction(QIcon(":/images/cut.png"), tr("Cu&t"), this);
     cutAct->setShortcut(tr("Ctrl+X"));
     connect(cutAct, SIGNAL(triggered()), this, SLOT(cut()));

     copyAct = new QAction(QIcon(":/images/copy.png"), tr("&Copy"), this);
     copyAct->setShortcut(tr("Ctrl+C"));
     connect(copyAct, SIGNAL(triggered()), this, SLOT(copy()));

     pasteAct = new QAction(QIcon(":/images/paste.png"), tr("&Paste"), this);
     pasteAct->setShortcut(tr("Ctrl+V"));
     connect(pasteAct, SIGNAL(triggered()), this, SLOT(paste()));
     
     undoAct = new QAction(QIcon(":/images/undo.png"), tr("&Undo"), this);
     undoAct->setShortcut(tr("Ctrl+Z"));
     connect(undoAct, SIGNAL(triggered()), this, SLOT(undo()));

     redoAct = new QAction(QIcon(":/images/redo.png"), tr("&Redo"), this);
     redoAct->setShortcut(tr("Ctrl+Y"));
     connect(redoAct, SIGNAL(triggered()), this, SLOT(redo()));
     
     findAct = new QAction(QIcon(":/images/find.png"), tr("&Find"), this);
     findAct->setShortcut(tr("Ctrl+F"));
     connect(findAct, SIGNAL(triggered()), this, SLOT(showFind()));

     closeAct = new QAction(QIcon(":/images/close.png"),tr("Cl&ose"), this);
     closeAct->setShortcut(tr("Ctrl+F4"));
     connect(closeAct, SIGNAL(triggered()), mdiArea, SLOT(closeActiveSubWindow()));

     closeAllAct = new QAction(tr("Close &All"), this);
     connect(closeAllAct, SIGNAL(triggered()), mdiArea, SLOT(closeAllSubWindows()));

     tileAct = new QAction(QIcon(":/images/tile.png"),tr("&Tile"), this);
     connect(tileAct, SIGNAL(triggered()), mdiArea, SLOT(tileSubWindows()));

     cascadeAct = new QAction(QIcon(":/images/cascade.png"),tr("&Cascade"), this);
     connect(cascadeAct, SIGNAL(triggered()), mdiArea, SLOT(cascadeSubWindows()));

     nextAct = new QAction(QIcon(":/images/next.png"),tr("Ne&xt Window"), this);
     connect(nextAct, SIGNAL(triggered()), mdiArea, SLOT(activateNextSubWindow()));

     previousAct = new QAction(QIcon(":/images/previous.png"),tr("Pre&vious Window"), this);
     connect(previousAct, SIGNAL(triggered()), mdiArea, SLOT(activatePreviousSubWindow()));

     separatorAct = new QAction(this);
     separatorAct->setSeparator(true); 
}

 void Editor::createMenus()
 {
     fileMenu = menuBar()->addMenu(tr("&File"));
     fileMenu->addAction(newAct);
     fileMenu->addAction(openAct);
     fileMenu->addAction(saveAct);
     fileMenu->addAction(saveAsAct);
     
     editMenu = menuBar()->addMenu(tr("&Edit"));
     editMenu->addAction(cutAct);
     editMenu->addAction(copyAct);
     editMenu->addAction(pasteAct);
     editMenu->addAction(undoAct);
     editMenu->addAction(redoAct);
     editMenu->addAction(findAct);

     windowMenu = menuBar()->addMenu(tr("&Window"));
     updateWindowMenu();
     connect(windowMenu, SIGNAL(aboutToShow()), this, SLOT(updateWindowMenu()));

     menuBar()->addSeparator();
     menuBar()->setVisible(false);

     //helpMenu = menuBar()->addMenu(tr("&Help"));
     //helpMenu->addAction(aboutAct);
     //helpMenu->addAction(aboutQtAct);
 }

 void Editor::createToolBars()
 {
     fileToolBar = addToolBar(tr("File"));
     fileToolBar->addSeparator();
     fileToolBar->addAction(newAct);
     fileToolBar->addAction(openAct);
     fileToolBar->addAction(saveAct);
     fileToolBar->addAction(saveAsAct);
     fileToolBar->addSeparator();

     editToolBar = addToolBar(tr("Edit"));
     editToolBar->addAction(cutAct);
     editToolBar->addAction(copyAct);
     editToolBar->addAction(pasteAct);
     editToolBar->addAction(undoAct);
     editToolBar->addAction(redoAct);
     editToolBar->addAction(findAct);
     editToolBar->addSeparator();
     
     windowToolBar= addToolBar(tr("Window"));
     windowToolBar->addAction(closeAct);
     windowToolBar->addAction(tileAct);
     windowToolBar->addAction(cascadeAct);
     windowToolBar->addAction(previousAct);
     windowToolBar->addAction(nextAct);
     windowToolBar->addSeparator();
     
     fileToolBar->setFloatable(false);
     editToolBar->setFloatable(false);
     windowToolBar->setFloatable(false);
     fileToolBar->setMovable(false);
     editToolBar->setMovable(false);
     windowToolBar->setMovable(false);
}

 void Editor::createStatusBar()
 {
     
 }

 void Editor::readSettings()
 {
     QSettings settings("GromacsGUI", "GromacsGUI");
     settings.beginGroup("FileEditor");
     QPoint pos = settings.value("editor_pos", QPoint(200, 200)).toPoint();
     QSize size = settings.value("editor_size", QSize(400, 400)).toSize();
     move(pos);
     resize(size);
     settings.endGroup();
 }

 void Editor::writeSettings()
 {
     QSettings settings("GromacsGUI", "GromacsGUI");
     
     settings.beginGroup("FileEditor");
     settings.setValue("editor_pos", pos());
     settings.setValue("editor_size", size());
     settings.endGroup();
}

 MdiChild *Editor::activeMdiChild()
 {
     if (QMdiSubWindow *activeSubWindow = mdiArea->activeSubWindow())
         return qobject_cast<MdiChild *>(activeSubWindow->widget());
     return 0;
 }

 QMdiSubWindow *Editor::findMdiChild(const QString &fileName)
 {
     QString canonicalFilePath = QFileInfo(fileName).canonicalFilePath();

     foreach (QMdiSubWindow *window, mdiArea->subWindowList()) {
         MdiChild *mdiChild = qobject_cast<MdiChild *>(window->widget());
         if (mdiChild->currentFile() == canonicalFilePath)
             return window;
     }
     return 0;
 }
 
 void Editor::setActiveSubWindow(QWidget *window)
 {
     if (!window)
         return;
     mdiArea->setActiveSubWindow(qobject_cast<QMdiSubWindow *>(window));
 }
 
 
//=====================================================================================
 void Editor::slotfor_workDirName(QString s)
 {
 	m_dirname=s;
	}
	
 void Editor::openFile(QString s)
 {
 	QString fileName = s;
     if (!fileName.isEmpty()) {
         QMdiSubWindow *existing = findMdiChild(fileName);
         if (existing) {
             mdiArea->setActiveSubWindow(existing);
             return;
         }

         MdiChild *child = createMdiChild();
         if (child->loadFile(fileName)) {
             statusBar()->showMessage(tr("File loaded"), 2000);
             child->show();
         } else {
             child->close();
         }
     }
}
        
//=====================================================================================
void Editor::showFind()
{
	if (find_dlg->isHidden())
		find_dlg->show();
	else
		find_dlg->activateWindow();
}

void Editor::find()
{
	QString text=find_dlg->leFind->text();
	//QTextCursor cursor = activeMdiChild()->textCursor();
	
	QTextCursor cur;
	if (find_dlg->chCase->isChecked())
		cur = activeMdiChild()->document()->find(text, 0, QTextDocument::FindCaseSensitively);
	else
		cur = activeMdiChild()->document()->find(text, 0);
		
	if (cur.position() >= 0)
		activeMdiChild()->setTextCursor(cur);
	else
		QMessageBox::question(this, tr("End of Document"),tr("End of document has been reached."),QMessageBox::Ok );
}

void Editor::findNext()
{
	QString text=find_dlg->leFind->text();
	QTextCursor cursor = activeMdiChild()->textCursor();
	
	QTextCursor cur;
	if (find_dlg->chCase->isChecked())
		cur = activeMdiChild()->document()->find(text, cursor.position(), QTextDocument::FindCaseSensitively);
	else
		cur = activeMdiChild()->document()->find(text, cursor.position());
		
	if (cur.position() >= 0)
		activeMdiChild()->setTextCursor(cur);
	else
		QMessageBox::question(this, tr("End of Document"),tr("End of document has been reached."),QMessageBox::Ok );
}

void Editor::replace()
{
	QString text=find_dlg->leFind->text();
	QString text_to=find_dlg->leReplace->text();
	QTextCursor cursor = activeMdiChild()->textCursor();
	
	QTextCursor cur;
	if (find_dlg->chCase->isChecked())
		cur = activeMdiChild()->document()->find(text, cursor.position(), QTextDocument::FindCaseSensitively);
	else
		cur = activeMdiChild()->document()->find(text, cursor.position());
	
	if (cur.position() >= 0)
	{
		activeMdiChild()->setTextCursor(cur);
		cur.insertText(text_to);
	}
	else
		QMessageBox::question(this, tr("End of Document"),tr("End of document has been reached."),QMessageBox::Ok );
}
void Editor::replaceAll()
{
	QString text=find_dlg->leFind->text();
	QString text_to=find_dlg->leReplace->text();
		
	QTextCursor cur;
	int count = 0;
	if (find_dlg->chCase->isChecked())
	{
		cur = activeMdiChild()->document()->find(text, 0, QTextDocument::FindCaseSensitively);
		activeMdiChild()->setTextCursor(cur);
		QTextCursor cursor = activeMdiChild()->textCursor();
		while (cur.position() >= 0)
		{
			count++;
			activeMdiChild()->setTextCursor(cur);
			cur.insertText(text_to);
			cur = activeMdiChild()->document()->find(text, cursor, QTextDocument::FindCaseSensitively);
			cursor=cur;
		}
	}
		
	else
	{
		cur = activeMdiChild()->document()->find(text, 0);
		activeMdiChild()->setTextCursor(cur);
		QTextCursor cursor = activeMdiChild()->textCursor();
		while (cur.position() >= 0)
		{
			count++;
			activeMdiChild()->setTextCursor(cur);
			cur.insertText(text_to);
			cur = activeMdiChild()->document()->find(text, cursor);
			cursor=cur;
		}
	}
	QMessageBox::information(this,"Replace All", QString("%1 matches of '%2' replaced with '%3'.").arg(count).arg(text).arg(text_to));

}

