#ifndef READ_WRITE_H
#define READ_WRITE_H
#include <QTextStream>
#include <QFile>
#include <QFileInfo>
#include <QDateTime>

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

//Output the info about last read/write
void readWriteInfo(int argc, char* argv[]) {
    QTextStream out(stdout);
    out.setCodec("cp-866");
    if(argc != 2){
        out << "Usage: file_times.h" << Qt::endl;
        return;
    }
    QString filename = argv[1];
    QFileInfo fileinfo(filename);
    QDateTime last_read = fileinfo.lastRead();
    QDateTime last_modified = fileinfo.lastModified();

    out << "Last read: " << last_read.toString() << Qt::endl;
    out << "Last modified: " << last_modified.toString() << Qt::endl;
}

#endif // READ_WRITE_H
