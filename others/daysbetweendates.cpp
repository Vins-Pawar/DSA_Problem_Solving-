#include<iostream>
using namespace std;

//for checking start date should be less than end date
int startLessThanEnd(int sday,int smonth,int syear,int eday,int emonth,int eyear)
{
    if(syear>eyear)
        return false;
    else if((smonth>emonth)&& syear==eyear)
        return false;
    else if((sday>eday) && (smonth==emonth))
        return false;
    else
        return true;
}

//checks year is leap or not
bool isLeapYear(int year)
{
    if(year%400==0)
        return true;
    else if(year%100==0)
        return false;
    else if(year%4==0)
        return true;
    else
        return false;
}

//gives total days of months
int daysInMonth(int month,int year)
{
    if(month==2)
    {
        if(isLeapYear(year))
            return 29;
        else
            return 28;
    }
    else if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
        return 31;
    else
        return 30;
}

//calculate full days from start month to end-1 month
int findMonthDays(int smonth,int syear,int emonth,int eyear)
{
    int days=0;
    while(1)
    {
        if(smonth>12)
        {
            smonth=1;
            syear++;
        }
        if(smonth==emonth && syear==eyear)
            return days;
        days=days+daysInMonth(smonth,syear);

        /*
        cout<<"\nsmonth "<<smonth<<endl;
        cout<<"syear "<<syear<<endl;
        cout<<"emonth "<<emonth<<endl;
        cout<<"eyear "<<eyear<<endl;
        */
        smonth++;
    }
    return days;
}

//checks date is correct or not (valid)
bool validDate(int day,int month,int year)
{
    if(day<0 && day>31)
    {
        return false;
    }
    else if(month<1 && month>12)
    {
        return false;
    }
    else if(month==2 && isLeapYear(year) && day>29)
    {
        return false;
    }
    else if(month==2 && (!isLeapYear(year)) && day>28)
    {
        return false;
    }
    else if(year<1700)
    {
        return false;
    }
    else
        return true;
}


int main()
{
    int sday,smonth,syear;//startday, startmonth, startyear
    int eday,emonth,eyear;//endday, endmonth,endyear

    cout<<"Enter start date"<<endl;
    cout<<"Day ";
    cin>>sday;
    cout<<"Month ";
    cin>>smonth;
    cout<<"Year ";
    cin>>syear;

    cout<<"\nEnter end date"<<endl;
    cout<<"Day ";
    cin>>eday;
    cout<<"Month ";
    cin>>emonth;
    cout<<"Year ";
    cin>>eyear;

    if(!startLessThanEnd(sday,smonth,syear,eday,emonth,eyear))
    {
        cout<<"invalid input "<<endl;
        cout<<"start date greater than end date "<<endl;
        return 0;
    }

    if(validDate(sday,smonth,syear) && validDate(eday,emonth,eyear))
    {
        int monthdays=findMonthDays(smonth,syear,emonth,eyear);
        int totaldays=monthdays+eday-sday;
        cout<<totaldays<<" days (by including start date but not including end date)"<<endl;
    }
    else{
        cout<<"invalid date"<<endl;
    }

}
