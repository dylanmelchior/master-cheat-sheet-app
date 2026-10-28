#ifndef CHEATSHEET_H
#define CHEATSHEET_H

#include <QString>
#include <QVector>

class CheatSheet
{
public:
    CheatSheet();

    virtual QString name();

    virtual QVector<QString> categories();

};

#endif // CHEATSHEET_H
