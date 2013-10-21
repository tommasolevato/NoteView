#include "NoteView.h"
#include "NoteController.h"
#include "NoteModel.h"

#include <QtGui>
#include <QApplication>

int main( int argc, char *argv[] )
{
    QApplication a( argc, argv );
    NoteModel model;
    NoteController controller( &model );
    NoteView w( 0, &controller, &model );
    w.show();
    w.attach();

    model.fromDatabaseIntoVector();

    return a.exec();
}
