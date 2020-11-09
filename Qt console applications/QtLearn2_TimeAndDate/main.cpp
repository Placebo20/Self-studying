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
void countdaysinmonthQDate(){
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

//Checking if the date is correct
void correctQDate() {
    QTextStream out(stdout);

    QList<QDate> dates({QDate(2020,5,11),QDate(2020,8,1), QDate(2020,2,30)}); //30 february not exist
    for(int i = 0; i < dates.size(); i++){
        if(dates.at(i).isValid())
            out << "Date " << i+1 << " is a valid date" << Qt::endl;
        else
            out << "Date " << i+1 << " is not a valid date" << Qt::endl;
    }
}

//We can easily count how many days are left until a specific date
void dateToQDate() {
    QTextStream out(stdout);

    QDate dt(2020,8,14);
    QDate nd = dt.addDays(55);
    QDate xmas(2020,12,24);
    out << "55 days from " << dt.toString() << " is " << nd.toString() << Qt::endl;
    out << "There are " << QDate::currentDate().daysTo(xmas) << " days till Christmass" << Qt::endl;
}

//Class QDateTime
void qdatetimeInit(){
    QTextStream out(stdout);
    QDateTime cdt = QDateTime::currentDateTime();

    out << "The current dateTime is " << cdt.toString() << Qt::endl;
    out << "The current date is" << " " << cdt.date().toString() << Qt::endl;
    out << "The current time is" << " " << cdt.time().toString() <<  Qt::endl;
}

//Julian Date
void julQDate() {
    QTextStream out(stdout);
    QDate cd = QDate::currentDate();
    out << "Gregorian date for today: " << cd.toString(Qt::ISODate) << Qt::endl;
    out << "Julian day for today: " << cd.toJulianDay() << Qt::endl;
}

//The following example shows how many days have passed since two historical events
void twoHistQDate() {
    QTextStream out(stdout);
    QDate dima(2001,11,8);
    QDate karina(2002,8,14);
    QDate cd = QDate::currentDate();
    int j_today = cd.toJulianDay();
    int j_dima = dima.toJulianDay();
    int j_karina = karina.toJulianDay();

    out << "Days since Dima's birthday " << j_today - j_dima << Qt::endl;
    out << "Days since Karina's birthday " << j_today - j_karina << Qt::endl;
    if(j_dima > j_karina)
        out << "Days between Dima's and Karina's birthdays: " << j_dima - j_karina << Qt::endl;
    else
        out << "Days between Dima's and Karina's birthdays: " << j_karina - j_dima  << Qt::endl;
}

//UTC time/date
void utcQDate() {
    QTextStream out(stdout);
    QDateTime cdt = QDateTime::currentDateTime();
    out << "Universal datetime: " << cdt.toUTC().toString() << Qt::endl;
    out << "Local datetime: " << cdt.toLocalTime().toString() << Qt::endl;
}

//Unix time is the number of seconds since the Unix era
void unixQDateTime() {
    QTextStream out(stdout);
    time_t tdd = time(0); //Taking UNIX-time
    out << tdd << Qt::endl;
    QDateTime dt;
    dt.setTime_t(tdd);
    out << dt.toString() << Qt::endl;
    QDateTime cd = QDateTime::currentDateTime();
    out << cd.toTime_t() << Qt::endl;
}



int main()
{
    unixQDateTime();
    return 0;
}
