#ifndef NOTEPADAPP_H
#define NOTEPADAPP_H

#include <QDialog>

namespace Ui {
class notepadapp;
}

class notepadapp : public QDialog
{
    Q_OBJECT

public:
    explicit notepadapp(QWidget *parent = nullptr);
    ~notepadapp();

private:
    Ui::notepadapp *ui;
};

#endif // NOTEPADAPP_H
