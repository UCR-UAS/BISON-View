#include "user.h"

User::User()
{
}

User::User(const QString& uname, const QString& pass){
    username = uname;
    password = pass;
    in_use = false;
    go_status = false;
}

bool User::login(const QString &uname, const QString &pass){
    if(uname == username){
        if(pass == password){
            if(!in_use){
                in_use = true;
            }
        }
    }
    return(in_use);
}

bool User::logout(){
    in_use = false;
    go_status = false;
    return(!in_use);
}

QString User::get_username(){
    return(username);
}

void User::set_go_status(bool new_status){
    go_status = new_status;
}
