#ifndef SIZEQFILE_H
#define SIZEQFILE_H
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

#endif // SIZEQFILE_H
