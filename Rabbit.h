#include <fstream>
using namespace std;
const int MAX_RABBITS=500;
class Rabbit{
  private:
    enum {MAX_CHAR_LEN=100};
    char name[MAX_CHAR_LEN];
    double maxWeight;
    int yearRecognized;
    bool isRare;
    bool isValid;
  public:
    Rabbit();
    bool getValid();
    void setValid(bool state);
    void print(ostream &out);
    void readFromUser();
    void readFromFile(ifstream &inFile);
};