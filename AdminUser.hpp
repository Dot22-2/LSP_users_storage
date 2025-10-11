#pragma once
#include "User.hpp"

class AdminUser : public User {
public:
    AdminUser(int id, const std::string& name) : User(id, name) {}

    std::string getRole() const override {
        return "Admin";
    }
};
