#ifndef ANALYSIS_H
#define ANALYSIS_H

#include <QDialog>
#include <vector>
#include <iostream>
#include <string>
#include <fstream>
//#include "mainwindow.h"

class MainWindow;  // Forward declaration

namespace Ui {
class analysis;
}

class analysis : public QDialog
{
    Q_OBJECT

public:
    explicit analysis(QWidget *parent = nullptr, MainWindow *mainWindow = nullptr);
    ~analysis();

    void setMainWindow(MainWindow *mainWindow);



private:
    Ui::analysis *ui;
    MainWindow *mainWindow;

};

#endif // ANALYSIS_H
