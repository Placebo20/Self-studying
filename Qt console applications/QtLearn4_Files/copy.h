#ifndef COPY_H
#define COPY_H
#include <QTextStream>
#include <QFile>

//File copying
//Copies exe to new exe file
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

#endif // COPY_H
