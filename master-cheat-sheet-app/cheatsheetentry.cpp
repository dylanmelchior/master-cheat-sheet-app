#include "cheatsheetentry.h"

CheatSheetEntry::CheatSheetEntry(QString cName, QVector<QString> cKeybinds, QString cDescription)
{
    if (cName.isEmpty())
    {
        // Error handling
    }

    for(int i = 0; i < cKeybinds.size(); i++)
    {
        this->appendKeybind();
    }
}
