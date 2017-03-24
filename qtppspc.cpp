#include "qtppspc.h"

GitHub::Nircek::qtppspc::qtppspc(QString host, QString user, QString pass, QObject *parent):
    host(host),user(user),pass(pass),parent(parent){

}

GitHub::Nircek::qtppspc::~qtppspc(){

}

GitHub::Nircek::PPSReply::PPSReply(char c, QString s):
    reply(s){
    switch(c){
    case '0':   PPSReply(good,s);           break;
    case '-':   PPSReply(paramerror,s);     break;
    case '+':   PPSReply(dberror,s);        break;
    case '/':   PPSReply(httperror,s);      break;
    default:    PPSReply(error,s);          break;
    }
}

GitHub::Nircek::PPSReply::PPSReply(PPSReplyType type, QString s):
    replyType(type),reply(s){}
