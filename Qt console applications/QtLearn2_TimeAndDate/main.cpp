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

//Current Time and Date
void currentTimeAndDate(){
    QTextStream out(stdout);

    QDate cd = QDate::currentDate();
    QTime ct = QTime::currentTime();

    out << "Current date is: " << cd.toString() << Qt::endl;
    out << "Current time is: " << ct.toString() << Qt::endl;
}

//Date comparison
void comparsionQDates() {
    QTextStream out(stdout);

    QDate d1(2020,3,12);
    QDate d2(2020,11,7);

    if(d1 < d2)
        out << d1.toString() << " comes before " << d2.toString() << Qt::endl;
    else
        out << d1.toString() << " comes after " << d2.toString() << Qt::endl;
}

//Definition of a leap year
void qdateLeapYear(){
    QTextStream out(stdout);

    QList<int> years({2010, 2011, 2012, 2013, 2014, 2015, 2016, 2017, 2018, 2019, 2020});

    foreach(int year, years){
        if(QDate::isLeapYear(year)){
            out << year << " is a leap year" << Qt::endl;
        } else {
            out << year << " is not a leap year" << Qt::endl;
        }
    }
}

//Predefined date formats
void predefinedQDate() {
    QTextStream out(stdout);

    QDate cd = QDate::currentDate();

    out << "Today is " << cd.toString(Qt::TextDate) << Qt::endl;
    out << "Today is " << cd.toString(Qt::ISODate) << Qt::endl;
    out << "Today is " << cd.toString(Qt::SystemLocaleShortDate) << Qt::endl;
    out << "Today is " << cd.toString(Qt::SystemLocaleLongDate) << Qt::endl;
    out << "Today is " << cd.toString(Qt::DefaultLocaleShortDate) << Qt::endl;
    out << "Today is " << cd.toString(Qt::DefaultLocaleLongDate) << Qt::endl;
    out << "Today is " << cd.toString(Qt::SystemLocaleDate) << Qt::endl;
    out << "Today is " << cd.toString(Qt::LocalDate) << Qt::endl;
}

//Custom date formats
void customQDate() {
    QTextStream out(stdout);
    QDate cd = QDate::currentDate();

    out << "Today is " << cd.toString("yyyy-MM-dd") << endl;
    out << "Today is " << cd.toString("yy/M/dd") << endl;
    out << "Today is " << cd.toString("d. M. yyyy") << endl;
    out << "Today is " << cd.toString("d-MMMM-yyyy") << endl;
}

//Predefined time formats
void predefinedQTime() {
    QTextStream out(stdout);
    QTime ct = QTime::currentTime();

    out << "The time is " << ct.toString(Qt::TextDate) << Qt::endl;
    out << "The time is " << ct.toString(Qt::ISODate) << Qt::endl;
    out << "The time is " << ct.toString(Qt::SystemLocaleShortDate) << Qt::endl;
    out << "The time is " << ct.toString(Qt::SystemLocaleLongDate) << Qt::endl;
    out << "The time is " << ct.toString(Qt::DefaultLocaleShortDate) << Qt::endl;
    out << "The time is " << ct.toString(Qt::DefaultLocaleLongDate) << Qt::endl;
    out << "The time is " << ct.toString(Qt::SystemLocaleDate) << Qt::endl;
    out << "The time is " << ct.toString(Qt::LocaleDate) << Qt::endl;
}

//Custom time formats
void customQTime(){
    QTextStream out(stdout);
    QTime ct = QTime::currentTime();

    out << "The time is " << ct.toString("hh:mm:ss.zzz") << Qt::endl;
    out << "The time is " << ct.toString("h:m:s a") << Qt::endl;
    out << "The time is " << ct.toString("H:m:s A") << Qt::endl;
    out << "The time is " << ct.toString("h:m AP") << Qt::endl;
}

//Day of week
void dayOfWeekQDate() {
    QTextStream out(stdout);
    QDate cd = QDate::currentDate();
    int wd = cd.dayOfWeek();

    QLocale loc;

    out << "Today is " << QDate::shortDayName(wd) << Qt::endl;
    out << "Today is " << QDate::longDayName(wd) << Qt::endl;
}

//Count of days in month
void monthInQDate(){
    QTextStream out(stdout);
    QList<QString> months;

    months.append("January");
    months.append("February");
    months.append("March");
    months.append("April");
    months.append("May");
    months.append("June");
    months.append("July");
    months.append("August");
    months.append("September");
    months.append("October");
    months.append("November");
    months.append("December");

    QDate dt1(2020, 9, 18);
    QDate dt2(2020, 2, 11);
    QDate dt3(2020, 5, 1);
    QDate dt4(2020, 12, 11);
    QDate dt5(2020, 1, 21);

    out << "There are " << dt1.daysInMonth() << " days in " << months.at(dt1.month()-1) << Qt::endl;
    out << "There are " << dt2.daysInMonth() << " days in " << months.at(dt2.month()-1) << Qt::endl;
    out << "There are " << dt3.daysInMonth() << " days in " << months.at(dt3.month()-1) << Qt::endl;
    out << "There are " << dt4.daysInMonth() << " days in " << months.at(dt4.month()-1) << Qt::endl;
    out << "There are " << dt5.daysInMonth() << " days in " << months.at(dt5.month()-1) << Qt::endl;

    out << "There are " << dt1.daysInYear() << " days in year " << QString::number(dt1.year()) << Qt::endl;
}

int main()
{
    monthInQDate();
    return 0;
}
