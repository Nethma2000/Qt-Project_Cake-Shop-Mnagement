#include "notepadapp.h"
#include "ui_notepadapp.h"

notepadapp::notepadapp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::notepadapp)
{
    ui->setupUi(this);
}

notepadapp::~notepadapp()
{
    delete ui;
}
