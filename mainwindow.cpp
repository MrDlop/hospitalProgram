#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdio.h>
#include <conio.h>
#include <process.h>
#include <fstream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_buttonDMC_clicked()
{
    std::ofstream file;
    a += 1;
    a %= 1000;
    char s[4];
    s[0] = 'a';
    s[1] = (a / 100)+'0';
    s[2] = (a / 10)%10+'0';
    s[3] = (a%10)+'0';
    file.open("print.txt");
    file << s;
    file.close();
    system("notepad /p print.txt");
}


void MainWindow::on_buttonD_clicked()
{
    std::ofstream file;
    b += 1;
    b %= 1000;
    char s[4];
    s[0] = 'b';
    s[1] = (b / 100)+'0';
    s[2] = (b / 10)%10+'0';
    s[3] = (b%10)+'0';
    file.open("print.txt");
    file << s;
    file.close();
    system("notepad /p print.txt");
}


void MainWindow::on_buttonPM_clicked()
{
    std::ofstream file;
    c += 1;
    c %= 1000;
    char s[4];
    s[0] = 'c';
    s[1] = (c / 100)+'0';
    s[2] = (c / 10)%10+'0';
    s[3] = (c%10)+'0';
    file.open("print.txt");
    file << s;
    file.close();
    system("notepad /p print.txt");
}


void MainWindow::on_buttonH_clicked()
{
    std::ofstream file;
    d += 1;
    d %= 1000;
    char s[4];
    s[0] = 'd';
    s[1] = (d / 100)+'0';
    s[2] = (d / 10)%10+'0';
    s[3] = (d%10)+'0';
    file.open("print.txt");
    file << s;
    file.close();
    system("notepad /p print.txt");
}
