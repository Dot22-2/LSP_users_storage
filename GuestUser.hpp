#pragma once
#include "User.hpp"

class GuestUser : public User {
public:
    GuestUser(int id, const std::string& name) : User(id, name) {}

    std::string getRole() const override {
        return "Guest";
    }
};
