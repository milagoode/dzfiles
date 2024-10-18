//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//#define E endl;
//
//int main() {
//    system("chcp 1251>null");
//
//    ifstream file1("file1.txt");
//    if (!file1) {
//        cout << "файл file1.txt не знайдено" << E;
//        return 1;
//    }
//    ifstream file2("file2.txt");
//    if (!file2) {
//        cout << "файл file2.txt не знайдено" << E;
//        return 1;
//    }
//
//    string line1, line2;
//    cout << "Рядки, які не співпадають з file1.txt:" << E;
//    while (getline(file1, line1)) {
//        bool found = false;
//        while (getline(file2, line2)) {
//            if (line1 == line2) {
//                found = true;
//                break;
//            }
//        }
//        if (!found) {
//            cout << line1 << E;
//        }
//    }
//    file1.close();
//    file2.close();
//
//    return 0;
//}
//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//#define E endl;
//
//int main() {
//    system("chcp 1251>null");
//
//    ifstream file("file3.txt");
//    if (!file) {
//        cout << "файл file3.txt не знайдено" << E;
//        return 1;
//    }
//
//    ofstream output("file4.txt");
//    if (!output) {
//        cout << "файл file4.txt не знайдено" << E;
//        return 1;
//    }
//
//    string lineContent;
//    int symbol = 0, line = 0, golos = 0, prigolos = 0, digit = 0;
//
//    while (getline(file, lineContent)) {
//        line++;
//        symbol += lineContent.length();
//
//        for (char ch : lineContent) {
//            if (isalpha(ch)) {
//                ch = tolower(ch);
//                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y') {
//                    golos++;
//                }
//                else {
//                    prigolos++;
//                }
//            }
//            else if (isdigit(ch)) {
//                digit++;
//            }
//        }
//    }
//
//    output << "кількість символів: " << symbol << E;
//    output << "кількість рядків: " << line << E;
//    output << "кількість голосних літер: " << golos << E;
//    output << "кількість приголосних літер: " << prigolos << E;
//    output << "кількість цифр: " << digit << E;
//
//    file.close();
//    output.close();
//
//    cout << "успішно записано в file4" << E;
//
//    return 0;
//}
//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//#define E endl;
//
//int main() {
//    system("chcp 1251>null");
//
//    ifstream inputFile("file5.txt");
//    if (!inputFile) {
//        cout << "файл file5 не знайдено" << E;
//        return 1;
//    }
//
//    ofstream outputFile("file6.txt");
//    if (!outputFile) {
//        cout << "файл file6 не створено" << E;
//        return 1;
//    }
//
//    string line;
//    string lastLine;
//    int lineCount = 0;
//
//    while (getline(inputFile, line)) {
//        if (lineCount > 0) {
//            outputFile << lastLine << E; 
//        }
//        lastLine = line;
//        lineCount++;
//    }
//
//    inputFile.close();
//    outputFile.close();
//
//    cout << "рядок видалено, результат записано у файл file6" << E;
//
//    return 0;
//}
//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//#define E endl;
//
//int main() {
//    system("chcp 1251>null");
//
//    ifstream file("file7.txt");
//    if (!file) {
//        cout << "файл file7.txt не знайдено" << E;
//        return 1;
//    }
//    string line;
//    size_t maxL = 0;
//
//    while (getline(file, line)) {
//        if (line.length() > maxL) {
//            maxL = line.length();
//        }
//    }
//    file.close();
//    cout << "довжина найдовшого рядка: " << maxL << E;
//
//    return 0;
//}
