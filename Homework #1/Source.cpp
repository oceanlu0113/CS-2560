#include<iostream>
#include<vector>
#include<string>
#include<iomanip>
using namespace std;
 
bool checkIndex(int size, int given) {
              if (size < given) {
                           cout << "Incorrect index.";
                           return false;
              }
              else {
                           return true;
              }
}
 
void addSales(vector<string> &n, vector<double> &c) {
              cout << "Enter (stop) to stop." << endl;
              while (true) {
                           string name;
                           double cost;
                           cout << "Enter name of sale (string): ";
                           cin >> name;
                           if (name == "stop") {
                                         break;
                            }
                           n.push_back(name);
                           cout << "Enter cost of this sale (double): ";
                           cin >> cost;
                           c.push_back(cost);
              }
}
 
void viewSales(vector<string> &n, vector<double> &c) {
              for (int i = 0; i < c.size(); i++) {
                           cout << setw(10) << n[i] << setw(5) << fixed << setprecision(2) << "$" << c[i] << endl;
              }
}
 
void editSale(vector<string> &n, vector<double> &c) {
              int index;
              double cost;
              cout << "Assuming the first item is at index 1, which sale would you like to change (index): ";
              cin >> index;
              while (!(checkIndex(n.size(), index))) {
                           cout << " Enter again: ";
                           cin >> index;
              }
              cout << "How much does " << n[index - 1] << " cost now (double): ";
              cin >> cost;
              c[index - 1] = cost;
}
 
void removeSale(vector<string> &n, vector<double> &c) {
              int index;
              cout << "Assuming the first item is at index 1, which sale would you like to remove (index): ";
              cin >> index;
              while (!(checkIndex(n.size(),index))) {
                           cout << " Enter again: ";
                           cin >> index;
              }
              n.erase(n.begin() + (index - 1));
              c.erase(c.begin() + (index - 1));
}
 
int main() {
              vector<double> cost{};
              vector<string> name{};
              int choice;
              do {
                           cout << "0. Quit\n1. Add Sales\n2. View Sales\n3. Edit a Sale\n4. Remove a Sale\nEnter your input:" << endl;
                           cin >> choice;
                           if (choice == 1) {
                                         addSales(name, cost);
                           }
                           else if (choice == 2) {
                                         viewSales(name, cost);
                           }
                           else if (choice == 3) {
                                         editSale(name, cost);
                           }
                           else if (choice == 4) {
                                         removeSale(name, cost);
                           }
              } while (choice != 0);
}
