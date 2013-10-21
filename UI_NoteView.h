/********************************************************************************
** Form generated from reading UI file 'noteview.ui'
**
** Created: Tue Sep 6 22:40:53 2011
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEVIEW_H
#define UI_NOTEVIEW_H

#include <QtWidgets/QGridLayout>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QListWidget>
#include <QtWidgets/qapplication.h>

class Ui_NoteViewClass
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *addButton;
    QListWidget *noteList;
    QPushButton *deleteButton;

    void setupUi(QWidget *NoteViewClass)
    {
        if (NoteViewClass->objectName().isEmpty())
            NoteViewClass->setObjectName(QString::fromUtf8("NoteViewClass"));
        NoteViewClass->resize(299, 174);
        NoteViewClass->setLayoutDirection(Qt::RightToLeft);
        gridLayout = new QGridLayout(NoteViewClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 0, 1, 1);

        addButton = new QPushButton(NoteViewClass);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        gridLayout->addWidget(addButton, 0, 0, 1, 1);

        noteList = new QListWidget(NoteViewClass);
        noteList->setObjectName(QString::fromUtf8("noteList"));
        noteList->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(noteList, 0, 1, 4, 1);

        deleteButton = new QPushButton(NoteViewClass);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        gridLayout->addWidget(deleteButton, 1, 0, 1, 1);


        retranslateUi(NoteViewClass);
        QObject::connect(addButton, SIGNAL(clicked()), NoteViewClass, SLOT(addClicked()));
        QObject::connect(deleteButton, SIGNAL(clicked()), NoteViewClass, SLOT(deleteClicked()));
        QObject::connect(noteList, SIGNAL(itemDoubleClicked(QListWidgetItem*)), NoteViewClass, SLOT(modifyClicked()));

        QMetaObject::connectSlotsByName(NoteViewClass);
    } // setupUi

    void retranslateUi(QWidget *NoteViewClass)
    {
        NoteViewClass->setWindowTitle(QApplication::translate("NoteViewClass", "NoteView", 0));
        addButton->setText(QApplication::translate("NoteViewClass", "Aggiungi", 0));
        deleteButton->setText(QApplication::translate("NoteViewClass", "Elimina", 0));
    } // retranslateUi

};

namespace Ui {
    class NoteViewClass: public Ui_NoteViewClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEVIEW_H
