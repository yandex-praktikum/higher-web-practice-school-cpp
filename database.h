#ifndef DATABASE_H
#define DATABASE_H

#include <vector>
#include <string>
#include <unordered_map>

const std::vector<std::string> Roles = {"ADMIN", "CHIEF", "TEACHER", "GUARD", "STUDENT", "PARENT"};

const std::vector<std::string> Users = {"pooh", "piglet", "tigger", "eeyore", "kanga", "roo", "rabbit", "owl", "robin"};
const std::vector<std::string> Passwords = {"1!", "2@", "3#", "4$", "??", "5%", "6^", "7&", "**"};
const std::vector<std::string> UserRoles = {"GUARD", "TEACHER", "TEACHER", "TEACHER", "PARENT", "STUDENT", "TEACHER", "CHIEF", "ADMIN"};

const std::vector<std::string> Actions = {"enter", "leave", "watch", "edit"};

const std::vector<std::string> Areas = {"school", "room", "cabin", "class"};

const std::vector<std::string> Classes = {"A", "B", "C", "D"};

const std::vector<std::string> Data = {"journal"};

const std::unordered_map<std::string, std::vector<std::string>> RoleActions = {{"ADMIN", {"enter", "leave", "watch", "edit"}},
                                                                               {"CHIEF", {"enter", "leave", "watch"}},
                                                                               {"TEACHER",{"enter:school", "leave", "enter:room", "enter:class", "enter:cabin?", "watch:journal", "edit:journal"}},
                                                                               {"GUARD", {"enter:school", "leave:school"}},
                                                                               {"STUDENT", {"enter:school", "enter:class", "leave", "watch:journal?"}},
                                                                               {"PARENT", {"enter:school", "leave", "watch:journal?", "enter:cabin?"}}};

#endif // DATABASE_H
