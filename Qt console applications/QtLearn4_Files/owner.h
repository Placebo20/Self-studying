#ifndef OWNER_H
#define OWNER_H
#include <QTextStream>
#include <QFileInfo>
#include <QDateTime>

//Output the info about group and owner of file
void ownerGroup(int argc,char* argv[]){
    extern Q_CORE_EXPORT int qt_ntfs_permission_lookup;
    qt_ntfs_permission_lookup++;

    QTextStream out(stdout);
    out.setCodec("cp-866");
    if(argc != 2){
        qWarning("Usage: owner file");
        return;
    }

    QString filename = argv[1];
    QFileInfo fileinfo(filename);
    QString group = fileinfo.group();
    QString owner = fileinfo.owner();

    out << "Group: " << group << Qt::endl;
    out << "Owner: " << owner << Qt::endl;
}

#endif // OWNER_H
