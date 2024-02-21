#include <iostream>

class Log
{
public:
    const int LogLevelError = 0;
    const int LogLevelWarning = 1;
    const int LogLevelInfo = 2;

private:
    int m_LogLevel = LogLevelInfo;

public:
    void SetLevel(int level)
    {
        m_LogLevel = level;
    }

    void Warn(const char *message)
    {
        if (m_LogLevel >= LogLevelWarning)
            std::cout << "[WARNING]: " << message << std::endl;
    }

    void Error(const char *message)
    {
        if (m_LogLevel >= LogLevelError)
            std::cout << "[ERROR]: " << message << std::endl;
    }

    void Info(const char *message)
    {
        if (m_LogLevel >= LogLevelInfo)
            std::cout << "[INFO]: " << message << std::endl;
    }
};

main()
{
    Log log;
    log.SetLevel(log.LogLevelWarning);
    // log.SetLevel(log.LogLevelInfo);
    // log.SetLevel(log.LogLevelError);
    log.Warn("hello warning");
    log.Info("hello info");
    log.Error("hello error");
}