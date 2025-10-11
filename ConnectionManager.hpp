#pragma once
#include "User.hpp"
#include <vector>
#include <iostream>

class ConnectionManager {
public:
    void connect(const User& user) {
        connected.push_back(user.getId());
        std::cout << "(" << user.getRole() << ") " << "connected: " << user.getName() << "\n";
    }

    void disconnect(const User& user) {
        connected.erase(std::remove(connected.begin(), connected.end(), user.getId()), connected.end());
        std::cout << "(" << user.getRole() << ") " << "disconnected: " << user.getName() << "\n";
    }

    bool isConnected(const User& user) const {
        return std::find(connected.begin(), connected.end(), user.getId()) != connected.end();
    }

private:
    std::vector<int> connected;
};
