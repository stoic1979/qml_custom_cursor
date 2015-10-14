#include "cursorfactory.h"
#include <QPixmap>
#include <QPainter>
#include <QRectF>


QCursor* CursorFactory::getCrossCursor() {
    return new QCursor(Qt::CrossCursor);
}

QCursor* CursorFactory::getArrowCursor() {
    return new QCursor(Qt::ArrowCursor);
}

QCursor* CursorFactory::getCircularCursor(QColor color, int radius) {

    QPixmap *pix = new QPixmap(radius, radius);
    pix->fill(QColor(0,0,0,0));

    QPainter *paint = new QPainter(pix);
    paint->setPen(color);
    //paint->drawRect( QRectF(2, 2, radius-4, radius-4) );

     paint->drawEllipse(QRectF(2, 2, radius-4, radius-4));


    return new QCursor(*pix);
}
