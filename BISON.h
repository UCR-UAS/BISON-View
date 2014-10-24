#ifndef BISON_H
#define BISON_H

#include <QString>

#define MAX_TEAMS 6
enum TEAMS_t {OBSV = 0, CMDR = 1, TELEM = 2, IMP = 3, MIS = 4, APM = 5};
extern QString TEAM_NAMES[MAX_TEAMS];

#endif // BISON_H
