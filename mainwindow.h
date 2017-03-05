#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QLabel>
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
    void on_tabWidget_tabBarClicked(int index);
    void on_input_dpv_in_type_currentIndexChanged(int index);

private:
    Ui::MainWindow *ui;
    void set_warning_text_style(QLabel *label, int value, int max_value);
};

#endif // MAINWINDOW_H
