#ifndef ANALYSIS_H
#define ANALYSIS_H

#include <QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLineSeries>
#include <QTableWidget>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class Analysis; }
QT_END_NAMESPACE

class Analysis : public QMainWindow
{
    Q_OBJECT

public:
    explicit Analysis(QWidget *parent = nullptr);
    ~Analysis();

    void setResults(QMap<QString, QPair<int, int>> results);

private slots:
    void on_exportButton_clicked();

private:
    Ui::Analysis *ui;
    QtCharts::QChartView *chartView;
    QTableWidget *tableWidget;
    QPushButton *exportButton;

    void populateChart(QMap<QString, QPair<int, int>> results);
    void populateTable(QMap<QString, QPair<int, int>> results);
};

#endif // ANALYSIS_H
