#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "analysis.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      ui(new Ui::MainWindow),
      Analysis(nullptr)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    //delete Analysis;
    delete ui;
}

void MainWindow::on_startButton_clicked()
{
    while (true) {
        // Get the selected sorting algorithm and array size
        QString algorithmText = ui->algorithmComboBox->currentText();
        vecSize = ui->sizeComboBox->currentText().toInt();

        // Convert the algorithmText to an integer
        algorithm = -1;
        if (algorithmText == "Insertion Sort") {
            algorithm = 1;
        } else if (algorithmText == "Selection Sort") {
            algorithm = 0;
        } else if (algorithmText == "Bubble Sort") {
            algorithm = 6;
        } else if (algorithmText == "Merge Sort") {
            algorithm = 2;
        } else if (algorithmText == "Quick Sort First Pivot") {
            algorithm = 3;
        } else if (algorithmText == "Quick Sort Random Pivot") {
            algorithm = 4;
        } else if (algorithmText == "Quick Sort Median Pivot") {
            algorithm = 5;
        } else if (algorithmText == "Tree Sort") {
            algorithm = 9;
        } else if (algorithmText == "Counting Sort") {
            algorithm = 7;
        } else if (algorithmText == "Heap Sort") {
            algorithm = 8;
        } else if (algorithmText == "Shell Sort") {
            algorithm = 10;
        }

        // Create a new analysis dialog and show it
        Analysis = new analysis(this, this);
        Analysis->show();

        // Ask the user if they want to continue
        int response = QMessageBox::question(this, "Continue?", "Do you want to run the analysis again?",
                                              QMessageBox::Yes | QMessageBox::No);

        if (response == QMessageBox::Yes) {
            // Exit the loop and close the dialog
            Analysis->close();
            break;
        }
        if (response == QMessageBox::No) {
            // Exit the loop and close the dialog
            Analysis->close();
            this ->close();
            break;
        }

    }
}

int MainWindow::getAlgorithm()const{
    return algorithm;
}

int MainWindow::getVecSize()const{
    return vecSize;
}

