#include "dbconnect.h"


DBConnect::DBConnect()
{
}

void DBConnect::insert_classroom()
{
    long long building_num;
    int room_num;

    //        mysql_init(&mysql);
    //        mysql_real_connect(&mysql, "localhost", "root", "root", "test", 3306, NULL, 0);

    string sql = "insert into class_room (building_num, room_num) values (1, 2);";

    //        mysql_query(&mysql, sql.c_str());
    //        mysql_close(&mysql);
}

void DBConnect::insert_student(Student &student)
{

    //        mysql_init(&mysql);
    //        mysql_real_connect(&mysql, "localhost", "root", "root", "test", 3306, NULL, 0);

    string sql = "insert into class_room (ID, name, class_num, teach_class_num, major, old_come_from, come_from, name_pinyin, nationality, sex, birth_date, address, old_address, password, email) values (1100300317, \"白钰\", 1003102, 1003102, \"佳木斯\"， \"佳木斯\", baiyu, \"汉族\", 1, \"1991-05-09\", \"address\", \"old_address\", 123456, \"baiyu0325@gmail.com\");";

    //        mysql_query(&mysql, sql.c_str());
    //        mysql_close(&mysql);
}

void DBConnect::insert_course()
{

}

void DBConnect::insert_teacher()
{

}
