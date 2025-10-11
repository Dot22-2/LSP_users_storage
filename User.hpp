#pragma once
#include <string>

class User {
public:
    User(int id, const std::string& name) : id(id), name(name) {}
    virtual ~User() = default;

    int getId() const { return id; }
    std::string getName() const { return name; }

    virtual std::string getRole() const {
        return "User";
    }

private:
    int id;
    std::string name;
};
