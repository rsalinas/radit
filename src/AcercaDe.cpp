/**
 * AcercaDe
 * -----------------------------------------
 *
 * - View of about software
 *
 * @author Victor Algaba
 */
#include "AcercaDe.h"
AcercaDe::AcercaDe(QDialog *parent )
    :QDialog(parent)
{
    setupUi(this);
    setModal(true);

    #ifdef Q_OS_WIN32
        setWindowFlags( Qt::Tool);
    #endif

    //set size views
    QSize fixedSize(this->width(),this->height());
    setMinimumSize(fixedSize);
    setMaximumSize(fixedSize);
    setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
}
