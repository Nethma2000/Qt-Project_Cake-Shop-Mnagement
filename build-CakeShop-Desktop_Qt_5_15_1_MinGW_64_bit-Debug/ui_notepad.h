/********************************************************************************
** Form generated from reading UI file 'notepad.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEPAD_H
#define UI_NOTEPAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_notepad
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionSave_As;
    QAction *actionAbout_Notepad;
    QAction *actionPrint;
    QAction *actionFont;
    QAction *actionColour;
    QAction *actionHighlight;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuAbout;
    QMenu *menuAbout_2;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *notepad)
    {
        if (notepad->objectName().isEmpty())
            notepad->setObjectName(QString::fromUtf8("notepad"));
        notepad->resize(623, 403);
        actionNew = new QAction(notepad);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/images/icons8-new-copy-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(notepad);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/images/icons8-open-file-folder-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(notepad);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/images/icons8-save-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionCut = new QAction(notepad);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/images/icons8-cut-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon3);
        actionCopy = new QAction(notepad);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/images/icons8-copy-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon4);
        actionPaste = new QAction(notepad);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/images/icons8-paste-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon5);
        actionUndo = new QAction(notepad);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/img/images/icons8-undo-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon6);
        actionRedo = new QAction(notepad);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/img/images/icons8-forward-arrow-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon7);
        actionSave_As = new QAction(notepad);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/img/images/icons8-save-as-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_As->setIcon(icon8);
        actionAbout_Notepad = new QAction(notepad);
        actionAbout_Notepad->setObjectName(QString::fromUtf8("actionAbout_Notepad"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/img/images/icons8-info-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout_Notepad->setIcon(icon9);
        actionPrint = new QAction(notepad);
        actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/img/images/icons8-print-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint->setIcon(icon10);
        actionFont = new QAction(notepad);
        actionFont->setObjectName(QString::fromUtf8("actionFont"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/img/images/icons8-font-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFont->setIcon(icon11);
        actionColour = new QAction(notepad);
        actionColour->setObjectName(QString::fromUtf8("actionColour"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/img/images/icons8-color-mode-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionColour->setIcon(icon12);
        actionHighlight = new QAction(notepad);
        actionHighlight->setObjectName(QString::fromUtf8("actionHighlight"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/img/images/icons8-highlighter-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHighlight->setIcon(icon13);
        centralwidget = new QWidget(notepad);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        horizontalLayout->addWidget(textEdit);

        notepad->setCentralWidget(centralwidget);
        menubar = new QMenuBar(notepad);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 623, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        menuAbout_2 = new QMenu(menubar);
        menuAbout_2->setObjectName(QString::fromUtf8("menuAbout_2"));
        notepad->setMenuBar(menubar);
        statusbar = new QStatusBar(notepad);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        notepad->setStatusBar(statusbar);
        toolBar = new QToolBar(notepad);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        notepad->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menubar->addAction(menuAbout_2->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addSeparator();
        menuFile->addAction(actionSave_As);
        menuFile->addSeparator();
        menuFile->addAction(actionPrint);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addSeparator();
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuAbout->addAction(actionFont);
        menuAbout->addAction(actionColour);
        menuAbout->addAction(actionHighlight);
        menuAbout_2->addAction(actionAbout_Notepad);
        toolBar->addAction(actionNew);
        toolBar->addAction(actionOpen);
        toolBar->addSeparator();
        toolBar->addAction(actionSave);
        toolBar->addAction(actionSave_As);
        toolBar->addAction(actionPrint);
        toolBar->addSeparator();
        toolBar->addAction(actionCut);
        toolBar->addAction(actionCopy);
        toolBar->addAction(actionPaste);
        toolBar->addSeparator();
        toolBar->addAction(actionUndo);
        toolBar->addAction(actionRedo);
        toolBar->addSeparator();
        toolBar->addAction(actionFont);
        toolBar->addAction(actionColour);
        toolBar->addAction(actionHighlight);
        toolBar->addSeparator();
        toolBar->addAction(actionAbout_Notepad);

        retranslateUi(notepad);

        QMetaObject::connectSlotsByName(notepad);
    } // setupUi

    void retranslateUi(QMainWindow *notepad)
    {
        notepad->setWindowTitle(QCoreApplication::translate("notepad", "MainWindow", nullptr));
        actionNew->setText(QCoreApplication::translate("notepad", "New", nullptr));
        actionOpen->setText(QCoreApplication::translate("notepad", "Open", nullptr));
        actionSave->setText(QCoreApplication::translate("notepad", "Save", nullptr));
        actionCut->setText(QCoreApplication::translate("notepad", "Cut", nullptr));
        actionCopy->setText(QCoreApplication::translate("notepad", "Copy", nullptr));
        actionPaste->setText(QCoreApplication::translate("notepad", "Paste", nullptr));
        actionUndo->setText(QCoreApplication::translate("notepad", "Undo", nullptr));
        actionRedo->setText(QCoreApplication::translate("notepad", "Redo", nullptr));
        actionSave_As->setText(QCoreApplication::translate("notepad", "Save As", nullptr));
        actionAbout_Notepad->setText(QCoreApplication::translate("notepad", "About Notepad", nullptr));
        actionPrint->setText(QCoreApplication::translate("notepad", "Print", nullptr));
        actionFont->setText(QCoreApplication::translate("notepad", "Font", nullptr));
        actionColour->setText(QCoreApplication::translate("notepad", "Colour", nullptr));
        actionHighlight->setText(QCoreApplication::translate("notepad", "Highlight", nullptr));
        menuFile->setTitle(QCoreApplication::translate("notepad", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("notepad", "Edit", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("notepad", "Format", nullptr));
        menuAbout_2->setTitle(QCoreApplication::translate("notepad", "About", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("notepad", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class notepad: public Ui_notepad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPAD_H
