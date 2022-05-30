//
// Created by Евгения Костарева on 20.05.2022.
//

#ifndef CPP_PERSON_CLASS_H
# define CPP_PERSON_CLASS_H
# include <string>

//using namespace std;

class person_class
{
private:
    std::string m_name;
    std::string m_last_name;
    int         m_age;
protected:
    bool isCorrect(std::string str);
public:
    person_class();
    bool setLastName(std::string);
    bool setName(std::string);
    bool setAge(int);
    std::string lastName();
    std::string name();
    int age();
};

#endif //CPP_PERSON_CLASS_H
