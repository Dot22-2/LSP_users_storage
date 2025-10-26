# C++ Liskov Substitution Principle – User Storage

This repository demonstrates a clean application of the **Liskov Substitution Principle (LSP)** in C++ by modeling interchangeable user types and connection logic.

---

## Project Structure

- `User.hpp` – Abstract base class for all user types  
- `AdminUser.hpp` – Admin-specific implementation  
- `GuestUser.hpp` – Guest-specific implementation  
- `BotUser.hpp` – Automated bot implementation  
- `ConnectionManager.hpp` – Manages user connections and disconnections  
- `main.cpp` – Entry point showcasing polymorphic user handling via LSP  

---

### Requirements

- **Compiler**: Tested with `MSVC v19.44` (Visual Studio 2022)  
- **C++ Standard**: C++17 or higher  

---

## Usage Example

```cpp
AdminUser dmytro(1, "Dmytro");
GuestUser olena(2, "Olena");
BotUser mngerbot(3, "ManagerBot");

ConnectionManager manager;
manager.connect(dmytro);
manager.connect(olena);
manager.connect(mngerbot);

manager.disconnect(olena);
