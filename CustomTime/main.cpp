//https://replit.com/join/iwivsmpk-iqbalhoshensaif

#include <iostream>
#include <ctime>

using namespace std;

class CustomTime{
private:

int hour,minute,second;

public:
CustomTime(){
  hour=0;
  minute=0;
  second=0;
  }
void init(int hour,int minute,int second){
      this->hour=hour;
      this->minute=minute;
      this->second=second;
    }
  void init(){
    time_t now=time(0);
tm*ltm =localtime(&now);

     hour=ltm->tm_hour;
    minute=ltm->tm_min;
    second=ltm->tm_sec;

  }
  void print(){
    cout<<"========================================";
    cout<<"\n\t"<<hour<<":"<<minute<<":"<<second<<endl;
    cout<<"========================================\n"<<endl;
  }
};
int main() {

  CustomTime obj;
  obj.init(24,59,59);
  obj.init();
  obj.print();
  return 0;
}
