#include "messageBox.h"

void showGameOverMessage(const QString &title, const QString &message)
{
    QMessageBox msgBox;
    msgBox.setWindowTitle(title);
    msgBox.setText(message);
    msgBox.setIcon(QMessageBox::Information);
    msgBox.setStyleSheet("QMessageBox { background-color: #002F41; } "
                         "QLabel { color: #61B8D3; font-weight: bold; } "
                         "QPushButton { background-color: #003E54; color: white; } "
                         "QPushButton:hover { background-color: #004F6A; }");
    msgBox.exec();
}
