#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cursorfactory.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QObject::connect(ui->btnCrossCursor, SIGNAL(clicked()), this, SLOT(setCrossCursor()));
    QObject::connect(ui->btnArrowCursor, SIGNAL(clicked()), this, SLOT(setArrowCursor()));
    QObject::connect(ui->btnCircularCursor, SIGNAL(clicked()), this, SLOT(setCircularCursor()));

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::setCrossCursor() {
    setCursor(*CursorFactory::getCrossCursor());
}

void MainWindow::setArrowCursor() {
    setCursor(*CursorFactory::getArrowCursor());
}

void MainWindow::setCircularCursor() {
    setCursor( *CursorFactory::getCircularCursor( QColor(255, 0, 0), 50) );
}
