#ifndef CORE_H
#define CORE_H
#include <string>
#include <vector>
class Date
{
    int year;
    int month;
    int day;
};

class TrainRegion
{
    std::string from;
    std::string to;
};

class TimeRegion
{
    std::string from;
    std::string to;
};

class Student
{
    long long class_num;
    long long teach_class_num;
    std::string ID;
    std::string name;
    std::string major;
    std::string old_come_from;
    std::string come_from;
    std::string name_pinyin;
    std::string nationality;
    short sex;
    Date birth_date;
    std::string address;
    std::string old_address;
    std::string password;
    std::string email;
    TrainRegion train_region;
    TrainRegion old_train_region;
public:
};

class teacher
{
    std::string teacher_ID;
    std::string major;
    std::string name;
    std::string password;
    std::string email;
};

class crouse
{
    long long course_num;
    std::string course_name;
    std::string teacher_ID;
    std::vector<std::string> major_condition;
    int year;
    int semester;
    int score;
};

class class_room
{
    long long building_num;
    int room_num;
    std::vector<TimeRegion> busy_time;
};

class core
{
public:
    core();
};

#endif // CORE_H
