#include <iostream>
#include <set>

using namespace std;

int main(int argc, char** argv) {
  int num_notes, note_difference;
  cin >> num_notes;
  cin >> note_difference;
  set<int> pitches;
  for (int i = 0; i < num_notes; i++) {
    int pitch;
    cin >> pitch;
    pitches.insert(pitch);
  }
  
  // iterate over the pitches, calculate the recordings
  int max_pitch = *(pitches.begin());
  int min_pitch = max_pitch;
  int num_recordings = 1;
  for (int pitch : pitches) {
    // check if pitch is greater than max pitch
    if (pitch > max_pitch && pitch - min_pitch <= note_difference) {
      max_pitch = pitch;
      continue; 
    } else if (pitch < min_pitch && max_pitch - pitch < note_difference) {
      min_pitch = pitch;
      continue; 
    } else if (pitch <= max_pitch && pitch >= min_pitch) {
      continue; 
    } else {
      // broke on this pitch, increment recordings
      num_recordings++;
      max_pitch = pitch;
      min_pitch = pitch;
    }
  }
  cout << num_recordings << endl;
}
