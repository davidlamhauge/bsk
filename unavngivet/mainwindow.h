#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void kontrollerPlus();
    void plus(int tal1, int tal2);
    void afslut();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
