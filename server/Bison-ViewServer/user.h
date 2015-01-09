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
    int role;
public:
    User();
    User(const QString& uname, const QString& pass);
    bool login(const QString &uname, const QString &pass);
    bool logout();
    void set_go_status(bool new_status);
    void set_role(int role);
    QString get_username();
    QString get_go();
    QString get_role();
};

#endif // USER_H
