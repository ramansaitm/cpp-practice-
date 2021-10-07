#include<iostream>
using namespace std;
void interest(int p,int r,int m,float day)
{
   float calculated=(p*r*(m))/100;
      
   //for day 
  float calday=(p*r*day)/3000;
  calculated+=calday;
 
   cout<<"caluclated interest :"<<calculated<<endl;
    cout<<"Total amount is  : "<<p+calculated;
}
int main()
{
    
    //user input
    cout<<"enter old days"<<endl;
   int day,month,year;
   cout<<"Enter day"<<endl;
   cin>>day;
   cout<<"Enter month"<<endl;
   cin>>month;
   cout<<"enter year"<<endl;
   cin>>year;
   int day1,month1,year1;
   cout<<"enter current day"<<endl;
   cout<<"Enter day"<<endl;
   cin>>day1;
   cout<<"Enter month"<<endl;
   cin>>month1;
   cout<<"enter year"<<endl;
   cin>>year1;
   //priting days
   cout<<"you've entered"<<endl;
   cout<<"old  "<<day<<" -"<<month<<" -"<<year<<endl;
   cout<<"current  :"<<day1<<" -"<<month1<<" -"<<year1<<endl;
   //
   int p;
   cout<<"enter Ruppes"<<endl;
   cin>>p;
   int rate;
   cout<<"rate :"<<endl;
   cin>>rate;
   
   //logic for days
   int new_day,new_month,new_year;
   if(year1>=year)
   {
   if(day1<day)
   {
        new_day=30+day1-day;
       month1-=1;
       
   }else
   {
          new_day=day1-day;
   }
   //for month
   
   if(month1<month){
        new_month=12+month1-month;
       year1-=1;
   }
   else{
            new_month=month1-month;
   }//year
     new_year=year1-year;
     
     //printing again
     cout<<"calculated:"<<endl;
    cout<<"day :"<<new_day<<endl;
    cout<<"month  :"<<new_month<<endl;
    cout<<"year  :"<<new_year<<endl;
     new_year*=12;
     new_month+=new_year;
  interest(p,rate,new_month,new_day);
}
else
{
    cout<<"sorry!! Try Again";
}
   
    return 0;
}
