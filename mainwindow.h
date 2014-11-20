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
    void on_btnTaskAdd_clicked();

    void on_btnTaskRemove_clicked();

    void on_btnEnvRemove_clicked();

    void on_btnEnvAdd_clicked();

    void on_btnSelectSplash_clicked();

    void on_action_Quit_triggered();

    void on_actionAbout_Qt_triggered();

    void on_actionEnglish_triggered();

    void on_btnIconOpen_clicked();

    void on_actionFrench_triggered();

    void on_actionDeutsch_triggered();

    void on_actionVietnamese_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
