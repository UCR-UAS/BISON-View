#ifndef USER_H
#define USER_H

#include <QObject>

class User
{
private:
    QString username;
    QString password;
    bool in_use;
    bool go_status;
public:
    User();
    User(const QString& uname, const QString& pass);
    bool login(const QString &uname, const QString &pass);
    bool logout();
    void set_go_status(bool new_status);
    QString get_username();
};

#endif // USER_H
