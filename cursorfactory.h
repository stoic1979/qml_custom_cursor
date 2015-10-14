#ifndef CURSORFACTORY_H
#define CURSORFACTORY_H

#include <QCursor>

class CursorFactory
{

public:
    static QCursor* getCrossCursor();
    static QCursor* getArrowCursor();

    static QCursor* getCircularCursor(QColor color, int radius);


};

#endif // CURSORFACTORY_H
