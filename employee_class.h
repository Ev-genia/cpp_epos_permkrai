//
// Created by Евгения Костарева on 20.05.2022.
//

#ifndef CPP_EMPLOYEE_CLASS_H
# define CPP_EMPLOYEE_CLASS_H
# include "person_class.h"

class employee_class : public person_class
{
protected:
    std::string m_position;
public:
    employee_class();
    void setPosition(std::string str);
    std::string position();
};

#endif //CPP_EMPLOYEE_CLASS_H
