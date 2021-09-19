#ifndef AICCFLOATTOOLBAR_H
#define AICCFLOATTOOLBAR_H

#include <QWidget>

namespace Ui {
class AICCFloatToolbar;
}
//QDESIGNER_EXPORT_WIDGETS
class AICCFloatToolbar : public QWidget
{
    Q_OBJECT

public:
    explicit AICCFloatToolbar(QWidget *parent = nullptr);
    ~AICCFloatToolbar();

private:
    Ui::AICCFloatToolbar *ui;
};

#endif // AICCFLOATTOOLBAR_H
