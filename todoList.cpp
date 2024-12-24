#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<pair<string, bool>> tc;
    int ch=1;

    while(ch){
        cout << "\nTo-Do List Application\n";
        cout << "1. Add Task to List\n";
        cout << "2. View Tasks\n";
        cout << "3. Remove Task from List\n";
        cout << "4. Mark Task as Completed\n";
        cout << "Else Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;

        if (ch == 1) {
            cout << "Enter task: ";
            string nt;
            cin>>nt;
            tc.push_back({nt, false});
            cout << "Task added to List.\n";
        } 
        else if (ch == 2) {
            if (tc.empty()) {
                cout << "No tasks in the list.\n";
            }
            else {
                cout << "\nTasks:\n";
                for (size_t i = 0; i < tc.size(); ++i) {
                    cout << i + 1 << ". " << tc[i].first << (tc[i].second ? " [Completed]" : "") << "\n";
                }
            }
        } 
        else if (ch == 3) {
            if (tc.empty()) {
                cout << "List is Empty, No tasks to remove.\n";
            }
            else {
                cout << "Enter task number to remove: ";
                size_t ri;
                cin >> ri;
                if (ri == 0 || ri > tc.size()) {
                    cout << "Invalid task number.\n";
                } 
                else {
                    tc.erase(tc.begin() + ri - 1);
                    cout << "Task removed.\n";
                }
            }
        } 
        else if (ch == 4) {
            if (tc.empty()) {
                cout << "No tasks to mark as completed.\n";
            } 
            else {
                cout << "Enter task number to mark as completed: ";
                size_t ci;
                cin >> ci;
                if (ci == 0 || ci > tc.size()) {
                    cout << "Invalid task number.\n";
                } 
                else {
                    tc[ci - 1].second = true;
                    cout << "Task marked as completed.\n";
                }
            }
        } 
        else {
            cout << "Exiting application.\n";
            ch=0;
        }
    }

    return 0;
}
