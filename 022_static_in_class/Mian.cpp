#include <iostream>

struct Entity
{
    static int x, y;
    static void Print()
    {
        std::cout << x << ", " << y << std::endl;
    }
};

// static void Print(Entity e)
// {
//     std::cout << e.x << ", " << e.y << std::endl;
// }

int Entity::x;
int Entity::y;

main()
{
    // Entity e;
    Entity::x = 2;
    Entity::y = 3;

    // Entity e1 = {5, 8};
    // Entity e1;
    Entity::x = 5;
    Entity::y = 8;

    Entity::Print();
    // e1.Print();
}