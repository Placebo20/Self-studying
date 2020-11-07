#include <QTextStream>

//Different options for initializing QString
void qstringInit(){
    QTextStream out(stdout);

    QString str1 = "The night train";
    out << str1 << Qt::endl;

    QString str2("A yellow rose");
    out << str2 << Qt::endl;

    std::string s1 = "A blue sky";
    QString str3 = s1.c_str(); // c_str() Generates string in C-style
    out << str3 << Qt::endl;

    std::string s2 = "A thick fog";
    QString str4 = QString::fromLatin1(s2.data(),s2.size());
    out << str4 << Qt::endl;

    char s3[] = "A deep forest";
    QString str5(s3);
    out << str5 << Qt::endl;
}

//Diffent options to output char from QString
void outCharFromQString(){
    QTextStream out(stdout);
    QString str = "Eagle";
    out << str[0] << Qt::endl;
    out << str.at(3) << Qt::endl;
}

//There are 3 methods that allow you to get information about the length of a string: size (), count () and length ()
void takeInfoFromQString() {
    QTextStream out(stdout);

    QString s1 = "Eagle";
    QString s2 = "Eagle\n";
    QString s3 = "Eagle ";
    QString s4 = "Орёл";

    out << s1.length() << Qt::endl;
    out << s2.length() << Qt::endl;
    out << s3.length() << Qt::endl;
    out << s4.length() << Qt::endl;
}

//Constructing strings
void constructQString(){
    QTextStream out(stdout);

    //using marker %1 for insert value
    QString s1 = "There are %1 white roses";
    int n = 12;
    out << s1.arg(n) << Qt::endl;

    QString s2 = "The tree is %1 m high";
    double h = 5.65;
    out << s2.arg(h) << Qt::endl;

    QString s3 = "We have %1 lemons and %2 oranges";
    int a = 3;
    int o = 4;
    out << s3.arg(a).arg(o) << Qt::endl;
}

//Substrings
void substringsFromQString() {
    QTextStream out(stdout);

    QString str = "The night train";
    out << str.left(9) << Qt::endl;
    out << str.right(5) << Qt::endl;
    out << str.mid(4,5) << Qt::endl;

    QString str2("The big apple");
    QStringRef sub(&str2, 0, 7);

    out << sub.toString() << Qt::endl;
}

int main(int argc, char *argv[])
{
    substringsFromQString();
    return 0;
}
