//#include <iostream>
//#include <chrono>
//#include <cstring>
//#include <winsock2.h>
//
//using namespace std;
//
//#pragma comment(lib, "ws2_32.lib")
//
//#define SERVER_IP "fast.com"
//#define SERVER_PORT 80
//
//double performDownloadTest(const char* serverIP, int port) {
//
//    WSADATA wsaData;
//    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
//        cerr << "WSAStartup failed" << endl;
//        exit(1);
//    }
//
//    SOCKET sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
//    if (sock == INVALID_SOCKET) {
//        cerr << "Error creating socket" << endl;
//        WSACleanup();
//        exit(1);
//    }
//
//    struct sockaddr_in serverAddr;
//    serverAddr.sin_family = AF_INET;
//    serverAddr.sin_port = htons(port);
//    serverAddr.sin_addr.s_addr = inet_addr(serverIP);
//
//    if (connect(sock, (struct sockaddr*)&serverAddr, sizeof(serverAddr)) == SOCKET_ERROR) {
//        cerr << "Error connecting to server" << endl;
//        closesocket(sock);
//        WSACleanup();
//        exit(1);
//    }
//
//    const char* request = "GET / HTTP/1.1\r\nHost: fast.com\r\n\r\n";
//    send(sock, request, strlen(request), 0);
//
//
//    auto start = chrono::steady_clock::now();
//    char buffer[1024];
//    long long bytesReceived = 0;
//
//
//    while (true) {
//        int bytes = recv(sock, buffer, sizeof(buffer), 0);
//        if (bytes <= 0) {
//            break;
//        }
//        bytesReceived += bytes;
//    }
//
//    auto end = chrono::steady_clock::now();
//    chrono::duration<double> duration = end - start;
//
//
//    closesocket(sock);
//    WSACleanup();
//
//    double speed = (bytesReceived * 8.0) / (duration.count() * 1000000);
//    return speed;
//}
//
//int main() {
//    cout << "Network Speed Test" << endl;
//    cout << "Testing Download Speed..." << endl;
//
//    double downloadSpeed = performDownloadTest(SERVER_IP, SERVER_PORT);
//    cout << "Download Speed: " << downloadSpeed << " Mbps" << endl;
//
//    return 0;
//}
