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
    QStringRef sub(&str2, 0, 7); //QStringRef - class only for read of class QString

    out << sub.toString() << Qt::endl;
}

//Loops and strings
void loopsWithQStrings() {
    QTextStream out(stdout);
    QString str = "There are so many stars...";

    //First way
    foreach(QChar qc, str){
        out << qc << " ";
    }
    out << Qt::endl;

    //Second way
    for(QChar* it = str.begin(); it != str.end(); ++it){
        out << *it << " ";
    }
    out << Qt::endl;

    //Third way
    for(int i = 0; i < str.size(); ++i){
        out << str.at(i) << " ";
    }
    out << Qt::endl;
}

//String comparsion
void comparsionQStrings(){
    QTextStream out(stdout);
    QString str1 = "Rain";
    QString str2 = "rain";
    QString str3 = "rain\n";

    //First comparison
    if(QString::compare(str1,str2) == 0){ // == 0 - string equal
        out << "str1, str2 are equal" << Qt::endl;
    } else {
        out << "str1, str2 are not equal" << Qt::endl;
    }
    out << "In case insensitive comparsion:" << Qt::endl;

    //Turn off case sensitivity using the Qt :: CaseInsensitive flag
    if(QString::compare(str1,str2,Qt::CaseInsensitive) == 0){
        out << "str1, str2 are equal" << Qt::endl;
    } else {
        out << "str1, str2 are not equal" << Qt::endl;
    }

    if(QString::compare(str2, str3) == 0){
        out << "str2, str3 are equal" << Qt::endl;
    } else {
        out << "str2, str3 are not equal" << Qt::endl;
    }

    //Remove new line character in line str3
    str3.chop(1); // Removes n characters from the end of the string.
    out << "After removing the new line character" << Qt::endl;
    if(QString::compare(str2, str3) == 0){
        out << "str2, str3 are equal" << Qt::endl;
    } else {
        out << "str2, str3 are not equal" << Qt::endl;
    }
}

//Converting strings
void convertQStrings() {
    QTextStream out(stdout);
    QString s1 = "12";
    QString s2 = "15";
    QString s3, s4;

    out << s1.toInt() + s2.toInt() << Qt::endl; // 27

    int n1 = 30;
    int n2 = 40;

    out << s3.setNum(n1) + s4.setNum(n2) << Qt::endl; // 3040
}

//Letters
void lettersFromQString() {
    QTextStream out(stdout);

    int digits = 0;
    int letters = 0;
    int spaces = 0;
    int puncts = 0;
    int other = 0;

    QString str = "7 white, 3 red roses.";

    foreach(QChar s, str){
        if(s.isDigit())
            digits++;
        else if(s.isLetter())
            letters++;
        else if(s.isSpace())
            spaces++;
        else if(s.isPunct())
            puncts++;
        else
            other++;
    }

    out << QString("There are %1 characters").arg(str.count()) << Qt::endl;
    out << QString("There are %1 letters").arg(letters) << Qt::endl;
    out << QString("There are %1 digits").arg(digits) << Qt::endl;
    out << QString("There are %1 spaces").arg(spaces) << Qt::endl;
    out << QString("There are %1 punctuation characters").arg(puncts) << Qt::endl;
    out << QString("There are %1 other characters").arg(other) << Qt::endl;
}

//Modifying strings
void modifyingQString() {
    QTextStream out(stdout);

    QString str = "Lovely";

    str.append(" season");
    out << str << Qt::endl;

    str.remove(10,3);
    out << str << Qt::endl;

    str.replace(7,3,"girl");
    out << str << Qt::endl;

    str.clear();

    if(str.isEmpty())
        out << "The string is empty" << Qt::endl;
}

//Line alignment
void alignQString() {
    QTextStream out(stdout);
    QString f1 = "Name: ";
    QString f2 = "Occupation: ";
    QString f3 = "Residence: ";
    QString f4 = "Marital status: ";

    int width = f4.size();

    out << f1.rightJustified(width, ' ') << "Robert\n";
    out << f2.rightJustified(width, ' ') << "programmer\n";
    out << f3.rightJustified(width, ' ') << "New York\n";
    out << f4.rightJustified(width, ' ') << "single\n";
}

int main(int argc, char *argv[])
{
    alignQString();
    return 0;
}
