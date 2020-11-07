#include <QTextStream>
#include <QDate>
#include <QTime>

//Initialize date and time objects
void dateAndTimeInit(){
    QTextStream out(stdout);


    QDate dt1(2020,4,12); //(Year, month, day) Julian
    out << "The date is " << dt1.toString() << Qt::endl;

    QDate dt2;
    dt2.setDate(2020,3,3);
    out << "The date is " << dt2.toString() << Qt::endl;

    QTime t1(17,30,12,55); //(Hour, minute, second, msecond)
    out << "The time is " << t1.toString("hh:mm:ss.zzz") << Qt::endl;

    QTime t2;
    t2.setHMS(13,52,45,155);
    out << "The time is " << t2.toString("hh:mm:ss.zzz") << Qt::endl;
}

int main()
{
    dateAndTimeInit();
    return 0;
}
