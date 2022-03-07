#include "notepad.h"
#include "ui_notepad.h"
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QPrinter>
#include <QPrintDialog>
#include <QFontDialog>
#include <QFont>
#include <QColorDialog>
#include <QColor>
#include "adminhome.h"

notepad::notepad(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::notepad)
{
//    adminhome *adminho=new adminhome();
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);
}

notepad::~notepad()
{
    delete ui;
}

void notepad::on_actionNew_triggered()
{

    //file_path variable came from mainwindow.h
    file_path = "";

    //clear the text area
    ui->textEdit->setText("");

}


void notepad::on_actionOpen_triggered()
{
    QString file_name= QFileDialog::getOpenFileName(this,"Open the file");
    QFile file(file_name);
    file_path=file_name;
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this,"...","file_name","file not open");
        return;
    }
    QTextStream in(&file);
    QString text = in.readAll();
    ui->textEdit->setText(text);
    file.close();
}

void notepad::on_actionSave_triggered()
{
    QFile file(file_path);
    if(!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this,"...","file_name","file not open");
        return;
    }
    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText();
    out << text;
    file.flush();
    file.close();
}


void notepad::on_actionSave_As_triggered()
{
    QString file_name= QFileDialog::getSaveFileName(this,"Open the file");
    QFile file(file_name);
    file_path=file_name;
    if(!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this,"...","file_name","file not open");
        return;
    }
    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText();
    out << text;
    file.flush();
    file.close();
}


void notepad::on_actionCut_triggered()
{
    ui->textEdit->cut();
}


void notepad::on_actionCopy_triggered()
{
    ui->textEdit->copy();
}


void notepad::on_actionPaste_triggered()
{
     ui->textEdit->paste();
}


void notepad::on_actionUndo_triggered()
{
     ui->textEdit->undo();
}


void notepad::on_actionRedo_triggered()
{
     ui->textEdit->redo();
}


void notepad::on_actionAbout_Notepad_triggered()
{
    QString about_text;
    about_text= "Any Special notes can be kept here";


    QMessageBox::about(this,"About Notepad",about_text);
}


void notepad::on_actionPrint_triggered()
{
   QPrinter printer;
   printer.setPrinterName("DELL Printer");
   QPrintDialog dialog(&printer,this);
   if(dialog.exec()==QDialog::Rejected) return;
   ui->textEdit->print(&printer);
}


void notepad::on_actionFont_triggered()
{
    bool ok;
    QFont font = QFontDialog::getFont(&ok,this);
    if(ok){
        ui->textEdit->setFont(font);
    }else return;

}


void notepad::on_actionColour_triggered()
{
    QColor color = QColorDialog::getColor(Qt::white,this,"Choose Colour");
    if(color.isValid()){
            ui->textEdit->setTextColor(color);

}
}


void notepad::on_actionHighlight_triggered()
{
    QColor color = QColorDialog::getColor(Qt::white,this,"Choose Colour");
    if(color.isValid()){
            ui->textEdit->setTextBackgroundColor(color);

}
}

