#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QDir>
#include <QPixmap>
#include <QAction>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QDir::setCurrent(QDir::homePath());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnTaskAdd_clicked()
{
    ui->tblTasks->insertRow( ui->tblTasks->rowCount() );
}

void MainWindow::on_btnTaskRemove_clicked()
{
}

void MainWindow::on_btnEnvRemove_clicked()
{

}

void MainWindow::on_btnEnvAdd_clicked()
{
    ui->tblEnvVars->insertRow( ui->tblEnvVars->rowCount() );
}

void MainWindow::on_btnSelectSplash_clicked()
{
    QFileDialog *fileDlg = new QFileDialog(this, tr(""),0,"Images (*.png *.gif *.jpg *.bmp)");
    fileDlg->setAcceptMode(QFileDialog::AcceptOpen);
    if (fileDlg->exec()) {
        QString fileName = fileDlg->selectedFiles().first();
        QPixmap splash(fileName);
        ui->lblPreviewSplash->setPixmap( splash );
        ui->tbxSplashFile->setText( fileName );
    }
}

void MainWindow::on_action_Quit_triggered()
{
    QApplication::quit();
}

void MainWindow::on_actionAbout_Qt_triggered()
{
    QApplication::aboutQt();
}

void MainWindow::on_actionEnglish_triggered()
{
    foreach (QAction* each, ui->languageToolbar->actions()) {
        each->setChecked(false);
    }
    ui->actionEnglish->setChecked(true);
}

void MainWindow::on_btnIconOpen_clicked()
{
    QFileDialog *fileDlg = new QFileDialog(this, tr(""),0,"Icons (*.ico)");
    fileDlg->setAcceptMode(QFileDialog::AcceptOpen);
    if (fileDlg->exec()) {
        QString fileName = fileDlg->selectedFiles().first();
        QPixmap icon(fileName);
        ui->lblPreviewIcon->setPixmap( icon );
        ui->tbxIconFile->setText( fileName );
    }
}

void MainWindow::on_actionFrench_triggered()
{
    foreach (QAction* each, ui->languageToolbar->actions()) {
        each->setChecked(false);
    }
    ui->actionFrench->setChecked(true);
}

void MainWindow::on_actionDeutsch_triggered()
{
    foreach (QAction* each, ui->languageToolbar->actions()) {
        each->setChecked(false);
    }
    ui->actionDeutsch->setChecked(true);
}

void MainWindow::on_actionVietnamese_triggered()
{
    foreach (QAction* each, ui->languageToolbar->actions()) {
        each->setChecked(false);
    }
    ui->actionVietnamese->setChecked(true);
}
