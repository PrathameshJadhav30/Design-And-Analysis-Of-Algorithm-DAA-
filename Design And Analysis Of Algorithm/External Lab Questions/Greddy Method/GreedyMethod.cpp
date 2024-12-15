#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Structure to represent an activity with start and end times
struct Activity {
    int start;
    int end;
};

// Comparator function to sort activities by their end time
bool compare(Activity a, Activity b) {
    return a.end < b.end;
}

// Function to perform activity selection using the greedy method
void activitySelection(vector<Activity>& activities) {
    // Sort activities based on their end time
    sort(activities.begin(), activities.end(), compare);

    cout << "Selected activities (start, end):" << endl;

    // Select the first activity
    int lastEndTime = activities[0].end;
    cout << "(" << activities[0].start << ", " << activities[0].end << ")" << endl;

    // Iterate through the remaining activities
    for (size_t i = 1; i < activities.size(); i++) {
        // Select activity if its start time is greater than or equal to the end time of the last selected activity
        if (activities[i].start >= lastEndTime) {
            cout << "(" << activities[i].start << ", " << activities[i].end << ")" << endl;
            lastEndTime = activities[i].end;
        }
    }
}

int main() {
    vector<Activity> activities = {
        {1, 3}, {2, 5}, {4, 7}, {1, 8}, {5, 9}, {8, 10}
    };

    cout << "Activities (start, end):" << endl;
    for (const auto& activity : activities) {
        cout << "(" << activity.start << ", " << activity.end << ")" << endl;
    }

    // Perform activity selection using the greedy method
    activitySelection(activities);

    return 0;
}
