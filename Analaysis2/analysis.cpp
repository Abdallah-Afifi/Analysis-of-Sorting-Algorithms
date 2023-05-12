#include "analysis.h"
#include "ui_analysis.h"
#include "mainwindow.h"
#include <vector>
#include <iostream>
#include <string>
#include <fstream>
#include "RandomPermutationVectorGenerator.h"
#include "SortTester.h"
#include "SortingAlgorithm.h"
#include "InsertionSort.h"
#include "SelectionSort.h"
#include "BubbleSort.h"
#include "CountingSort.h"
#include "HeapSort.h"
#include "MergeSort.h"
#include "QuickSortFirstPivot.h"
#include "QuickSortMedianPivot.h"
#include "QuickSortRandomPivot.h"
#include "ShellSort.h"
#include "TreeSort.h"


void analysis::setMainWindow(MainWindow *mainWindow)
{
this->mainWindow = mainWindow;
}


analysis::analysis(QWidget *parent, MainWindow *mainWindow) :
QDialog(parent),
ui(new Ui::analysis)
//mainWindow(nullptr)
{
ui->setupUi(this);
// Check if mainWindow is not null
if (mainWindow == nullptr) {
    std::cerr << "Error: mainWindow is null." << std::endl;
    return;
}

// Get the selected sorting algorithm and array size
int vectorSize = mainWindow->getVecSize();
int myAlgorithm = mainWindow->getAlgorithm();

// Create instances of sorting algorithms to be tested
std::vector<SortingAlgorithm*> sortingAlgorithms;
sortingAlgorithms.push_back(new SelectionSort());
sortingAlgorithms.push_back(new InsertionSort());
sortingAlgorithms.push_back(new MergeSort());
sortingAlgorithms.push_back(new QuickSortFirstPivot());
sortingAlgorithms.push_back(new QuickSortRandomPivot());
sortingAlgorithms.push_back(new QuickSortMedianPivot());
sortingAlgorithms.push_back(new BubbleSort());
sortingAlgorithms.push_back(new CountingSort());
sortingAlgorithms.push_back(new HeapSort());
sortingAlgorithms.push_back(new TreeSort());
sortingAlgorithms.push_back(new ShellSort());


// Create instance of array generator
RandomPermutationVectorGenerator vecGenerator;
std::vector<int> vec = vecGenerator.GenerateVector(vectorSize);

// Create instance of sort tester
SortTester sortTester;

auto start_time = std::chrono::high_resolution_clock::now();

sortTester.TestSortingAlgorithm(sortingAlgorithms[myAlgorithm], vec, vectorSize);

auto end_time = std::chrono::high_resolution_clock::now();

std::chrono::duration<double, std::milli> elapsed_time = end_time - start_time;

//to access it -> elapsed_time.count()

ui->label->setText("Algorithm: " + QString::fromStdString(sortingAlgorithms[myAlgorithm]->GetName()));

ui->label_2->setText("Size: " + QString::number(vectorSize));

ui->tableWidget->horizontalHeader()->setDefaultSectionSize(140);
ui->tableWidget->verticalHeader()->setDefaultSectionSize(40);

ui->tableWidget->setRowCount(2);
ui->tableWidget->setColumnCount(5);
ui->tableWidget->setItem(0, 0, new QTableWidgetItem("Comparisons"));
ui->tableWidget->setItem(0, 1, new QTableWidgetItem("Swaps"));
ui->tableWidget->setItem(0, 2, new QTableWidgetItem("Entropy"));
ui->tableWidget->setItem(0, 3, new QTableWidgetItem("Execution Time"));
ui->tableWidget->setItem(0, 4, new QTableWidgetItem("Model"));
ui->tableWidget->setItem(1, 0, new QTableWidgetItem(QString::number(sortingAlgorithms[myAlgorithm]->GetComparisons())));
ui->tableWidget->setItem(1, 1, new QTableWidgetItem(QString::number(sortingAlgorithms[myAlgorithm]->GetSwaps())));
ui->tableWidget->setItem(1, 2, new QTableWidgetItem(QString::number(vecGenerator.GetEntropy(vec))));
ui->tableWidget->setItem(1, 3, new QTableWidgetItem(QString::number(elapsed_time.count())));
ui->tableWidget->setItem(1, 4, new QTableWidgetItem(QString::number(sortingAlgorithms[myAlgorithm]->GetModel())));



// Free allocated memory
for (int i = 0; i < sortingAlgorithms.size(); i++) {
    delete sortingAlgorithms[i];


}
}

analysis::~analysis()
{
delete ui;
}
