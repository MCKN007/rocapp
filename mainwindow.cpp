#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "windows.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_toolButton_clicked(bool checked)
{

    ShellExecute(NULL,L"open",L"C:\\Program Files\\rocapp\\exe\\rocket_1.exe",NULL,NULL,SW_SHOW);
}

void MainWindow::on_pushButton_clicked(bool checked)
{
     ShellExecute(NULL,L"open",L"C:\\Program Files\\rocapp\\exe\\rocket_2.exe",NULL,NULL,SW_SHOW);
}

void MainWindow::on_pushButton_9_clicked(bool checked)
{
     ShellExecute(NULL,L"open",L"C:\\Program Files\\rocapp\\exe\\rocket_3.exe",NULL,NULL,SW_SHOW);
}

void MainWindow::on_pushButton_2_clicked(bool checked)
{
     ShellExecute(NULL,L"open",L"C:\\Program Files\\rocapp\\exe\\rocket_4.exe",NULL,NULL,SW_SHOW);
}

void MainWindow::on_pushButton_4_clicked(bool checked)
{
     ShellExecute(NULL,L"open",L"C:\\Program Files\\rocapp\\exe\\rocket_5.exe",NULL,NULL,SW_SHOW);
}

void MainWindow::on_pushButton_6_clicked(bool checked)
{
     ShellExecute(NULL,L"open",L"C:\\Program Files\\rocapp\\exe\\rocket_6.exe",NULL,NULL,SW_SHOW);
}

void MainWindow::on_pushButton_5_clicked(bool checked)
{
     ShellExecute(NULL,L"open",L"C:\\Program Files\\rocapp\\exe\\rocket_7.exe",NULL,NULL,SW_SHOW);
}

void MainWindow::on_pushButton_10_clicked(bool checked)
{
     ShellExecute(NULL,L"open",L"C:\\Program Files\\rocapp\\exe\\rocket_8.exe",NULL,NULL,SW_SHOW);
}

void MainWindow::on_pushButton_8_clicked(bool checked)
{
     ShellExecute(NULL,L"open",L"C:\\Program Files\\rocapp\\exe\\rocket_9.exe",NULL,NULL,SW_SHOW);
}

void MainWindow::on_pushButton_7_clicked(bool checked)
{
     ShellExecute(NULL,L"open",L"C:\\Program Files\\rocapp\\exe\\rocket_10.exe",NULL,NULL,SW_SHOW);
}

void MainWindow::on_pushButton_3_clicked(bool checked)
{
     ShellExecute(NULL,L"open",L"C:\\Program Files\\rocapp\\exe\\rocket_11.exe",NULL,NULL,SW_SHOW);
}

void MainWindow::on_pushButton_11_clicked(bool checked)
{
     ShellExecute(NULL,L"open",L"C:\\Program Files\\rocapp\\exe\\rocket_12.exe",NULL,NULL,SW_SHOW);
}
void MainWindow::on_pushButton_12_clicked(bool checked)
{
      ShellExecute(NULL,L"open",L"C:\\Program Files\\rocapp\\exe\\rocket_13.exe",NULL,NULL,SW_SHOW);
}
void MainWindow::on_pushButton_13_clicked(bool checked)
{
    ShellExecute(NULL,L"open",L"C:\\Program Files\\rocapp\\exe\\System_OP.exe",NULL,NULL,SW_SHOW);
}

