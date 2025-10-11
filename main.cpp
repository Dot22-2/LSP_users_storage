#include "AdminUser.hpp"
#include "GuestUser.hpp"
#include "BotUser.hpp"
#include "ConnectionManager.hpp"

int main() {
    AdminUser dmytro(1, "Dmytro");
    GuestUser olena(2, "Olena");
    BotUser mngerbot(3, "ManagerBot");

    ConnectionManager manager;

    manager.connect(dmytro);
    manager.connect(olena);
    manager.connect(mngerbot);

    manager.disconnect(olena);

    return 0;
}
