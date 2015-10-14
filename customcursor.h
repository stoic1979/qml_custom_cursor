#ifndef CUSTOMCURSOR_H
#define CUSTOMCURSOR_H

#include <QCursor>

class CustomCursor : public QCursor
{
public:
    CustomCursor();
    ~CustomCursor();

    void setCursorImage(QString *imgPath);
    void setRadius(int radius);
    void setOpacity(int opacity);

private:
    int radius;
    int opacity;

};

#endif // CUSTOMCURSOR_H
