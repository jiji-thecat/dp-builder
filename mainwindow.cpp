#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{    
    rootLayout = new QVBoxLayout();
    iconFieldLayout = new QVBoxLayout();
    buttonFieldLayout = new QHBoxLayout();

    setButton();

    rootLayout->setAlignment(Qt::AlignTop | Qt::AlignCenter);
    iconFieldLayout->setAlignment(Qt::AlignTop | Qt::AlignCenter);
    rootLayout->addLayout(buttonFieldLayout);
    rootLayout->addLayout(iconFieldLayout);
    setFixedSize(800, 500);

    ui->setupUi(this);
    ui->centralwidget->setLayout(rootLayout);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::buttonClickedCat()
{
    qDebug() << "clicked" ;

    Builder *builder = new CatBuilder();
    Director *director = new Director(*builder);
    director->assemble();
    setLabel(builder->getResult());
}

void MainWindow::buttonClickedAlien()
{
    qDebug() << "clicked" ;

    Builder *builder = new AlienBuilder();
    Director *director = new Director(*builder);
    director->assemble();
    setLabel(builder->getResult());
}

void MainWindow::setButton()
{
    QPushButton *button = new QPushButton("&Build Cat", this);
    connect(button, SIGNAL(clicked()), this, SLOT(buttonClickedCat()));
    buttonFieldLayout->addWidget(button);

    button = new QPushButton("&Build Alien", this);
    connect(button, SIGNAL(clicked()), this, SLOT(buttonClickedAlien()));
    buttonFieldLayout->addWidget(button);
}

void MainWindow::setLabel(QString string)
{
    QLabel *label = new QLabel();
    QPixmap *image = new QPixmap(":/assets/" + string);

    label->setPixmap(*image);
    label->setFixedSize(80, 80);
    label->setScaledContents(true);

    iconFieldLayout->addWidget(label);
}

