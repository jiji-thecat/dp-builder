#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QLabel>

#include "director.h"
#include "creature.h"
#include "cat-builder.h"
#include "alien-builder.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

enum class E_CREATURE{
    Cat,
    Alien,
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QVBoxLayout *rootLayout;
    QVBoxLayout *iconFieldLayout;
    QHBoxLayout *buttonFieldLayout;

    void setLabel(QString string);
    void setButton();

private slots:
    void buttonClickedCat();
    void buttonClickedAlien();
};
#endif // MAINWINDOW_H
