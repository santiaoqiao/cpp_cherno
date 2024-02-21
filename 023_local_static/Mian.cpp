#include <iostream>
/* 单例 方法一
class Singleton
{
private:
    static Singleton *s_Instance;

public:
    static Singleton &Get() { return *s_Instance; }

    void Hello()
    {
        std::cout << "Hello~" << std::endl;
    }
};

Singleton *Singleton::s_Instance = nullptr;
*/

// 单例 方法二  使用局部静态
class Singleton
{
public:
    static Singleton &Get()
    {
        static Singleton instance;
        return instance;
    }

    void Hello()
    {
        std::cout << "hello 局部静态" << std::endl;
    }
};

void Func()
{
    static int x = 0;
    x++;
    std::cout << x << std::endl;
}

int main()
{
    setlocale(LC_ALL, ".65001");
    Func();
    Func();
    Func();
    Func();
    Func();

    Singleton::Get().Hello();
    Singleton::Get().Hello();

    setlocale(LC_ALL, "");
}