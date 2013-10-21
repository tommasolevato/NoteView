/********************************************************************************
** Form generated from reading UI file 'adddialog.ui'
**
** Created: Tue Sep 6 11:21:15 2011
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDIALOG_H
#define UI_ADDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddDialogClass
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *nameLabel;
    QLineEdit *noteName;
    QVBoxLayout *verticalLayout;
    QLabel *textLabel;
    QPlainTextEdit *noteText;
    QPushButton *okButton;

    void setupUi(QDialog *AddDialogClass)
    {
        if (AddDialogClass->objectName().isEmpty())
            AddDialogClass->setObjectName(QString::fromUtf8("AddDialogClass"));
        AddDialogClass->resize(294, 294);
        gridLayout = new QGridLayout(AddDialogClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        nameLabel = new QLabel(AddDialogClass);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        verticalLayout_2->addWidget(nameLabel);

        noteName = new QLineEdit(AddDialogClass);
        noteName->setObjectName(QString::fromUtf8("noteName"));

        verticalLayout_2->addWidget(noteName);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textLabel = new QLabel(AddDialogClass);
        textLabel->setObjectName(QString::fromUtf8("textLabel"));

        verticalLayout->addWidget(textLabel);

        noteText = new QPlainTextEdit(AddDialogClass);
        noteText->setObjectName(QString::fromUtf8("noteText"));

        verticalLayout->addWidget(noteText);

        okButton = new QPushButton(AddDialogClass);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        verticalLayout->addWidget(okButton);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);


        retranslateUi(AddDialogClass);
        QObject::connect(okButton, SIGNAL(clicked()), AddDialogClass, SLOT(accept()));

        QMetaObject::connectSlotsByName(AddDialogClass);
    } // setupUi

    void retranslateUi(QDialog *AddDialogClass)
    {
        AddDialogClass->setWindowTitle(QApplication::translate("AddDialogClass", "Aggiungi", 0));
        nameLabel->setText(QApplication::translate("AddDialogClass", "Nome:", 0));
        textLabel->setText(QApplication::translate("AddDialogClass", "Testo:", 0));
        okButton->setText(QApplication::translate("AddDialogClass", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class AddDialogClass: public Ui_AddDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDIALOG_H
