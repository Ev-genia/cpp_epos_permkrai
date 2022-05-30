//
// Created by Евгения Костарева on 20.05.2022.
//

#include "person_class.h"

person_class::person_class()
{
    m_name = "WRONG NAME";
    m_last_name = "WRONG LAST NAME";
}

bool person_class::setLastName(std::string s1)
{
    if (isCorrect(s1))
    {
        m_last_name = s1;
        return (true);
    }
    else
        return (false);
}

bool person_class::setName(std::string s2)
{
    if (isCorrect(s2))
    {
        m_name = s2;
        return (true);
    }
    else
        return (false);
}

bool person_class::setAge(int age)
{
    if (age > 0)
    {
        m_age = age;
        return (true);
    }
    else
        return (false);
}

std::string person_class::lastName()
{
    return (m_last_name);
}

std::string person_class::name()
{
    return (m_name);
}

int person_class::age()
{
    return (m_age);
}

bool person_class::isCorrect(std::string str)
{
    char    c;
    int     i;

    i = 0;
    while (str[i] != '\0')
    {
        c = toupper(str[i]);
        if (c < 'A' || c > 'Z' || str[i] == '-')
            return (false);
        i++;
    }
    return (true);
}
