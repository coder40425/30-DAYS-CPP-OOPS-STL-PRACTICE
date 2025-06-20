/* Day 24: Logger System Design (OOPs + map)

Class Logger that logs message with timestamp. Ignore if repeated within 10 secs.

*Output Example:*
Logged: Hello
Ignored: Hello             */

/*
##APPROACH:-
-Use an unordered_map<string, int> to store the last logged timestamp of each message.
-When shouldLogMessage() is called:
-If the message doesn't exist, or its last timestamp was ≥10 seconds ago → log it, update timestamp.
-Else, ignore.               */

//my code
#include <iostream>
#include <unordered_map>
using namespace std;

class Logger {
private:
    unordered_map<string, int> messageTimestamp;

public:
    bool shouldLogMessage(int timestamp, const string& message) {
        if (messageTimestamp.find(message) == messageTimestamp.end() ||
            timestamp - messageTimestamp[message] >= 10) {
            messageTimestamp[message] = timestamp;
            cout << "Logged: " << message << endl;
            return true;
        } else {
            cout << "Ignored: " << message << endl;
            return false;
        }
    }
};

int main() {
    Logger logger;
    logger.shouldLogMessage(1, "Hello");   // Logged
    logger.shouldLogMessage(5, "Hello");   // Ignored
    logger.shouldLogMessage(12, "Hello");  // Logged
    logger.shouldLogMessage(15, "World");  // Logged
    logger.shouldLogMessage(20, "World");  // Ignored
    return 0;
}
