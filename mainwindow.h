#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <QtSql>
#include <QDataWidgetMapper>
#include "qwcomboboxdelegate.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QSqlDatabase  database;
    QSqlTableModel  *tabModel;
    QItemSelectionModel *theSelection;
    QDataWidgetMapper   *dataMapper;

    QWcomboboxdelegate comboboxdelegate1;
    QWcomboboxdelegate comboboxdelegate2;

    QAction *actOpenDB;
    QAction *actQuit;
    QAction *actRecAppend;
    QAction *actRecInsert;
    QAction *actSubmit;
    QAction *actRevert;
    QAction *actRecDelete;
    QAction *actPhoto;
    QAction *actPhotoClear;
    QAction *actScan;
    QWidget *centralWidget;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBoxSort;
    QGridLayout *gridLayout_3;
    QLabel *label_14;
    QComboBox *comboFields;
    QSpacerItem *horizontalSpacer;
    QRadioButton *radioBtnAscend;
    QRadioButton *radioBtnDescend;
    QGroupBox *groupBoxFilter;
    QGridLayout *gridLayout_2;
    QRadioButton *radioBtnMan;
    QRadioButton *radioBtnWoman;
    QRadioButton *radioBtnBoth;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QTableView *tableView;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *dbSpinEmpNo;
    QLabel *label_2;
    QLineEdit *dbEditName;
    QLabel *label_3;
    QComboBox *dbComboSex;
    QLabel *label_4;
    QDoubleSpinBox *dbSpinHeight;
    QLabel *label_5;
    QDateEdit *dbEditBirth;
    QLabel *label_10;
    QLineEdit *dbEditMobile;
    QLabel *label_7;
    QComboBox *dbComboProvince;
    QLabel *label_8;
    QLineEdit *dbEditCity;
    QLabel *label_6;
    QComboBox *dbComboDep;
    QPlainTextEdit *dbEditMemo;
    QLabel *label_9;
    QLabel *label_11;
    QSpinBox *dbSpinSalary;
    QLabel *label_12;
    QComboBox *dbComboEdu;
    QVBoxLayout *verticalLayout;
    QLabel *label_13;
    QLabel *dbLabPhoto;
    QSpacerItem *verticalSpacer;
    QMenuBar *menuBar;
    QStatusBar *statusBar;
    QToolBar *mainToolBar;

    void openTable();
    void getFieldNames();
    void initui(QMainWindow *MainWindow);
    void retranslateUi();
    void signalconnectslot();

private slots:
    void on_currentChanged(const QModelIndex &current, const QModelIndex &previous);
    void on_currentRowChanged(const QModelIndex &current, const QModelIndex &previous);
    void on_actOpenDB_triggered();
    void on_actRecAppend_triggered();
    void on_actRecInsert_triggered();
    void on_actRevert_triggered();
    void on_actSubmit_triggered();
    void on_actRecDelete_triggered();
    void on_actPhoto_triggered();
    void on_actPhotoClear_triggered();
    void on_radioBtnAscend_clicked();
    void on_radioBtnDescend_clicked();
    void on_radioBtnMan_clicked();
    void on_radioBtnWoman_clicked();
    void on_radioBtnBoth_clicked();
    void on_comboFields_currentIndexChanged(int index);
    void on_actScan_triggered();
};

#endif // MAINWINDOW_H
