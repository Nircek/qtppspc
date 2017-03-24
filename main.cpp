#include "qtppspc.h"

using namespace GitHub::Nircek;
int main(int argc, char *argv[])
{
    QApplication qapp(argc,argv);
    qtppspc pc("localhost","admin","admin",&qapp);
    return 0;
}

