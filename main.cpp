#include "qtppspc.h"

using namespace GitHub::Nircek;
int main(int argc, char *argv[])
{
    QApplication qapp(argc,argv);
    qtppspc pc("localhost","admin","admin",&qapp);
    PPSReply rep=pc.refresh();
    qDebug()<<readPPSReplyType(rep.replyType)<<' '<<rep.reply<<'\n';
    return 0;
}

