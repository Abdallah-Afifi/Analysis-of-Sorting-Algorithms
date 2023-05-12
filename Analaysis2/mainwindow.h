#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QComboBox>
#include <QPushButton>
#include "analysis.h"
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int getAlgorithm() const;
    int getVecSize() const;

private slots:
    void on_startButton_clicked();

private:
    Ui::MainWindow *ui;
    QComboBox *sizeComboBox;
    QMessageBox *message;
    QPushButton *startButton;
    analysis *Analysis;
    int algorithm=0;
    int vecSize=0;
};

#endif // MAINWINDOW_H
