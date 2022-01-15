#ifndef GETDBCONN_H_INCLUDED
#define GETDBCONN_H_INCLUDED

#include <pqxx/pqxx>

using namespace std;
using namespace pqxx;

class GetDbConn
{
public:
    static connection *getPostgresDbConnection(const std::string& conStr)
    {
        pqxx::connection *c=new connection(conStr);
        return c;
    }
};

#endif // GETDBCONN_H_INCLUDED
