#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_radioButton_clicked();

    void on_pushButton_5_clicked();

    void on_radioButton_released();

    void on_radioButton_2_clicked();

    void on_pushButton_2_clicked();

    void on_checkBox_clicked();

    void on_checkBox_cpu_clicked();

    void on_checkBox_inst_clicked();

    void on_checkBox_cm_clicked();

    void on_checkBox_pf_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
