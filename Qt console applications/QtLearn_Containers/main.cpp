#include <QTextStream>

//QVector
void qvectorInit(){
    QTextStream out(stdout);
    QVector<int> vals = {1,2,3,4,5};
    out << "The size of vector is " << vals.size() << Qt::endl;
    out << "The first item of vector is " << vals.first() << Qt::endl;

    vals.append(6);
    vals.prepend(10);

    out << "Elements: ";
    for(int val: vals){
        out << val << "\t";
    }
    out << Qt::endl;
}

int main()
{
    qvectorInit();
    return 0;
}
