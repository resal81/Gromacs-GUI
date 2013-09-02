 #ifndef Editor_H
 #define Editor_H

 #include <QMainWindow>
 #include "finddialog.h"

 class QAction;
 class QMenu;
 class QMdiArea;
 class QMdiSubWindow;
 class MdiChild;
 class QSignalMapper;

 class Editor : public QMainWindow
 {
     Q_OBJECT

 public:
     Editor(QWidget *parent=0);

 protected:
     void closeEvent(QCloseEvent *event);

 public slots:
 	void openFile(QString);
 	void showFind();
 	void find();
 	void findNext();
 	void replace();
 	void replaceAll();
 
 private slots:
     void newFile();
     void open();
     void save();
     void saveAs();
     void cut();
     void copy();
     void paste();
     void undo();
     void redo();
     void about();
     void updateMenus();
     void updateWindowMenu();
     MdiChild *createMdiChild();
     //void switchLayoutDirection();
     void setActiveSubWindow(QWidget *window);
     
     
     void slotfor_workDirName(QString);

 signals:
 	void requestWorkDirName();
 
 private:
     void createActions();
     void createMenus();
     void createToolBars();
     void createStatusBar();
     void readSettings();
     void writeSettings();
     MdiChild *activeMdiChild();
     QMdiSubWindow *findMdiChild(const QString &fileName);

     QMdiArea *mdiArea;
     QSignalMapper *windowMapper;

     QMenu *fileMenu;
     QMenu *editMenu;
     QMenu *windowMenu;
     QMenu *helpMenu;
     QToolBar *fileToolBar;
     QToolBar *editToolBar;
     QToolBar *windowToolBar;
     QAction *newAct;
     QAction *openAct;
     QAction *saveAct;
     QAction *saveAsAct;
     QAction *exitAct;
     QAction *cutAct;
     QAction *copyAct;
     QAction *pasteAct;
     QAction *undoAct;
     QAction *redoAct;
     QAction *closeAct;
     QAction *closeAllAct;
     QAction *tileAct;
     QAction *cascadeAct;
     QAction *nextAct;
     QAction *previousAct;
     QAction *separatorAct;
     QAction *aboutAct;
     QAction *aboutQtAct;
     QAction *findAct;
     
     QString m_dirname;
     
     FindDialog *find_dlg;
 };

 #endif 
 
