#ifndef DBCONNECT_H
#define DBCONNECT_H
#include <iostream>
#include <string>
#include "core.h"


#ifdef DB_WORKS
#include <mysql/mysql.h>
#endif

using namespace std;
class DBConnect
{
private:
//        MYSQL mysql;

public:
    DBConnect();

//    void connect
//    {
//        MYSQL mysql;
//        mysql_init(&mysql);
//        mysql_real_connect(&mysql, "localhost", "root", "root", "test", 3306, NULL, 0);
//        string sql = "insert into t1 (id, name) values (1, 'java1');";
//        mysql_query(&mysql, sql.c_str());
//        mysql_close(&mysql);
//    };

    void insert_student(Student &student);
    void delete_student();
    void select_student();
    void update_student();

    void insert_teacher();
    void delete_teacher();
    void select_teacher();
    void update_teacher();

    void insert_course();
    void delete_course();
    void select_course();
    void update_course();

    void insert_classroom();
    void delete_classroom();
    void select_classroom();
    void update_classroom();
};

#endif // DBCONNECT_H
