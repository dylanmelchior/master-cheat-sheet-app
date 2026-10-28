#ifndef CHEATSHEETENTRY_H
#define CHEATSHEETENTRY_H

#include <QString>
#include <QVector>

/**
 * @brief The CheatSheetEntry class represents one entry for a cheat sheet. Each has a command name, associated keybindings
 * and a description.
 */
class CheatSheetEntry
{
public:
    CheatSheetEntry(QString cName, QVector<QString> cKeybinds, QString cDescription);

    /**
     * @brief commandName The name of the command.
     */
    const QString commandName;

    /**
     * @brief commandKeybinds A vector of keybinds to perform this command.
     */
    QVector<QString> commandKeybinds;

    /**
     * @brief commandDescription A description of what this command does.
     */
    QString commandDescription;

    // Getters
    QString getCommandName();

    QVector<QString> getCommandKeybinds();

    QString getCommandDescription();

    // Methods
    void appendKeybind();

    void updateCommandDescription();
};

#endif // CHEATSHEETENTRY_H
