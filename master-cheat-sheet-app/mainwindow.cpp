#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    auto *list = new QListWidget;
    auto *stack = new QStackedWidget;
    auto *menu = new QMenuBar;

    connect(list, &QListWidget::currentRowChanged,
            stack, &QStackedWidget::setCurrentIndex);
}

MainWindow::~MainWindow()
{
    delete ui;
}
