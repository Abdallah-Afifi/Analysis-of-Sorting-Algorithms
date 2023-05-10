#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

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

void MainWindow::on_startButton_clicked()
{
    // Get the selected sorting algorithm and array size
    QString algorithm = ui->algorithmComboBox->currentText();
    int arraySize = ui->sizeComboBox->currentText().toInt();

    // Perform the analysis with the selected algorithm and array size
    qDebug() << "Selected Algorithm:" << algorithm;
    qDebug() << "Array Size:" << arraySize;

    // Add your analysis code here
}
