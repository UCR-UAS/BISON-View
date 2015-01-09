#include "user.h"

User::User()
{
}

User::User(const QString& uname, const QString& pass){
    username = uname;
    password = pass;
    in_use = false;
    go_status = false;
    role = 0;
}

bool User::login(const QString &uname, const QString &pass){
    if(uname == username){
        if(pass == password){
            if(!in_use){
                in_use = true;
                return(true);
            }
        }
    }
    return(false);
}

bool User::logout(){
    in_use = false;
    go_status = false;
    role = 0;
    return(!in_use);
}

void User::set_go_status(bool new_status){
    go_status = new_status;
}

void User::set_role(int new_role)
{
    role = new_role;
}

QString User::get_username(){
    return(username);
}

QString User::get_go(){
    if(go_status){
        return("1");
    }else{
        return("0");
    }
}

QString User::get_role(){
    return(QString::number(role));
}
