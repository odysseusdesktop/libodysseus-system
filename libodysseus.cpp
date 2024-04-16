// File: odysseussystem.cpp

#include "libodysseus.h"
#include <QDir>

QColor LibOdysseus::getAccentColor()
{
    QString homePath = QDir::homePath();
    QImage image(homePath + "/Firefox_wallpaper.png");

    qint64 red = 0;
    qint64 green = 0;
    qint64 blue = 0;

    int pixelCount = image.width() * image.height();

    for(int y = 0; y < image.height(); y++)
    {
        for(int x = 0; x < image.width(); x++)
        {
            QColor color = image.pixelColor(x, y);

            red += color.red();
            green += color.green();
            blue += color.blue();
        }
    }

    return QColor(red / pixelCount, green / pixelCount, blue / pixelCount);
}
