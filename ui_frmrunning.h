/********************************************************************************
** Form generated from reading UI file 'frmrunning.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMRUNNING_H
#define UI_FRMRUNNING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrmRunning
{
public:
    QPushButton *pushButton_2;
    QPushButton *btnViewConfig;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QListView *listConfigurations;
    QTextEdit *txtBox;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *txtLine;
    QPushButton *btnSend;

    void setupUi(QWidget *FrmRunning)
    {
        if (FrmRunning->objectName().isEmpty())
            FrmRunning->setObjectName(QString::fromUtf8("FrmRunning"));
        FrmRunning->resize(400, 300);
        pushButton_2 = new QPushButton(FrmRunning);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(280, 260, 89, 25));
        btnViewConfig = new QPushButton(FrmRunning);
        btnViewConfig->setObjectName(QString::fromUtf8("btnViewConfig"));
        btnViewConfig->setGeometry(QRect(40, 260, 31, 25));
        widget = new QWidget(FrmRunning);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(250, 10, 124, 19));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        widget1 = new QWidget(FrmRunning);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(40, 40, 311, 211));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        listConfigurations = new QListView(widget1);
        listConfigurations->setObjectName(QString::fromUtf8("listConfigurations"));

        verticalLayout->addWidget(listConfigurations);

        txtBox = new QTextEdit(widget1);
        txtBox->setObjectName(QString::fromUtf8("txtBox"));

        verticalLayout->addWidget(txtBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        txtLine = new QLineEdit(widget1);
        txtLine->setObjectName(QString::fromUtf8("txtLine"));

        horizontalLayout_2->addWidget(txtLine);

        btnSend = new QPushButton(widget1);
        btnSend->setObjectName(QString::fromUtf8("btnSend"));
        btnSend->setMaximumSize(QSize(51, 25));

        horizontalLayout_2->addWidget(btnSend);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(FrmRunning);

        QMetaObject::connectSlotsByName(FrmRunning);
    } // setupUi

    void retranslateUi(QWidget *FrmRunning)
    {
        FrmRunning->setWindowTitle(QCoreApplication::translate("FrmRunning", "MST - Server running", nullptr));
        pushButton_2->setText(QCoreApplication::translate("FrmRunning", "btnStop", nullptr));
        btnViewConfig->setText(QCoreApplication::translate("FrmRunning", "btnViewConfig", nullptr));
        label->setText(QCoreApplication::translate("FrmRunning", "lblState", nullptr));
        label_2->setText(QCoreApplication::translate("FrmRunning", "lblState2", nullptr));
        btnSend->setText(QCoreApplication::translate("FrmRunning", ">", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FrmRunning: public Ui_FrmRunning {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMRUNNING_H
