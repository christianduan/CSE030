#ifndef TIME_H
#define TIME_H

class Time{
  private:
    int HH;
    int MM;
    int SS;

  public:
    Time();

    Time(int HH, int MM, int SS);

    ~Time();

    int getHours();
    int getMinutes();
    int getSeconds();

    void setHours(int HH);
    void setMinutes(int MM);
    void setSeconds(int SS);
};

#endif