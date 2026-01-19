#include <iostream>
using namespace std;

int main() {
    char condition;
    int weeks_pregnant;

    cout << "--- Cardiac Protocol During Pregnancy ---" << endl;
    cout << "Is the mother's condition Stable (S) or Unstable (U)? ";
    cin >> condition;

    if (condition == 'U' || condition == 'u') {
        cout << "Mother is UNSTABLE. Immediate action is needed." << endl;
        cout << "Enter weeks of pregnancy: ";
        cin >> weeks_pregnant;
        
        if (weeks_pregnant >= 20) {
            cout << "*** ACTION: Emergency Electric Shock (Cardioversion) is required. Fetus must be Monitored. ***" << endl;
        } else {
            cout << "ACTION: Emergency Electric Shock is required. Fetal monitoring is not strictly mandatory, but advised." << endl;
        }
    } else {
        cout << "Mother is STABLE. Start with simple medication first." << endl;
    }

    return 0;
}
