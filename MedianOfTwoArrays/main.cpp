#include <vector>
#include <iostream>

using namespace std;

double medianEvenLengthVector(vector<int> merged);
double medianOddLengthVector(vector<int> merged);
vector<int> merge(vector<int> nums1, vector<int> nums2);

int main() {
  vector<int> nums1, nums2, merged;

  //Testing module.
  int length;
  int x;
  for(int j = 1; j <= 2; j++){
    cout << "Enter the desired vector length for Vector" << j << ":\n";
    cin >> length;
    
    for(int i = 0; i < length; i++){
      cout << "Enter an integer:\t";
      cin >> x;
      if(j == 1){
        nums1.push_back(x);
      }
      else{
        nums2.push_back(x);
      }
    }
  }
  //End of Testing module.

  merged = merge(nums1, nums2); //Merge both vectors.

  double median;

  if(!(merged.size()%2))
    median = medianEvenLengthVector(merged);
  else
    median = medianOddLengthVector(merged);

  cout << "Median: " << median;
}

double medianEvenLengthVector(vector<int> merged){
  int medLeftIndex = (merged.size()/2) - 1; //Left index
  int medRightIndex = merged.size()/2; //Right index
        
  return (double)(merged.at(medLeftIndex) + merged.at(medRightIndex))/2;
}
    
double medianOddLengthVector(vector<int> merged){        
  int medIndex = merged.size()/2;
        
  return (double)merged.at(medIndex);
}

vector<int> merge(vector<int> nums1, vector<int> nums2){
  vector<int> merged;
  int h = 0, k = 0;

  while(h < nums1.size() && k < nums2.size()){
    if(nums1.at(h) < nums2.at(k)){
      merged.push_back(nums1.at(h));
      h++;
    }
    else{
      merged.push_back(nums2.at(k));
      k++;
    }
  }

  if(!(h < nums1.size())){
    while(k < nums2.size()){
      merged.push_back(nums2.at(k));
      k++;
    }
  }
  else{
    while(h < nums1.size()){
      merged.push_back(nums1.at(h));
      h++;
    }
  }

  return merged;
}