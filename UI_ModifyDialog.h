/********************************************************************************
** Form generated from reading UI file 'modifydialog.ui'
**
** Created: Tue Sep 6 22:32:31 2011
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYDIALOG_H
#define UI_MODIFYDIALOG_H

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

class Ui_ModifyDialogClass
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *nameLabel;
    QLineEdit *noteName;
    QVBoxLayout *verticalLayout_2;
    QLabel *textLabel;
    QPlainTextEdit *noteText;
    QPushButton *okButton;

    void setupUi(QDialog *ModifyDialogClass)
    {
        if (ModifyDialogClass->objectName().isEmpty())
            ModifyDialogClass->setObjectName(QString::fromUtf8("ModifyDialogClass"));
        ModifyDialogClass->resize(334, 258);
        gridLayout = new QGridLayout(ModifyDialogClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        nameLabel = new QLabel(ModifyDialogClass);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        verticalLayout->addWidget(nameLabel);

        noteName = new QLineEdit(ModifyDialogClass);
        noteName->setObjectName(QString::fromUtf8("noteName"));

        verticalLayout->addWidget(noteName);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        textLabel = new QLabel(ModifyDialogClass);
        textLabel->setObjectName(QString::fromUtf8("textLabel"));

        verticalLayout_2->addWidget(textLabel);

        noteText = new QPlainTextEdit(ModifyDialogClass);
        noteText->setObjectName(QString::fromUtf8("noteText"));

        verticalLayout_2->addWidget(noteText);


        gridLayout->addLayout(verticalLayout_2, 1, 0, 1, 1);

        okButton = new QPushButton(ModifyDialogClass);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        gridLayout->addWidget(okButton, 2, 0, 1, 1);


        retranslateUi(ModifyDialogClass);
        QObject::connect(okButton, SIGNAL(clicked()), ModifyDialogClass, SLOT(accept()));

        QMetaObject::connectSlotsByName(ModifyDialogClass);
    } // setupUi

    void retranslateUi(QDialog *ModifyDialogClass)
    {
        ModifyDialogClass->setWindowTitle(QApplication::translate("ModifyDialogClass", "Modifica", 0));
        nameLabel->setText(QApplication::translate("ModifyDialogClass", "Nome:", 0));
        textLabel->setText(QApplication::translate("ModifyDialogClass", "Testo:", 0));
        okButton->setText(QApplication::translate("ModifyDialogClass", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyDialogClass: public Ui_ModifyDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYDIALOG_H
