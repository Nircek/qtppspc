#ifndef QTPPSPC_H
#define QTPPSPC_H
#include "nircek-qteasyhttpclient/nircek-qteasyhttpclient.h"
namespace GitHub {
    namespace Nircek {

        typedef enum PPSReplyType{
            good,paramerror,dberror,httperror,error
        } PPSReplyType;

        typedef struct PPSReply{
            PPSReplyType replyType;
            QString reply;

            PPSReply(PPSReplyType,QString);
            PPSReply(char,QString);
        } PPSReply;

        class qtppspc {
            QString host,user,pass;
            QObject *parent;
        public:
            qtppspc(QString host, QString user, QString pass, QObject *parent=nullptr);
            ~qtppspc();
            PPSReply refresh();
            PPSReply push(QString event);
        };
    }
}
#endif // QTPPSPC_H
