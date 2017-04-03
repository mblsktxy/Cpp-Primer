/*
 * Rewrite the first exercise to use a lambda (§ 10.3.2, p.388) in place of the
 * end_connection function.
 */

#include <iostream>
#include <string>
#include <memory>

using std::string;
using std::shared_ptr;
using std::cout;
using std::endl;

struct connection { // information needed to use the connection
    string ip;
    int port;
    connection(string ip_, int port_): ip(ip_), port(port_) { }
};

struct destination { // represents what we are connecting to
    string ip;
    int port;
    destination(string ip_, int port_): ip(ip_), port(port_) { }
};

connection connect(destination* pDest) { // open the connection
    shared_ptr<connection> pConn(new connection(pDest->ip, pDest->port));
    cout << "Creating connection(" << pConn.use_count() << ")" << endl;
    return *pConn;
}

void disconnect(connection pConn) { // close the given connection
    cout << "Connection close(" << pConn.ip << ":" << pConn.port << ")" << endl;
}

void f(destination &d) {
    // get a connection; must remember to close it when done
    connection conn = connect(&d);
    shared_ptr<connection> p(&conn, [](connection *p){ disconnect(*p); });
    cout << "connecting now(" << p.use_count() << ")" << endl;
}

int main() {
    destination dest("192.168.13.1", 1001);
    f(dest);

    return 0;
}