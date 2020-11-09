#include <QFile>
#include <QDir>
#include <QFileInfo>
#include <QTextStream>

//Size of File
void sizeOfQtFile(int argc, char *argv[]) {
    QTextStream out(stdout);
    if(argc != 2){
        qWarning("Usage: file_size file");
        return;
    }
    QString filename = argv[1];
    if(!QFile(filename).exists()){
        qWarning("The file does not exist");
        return;
    }
    QFileInfo finfo(filename);
    qint64 size = finfo.size();
    QString str = "The size is: %1 bytes";
    out << str.arg(size) << Qt::endl;
}
/*ПОДГОТОВКА:
    Шаг №1: Скомпилируйте вашу программу. Для этого выберете в меню Сборка -> Собрать всё (или нажмите Ctrl+Shift+B).
    Шаг №2: Зайдите в папку, где лежит ваш Qt-проект. (у меня он расположен в C:\dev\Qt_Project)
    Шаг №3: После выполнения первого шага у вас должна появиться ещё одна папка, в которой будет создан исполняемый файл программы. Т.к. я использую компилятор MinGW 32-bit и режим компиляции Debug, то при компиляции проекта, Qt автоматически создал папку build-My_QtApplication-Desktop_Qt_5_13_0_MinGW_32_bit-Debug.
    Шаг №4: Зайдите в папку debug (она находится внутри папки из шага №3).
    Шаг №5: Найдите *.exe-файл вашей программы (у меня это file_size.exe).
    Шаг №6: Cкопируйте этот файл в папку к соответствующему компилятору (напомню, т.к. я использовал компилятор MinGW 32-bit, то у меня этот путь выглядит следующим образом: C:\Soft\Qt\5.13.0\mingw73_32\bin).
ЗАПУСК ПРОГРАММЫ:
    Шаг №7: Откройте командную строку.
    Шаг №8: Перейдите в папку из шага №6 (cd C:\Soft\Qt\5.13.0\mingw73_32\bin).
    Шаг №9: Запустите свою программу, передав ей в качестве параметра имя любого файла (у меня этим файлом оказалась эта же программа, поэтому в моём случае команда была следующей — file_size.exe file_size.exe).
*/

//Reading file contents
void readFromQFile() {
    QTextStream out(stdout);

    QFile file("D://self studying/Qt console applications/QtLearn4_Files/colours.txt");
    if(!file.open(QIODevice::ReadOnly)){
        qWarning("Cannont open file reading.");
        return;
    }

    QTextStream in(&file);

    while(!in.atEnd()){
        QString line = in.readLine();
        out << line << Qt::endl;
    }

    file.close();
}

//Writing data to a file
void writeToQFile() {
    QTextStream out(stdout);

    QString filename = "D://self studying/Qt console applications/QtLearn4_Files/distros.txt";
    QFile file(filename);
    if(file.open(QIODevice::WriteOnly)){
        QTextStream out(&file);

        out << "Xubuntu" << Qt::endl;
        out << "Arch" << Qt::endl;
        out << "Debian" << Qt::endl;
        out << "Redhat" << Qt::endl;
        out << "Slackware" << Qt::endl;
    } else
        qWarning("Could not open file");
    file.close();
}

//File copying
//Короче, там нужно соединять с первой частью, но я и так понял шо к чему, так шо я ебал этим заниматься
void copyQFile(int argc,char* argv[]) {
    QTextStream out(stdout);
    if(argc != 3){
        qWarning("Usage: copyfile source destination");
        return;
    }
    QString source = argv[1];

    if(!QFile(source).exists()){
        qWarning("The source file does not exist");
        return;
    }

    QString destin(argv[2]);
    QFile::copy(source, destin);
}

int main(int argc, char *argv[])
{
    copyQFile(argc,argv);
    return 0;
}
