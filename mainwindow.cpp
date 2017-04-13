#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QPushButton"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPushButton newButton( "Soy Plaplepli", 0 );
    newButton.resize( 100, 30 );

    newButton.show();

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Test", "Plaplepli?",
                                          QMessageBox::Yes|QMessageBox::No);
}

MainWindow::~MainWindow()
{
    delete ui;
}
