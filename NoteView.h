#ifndef NOTEVIEW_H
#define NOTEVIEW_H

#include <QtGui/QWidgetList>
#include "UI_NoteView.h"

#include "Observer.h"
#include "NoteController.h"
#include "NoteModel.h"

class NoteView : public QWidget, public Observer
{
    Q_OBJECT

public:
    NoteView( QWidget* parent = 0, NoteController* controller = 0, NoteModel* model = 0);
    virtual ~NoteView();

    void showNotes();
    virtual void update();

private slots:
    void addClicked();
    void deleteClicked();
    void modifyClicked();

private:
    Ui::NoteViewClass ui;
    NoteController* _controller;
};

#endif // NOTEVIEW_H
