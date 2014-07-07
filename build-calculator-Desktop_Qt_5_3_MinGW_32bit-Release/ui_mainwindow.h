/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionDdd;
    QWidget *centralWidget;
    QPushButton *button_equals;
    QPushButton *pushButton;
    QComboBox *comboBox;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QPushButton *button_open;
    QPushButton *button_close;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QPushButton *button_8;
    QPushButton *button_7;
    QPushButton *button_9;
    QPushButton *button_dot;
    QPushButton *button_5;
    QPushButton *button_3;
    QPushButton *button_1;
    QPushButton *button_6;
    QPushButton *button_2;
    QPushButton *button_4;
    QPushButton *button_0;
    QVBoxLayout *verticalLayout;
    QPushButton *button_divide;
    QPushButton *button_multiply;
    QPushButton *button_plus;
    QPushButton *button_min;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *display;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menuCalculator;
    QMenu *menuTest;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(349, 319);
        actionDdd = new QAction(MainWindow);
        actionDdd->setObjectName(QStringLiteral("actionDdd"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        button_equals = new QPushButton(centralWidget);
        button_equals->setObjectName(QStringLiteral("button_equals"));
        button_equals->setGeometry(QRect(11, 237, 321, 23));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(260, 92, 75, 21));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/icon/resources/square-root-symbol-jpg.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(10, 60, 171, 22));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(130, 90, 51, 23));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 90, 113, 20));
        button_open = new QPushButton(centralWidget);
        button_open->setObjectName(QStringLiteral("button_open"));
        button_open->setGeometry(QRect(180, 90, 31, 23));
        button_close = new QPushButton(centralWidget);
        button_close->setObjectName(QStringLiteral("button_close"));
        button_close->setGeometry(QRect(220, 90, 31, 23));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(11, 117, 324, 114));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        button_8 = new QPushButton(widget);
        button_8->setObjectName(QStringLiteral("button_8"));

        gridLayout->addWidget(button_8, 0, 1, 1, 1);

        button_7 = new QPushButton(widget);
        button_7->setObjectName(QStringLiteral("button_7"));

        gridLayout->addWidget(button_7, 0, 0, 1, 1);

        button_9 = new QPushButton(widget);
        button_9->setObjectName(QStringLiteral("button_9"));

        gridLayout->addWidget(button_9, 0, 2, 1, 1);

        button_dot = new QPushButton(widget);
        button_dot->setObjectName(QStringLiteral("button_dot"));

        gridLayout->addWidget(button_dot, 3, 2, 1, 1);

        button_5 = new QPushButton(widget);
        button_5->setObjectName(QStringLiteral("button_5"));

        gridLayout->addWidget(button_5, 1, 1, 1, 1);

        button_3 = new QPushButton(widget);
        button_3->setObjectName(QStringLiteral("button_3"));

        gridLayout->addWidget(button_3, 2, 2, 1, 1);

        button_1 = new QPushButton(widget);
        button_1->setObjectName(QStringLiteral("button_1"));

        gridLayout->addWidget(button_1, 2, 0, 1, 1);

        button_6 = new QPushButton(widget);
        button_6->setObjectName(QStringLiteral("button_6"));

        gridLayout->addWidget(button_6, 1, 2, 1, 1);

        button_2 = new QPushButton(widget);
        button_2->setObjectName(QStringLiteral("button_2"));

        gridLayout->addWidget(button_2, 2, 1, 1, 1);

        button_4 = new QPushButton(widget);
        button_4->setObjectName(QStringLiteral("button_4"));

        gridLayout->addWidget(button_4, 1, 0, 1, 1);

        button_0 = new QPushButton(widget);
        button_0->setObjectName(QStringLiteral("button_0"));

        gridLayout->addWidget(button_0, 3, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        button_divide = new QPushButton(widget);
        button_divide->setObjectName(QStringLiteral("button_divide"));

        verticalLayout->addWidget(button_divide);

        button_multiply = new QPushButton(widget);
        button_multiply->setObjectName(QStringLiteral("button_multiply"));

        verticalLayout->addWidget(button_multiply);

        button_plus = new QPushButton(widget);
        button_plus->setObjectName(QStringLiteral("button_plus"));

        verticalLayout->addWidget(button_plus);

        button_min = new QPushButton(widget);
        button_min->setObjectName(QStringLiteral("button_min"));

        verticalLayout->addWidget(button_min);


        horizontalLayout->addLayout(verticalLayout);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 10, 321, 41));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        display = new QLineEdit(widget1);
        display->setObjectName(QStringLiteral("display"));

        verticalLayout_2->addWidget(display);

        label = new QLabel(widget1);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 349, 21));
        menuCalculator = new QMenu(menuBar);
        menuCalculator->setObjectName(QStringLiteral("menuCalculator"));
        menuTest = new QMenu(menuBar);
        menuTest->setObjectName(QStringLiteral("menuTest"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuCalculator->menuAction());
        menuBar->addAction(menuTest->menuAction());
        menuTest->addSeparator();
        menuTest->addSeparator();
        menuTest->addSeparator();
        menuTest->addAction(actionDdd);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionDdd->setText(QApplication::translate("MainWindow", "ddd", 0));
        button_equals->setText(QApplication::translate("MainWindow", "=", 0));
        pushButton->setText(QApplication::translate("MainWindow", "sqrt", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "saved constants", 0)
        );
        pushButton_2->setText(QApplication::translate("MainWindow", "new", 0));
        button_open->setText(QApplication::translate("MainWindow", "(", 0));
        button_close->setText(QApplication::translate("MainWindow", ")", 0));
        button_8->setText(QApplication::translate("MainWindow", "8", 0));
        button_7->setText(QApplication::translate("MainWindow", "7", 0));
        button_9->setText(QApplication::translate("MainWindow", "9", 0));
        button_dot->setText(QApplication::translate("MainWindow", ".", 0));
        button_5->setText(QApplication::translate("MainWindow", "5", 0));
        button_3->setText(QApplication::translate("MainWindow", "3", 0));
        button_1->setText(QApplication::translate("MainWindow", "1", 0));
        button_6->setText(QApplication::translate("MainWindow", "6", 0));
        button_2->setText(QApplication::translate("MainWindow", "2", 0));
        button_4->setText(QApplication::translate("MainWindow", "4", 0));
        button_0->setText(QApplication::translate("MainWindow", "0", 0));
        button_divide->setText(QApplication::translate("MainWindow", "/", 0));
        button_multiply->setText(QApplication::translate("MainWindow", "*", 0));
        button_plus->setText(QApplication::translate("MainWindow", "+", 0));
        button_min->setText(QApplication::translate("MainWindow", "-", 0));
        label->setText(QString());
        menuCalculator->setTitle(QApplication::translate("MainWindow", "calculator", 0));
        menuTest->setTitle(QApplication::translate("MainWindow", "test", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
