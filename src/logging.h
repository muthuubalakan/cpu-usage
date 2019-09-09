#ifndef LOGGING_H
#define LOGGING_H

#include <iostream>
#include <ctime>

using namespace std;


enum loglevel{
    // Apache Log4J2 log levels int level.
    TRACE,
    DEBUG,
    INFO,
    WARN, 
    ERROR,
    SUCCESS,
    FATAL
}

struct ConfigLogging
{

};

extern ConfigLogging config;

class Logging{
    public:
          Logging(){}
          Logging(loglevel level){
              lglevel = level;
          }

          void logging(string msg){
              if (lglevel){
                  cout << "[" + getLevel(lglevel) + "] " + msg << endl; 
              }else{
                  cout << "[DEBUG]" << msg <<endl;
              }
          }

          string time_stamp(){
              time_t time_now = time(0);
          }

    private:
    loglevel lglevel = DEBUG;
    inline string getLevel(loglevel level){

        string l;
        switch (level)
        {
        case TRACE: 
        l = "TRACE";
        break;
        case DEBUG: 
        l = "DEBUG";
        break;
        
        case INFO: 
        l = "INFO";
        break;
        
        case WARN: 
        l = "WARN";
        break;
        
        case ERROR: 
        l = "ERROR";
        break;
        
        case SUCCESS: 
        l = "SUCCESS";
        break;
        
        case FATAL: 
        l = "FATAL";
        break;

        default:
        l = "DEBUG";
            break;
        }
        return l;
    }

    protected:

};


#endif