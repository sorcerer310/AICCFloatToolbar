#include "aiccfloattoolbar.h"
#include "ui_aiccfloattoolbar.h"

AICCFloatToolbar::AICCFloatToolbar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AICCFloatToolbar)
{
    ui->setupUi(this);
}

AICCFloatToolbar::~AICCFloatToolbar()
{
    delete ui;
}
