#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

#include "overlayeditor.h"
#include "overlayfunctions.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow{
   Q_OBJECT

public:
   OverlayEditor* editor;

   explicit MainWindow(QWidget* parent = nullptr);
   ~MainWindow();

private slots:
   void updateDisplay();

private:
   Ui::MainWindow* ui;
   OverlayFunctions* tools;
   QTimer* refreshDisplay;
};

#endif