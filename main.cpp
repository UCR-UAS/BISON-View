/* Engineer: Brandon Lu (blu006@ucr.edu)
 * Organization: UCR SUAS
 * Project: BISON-View
 * Filename: main.cpp
 * Description:
 * This is the main file for BISON-View.
 */

#include <QApplication>
#include <QDebug>
#include "bison_view.h"
#include "BISON.h"

QString TEAM_NAMES[MAX_TEAMS] = {
    "Observer",
    "Mission Commander",
    "Telemetry",
    "Image Processing",
    "Mission",
    "Autopilot",
};

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    BISON_View w;
    w.show();
    
    return a.exec();
}
