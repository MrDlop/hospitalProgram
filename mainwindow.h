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

private slots:
    void on_buttonDMC_clicked();

    void on_buttonD_clicked();

    void on_buttonPM_clicked();

    void on_buttonH_clicked();

private:
    int a=0,b=0,c=0,d=0;

    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
