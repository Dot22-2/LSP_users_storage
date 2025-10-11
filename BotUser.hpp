#pragma once
#include "User.hpp"

class BotUser : public User {
public:
    BotUser(int id, const std::string& name) : User(id, name) {}

    std::string getRole() const override {
        return "Bot";
    }
};
