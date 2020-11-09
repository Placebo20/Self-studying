#include <QTextStream>
#include <QVector>
#include <QList>
#include <QSet>
#include <algorithm>

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

//QList
void qlistInit() {
    QTextStream out(stdout);
    QList<QString> authors = {"Balzac", "Tolstoy", "Gulbranssen", "London"};
    for(int i = 0; i < authors.size(); i++)
        out << authors.at(i) << Qt::endl;
    authors << "Galsworthy" << "Sienkiewicz";
    out << "**********************" << Qt::endl;
    std::sort(authors.begin(),authors.end());
    out << "Sorted: " << Qt::endl;
    for(QString author : authors)
        out << author << Qt::endl;
}

//QStrinList
void qstrlistInit() {
    QTextStream out(stdout);
    QString str = "coin, book, cup, pencil, clock, bookmark";
    QStringList items = str.split(",");
    QStringListIterator it(items);
    while(it.hasNext())
        out << it.next().trimmed() << Qt::endl;
}

//QSet
void qsetInit() {
    QTextStream out(stdout);
    QSet<QString> cols1 = {"yellow", "red", "blue"};
    QSet<QString> cols2 = {"blue", "pink", "orange"};
    out << "There are " << cols1.size() << " values in the first set" << Qt::endl;
    out << "There are " << cols2.size() << " values in the second set" << Qt::endl;
    cols1.insert("brown");
    out << "There are " << cols1.size() << " values in the first set" << Qt::endl;
    cols1.unite(cols2);
    out << "There are " << cols1.size() << " values in the first set" << Qt::endl;
    for(QString col : cols1)
        out << col << " ";
    out << Qt::endl;}

//QMap
void qmapInit() {
    QTextStream out(stdout);

    QMap<QString, int> items = {{"coins", 5}, {"books", 3}};
    items.insert("bottles", 7);
    QList<int> values = items.values();
    out << "Values: " << Qt::endl;
    for(int val : values)
        out << val << Qt::endl;

    QList<QString> keys = items.keys();
    out << "Keys: " << Qt::endl;
    for(QString key : keys)
        out << key << Qt::endl;

    QMapIterator<QString, int> it(items);
    out << "Pairs: " << Qt::endl;
    while(it.hasNext()) {
        it.next();
        out << it.key() << ": " << it.value() << Qt::endl;
    }
}

//Sorting custom classes
class Book {
private:
    QString author;
    QString title;
public:
    Book(QString author, QString title){
        this->author = author;
        this->title = title;
    }
    QString getAuthor() const{return author;}
    QString getTitle() const{return title;}
};

bool compareByTitle(const Book &b1, const Book &b2){
    return b1.getTitle() < b2.getTitle();
}

void sortCustomClasses() {
    QTextStream out(stdout);
    QList<Book> books = {
        Book("Jack London", "The Call of the Wild"),
        Book("Honoré de Balzac", "Father Goriot"),
        Book("Leo Tolstoy", "War and Peace"),
        Book("Gustave Flaubert", "Sentimental education"),
        Book("Guy de Maupassant", "Une vie"),
        Book("William Shakespeare", "Hamlet")
    };

    std::sort(books.begin(),books.end(),compareByTitle);

    for(Book book : books)
        out << book.getAuthor() << " : " << book.getTitle() << Qt::endl;
}

int main()
{
    sortCustomClasses();
    return 0;
}
