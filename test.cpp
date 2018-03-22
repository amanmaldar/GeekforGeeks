// codes are seperated by ---
//------------------------------------------------------------------------------------------------------------------------


// set::count
#include <iostream>
#include <set>
#include <map>
using namespace std;

typedef struct{
    map<set<int>,int> counter;
    int k;
}lk;

int main ()
{
    lk c;
    c.k=1;
    map<set<int>,int> counter;
    std::set<int> myset;
    set<int> n_set;

  // set some initial values:
  
    n_set.insert(3);
    n_set.insert(3);        // duplicate values are ignored // check usinf n_set.count(3);
    c.counter[n_set] =2;    //n_set refers to recent insertion TRICKY
    // This is how we will access the map element every time.
    std::cout << "Testing: " 
      << c.counter.count(n_set)<< " " <<  c.counter[n_set] << std::endl;
    
    // c.counter.count(n_set)
    // this is map functinality to count number of entries in map.
    // since we are using set, answer would be always 1
    n_set.insert(4);
    c.counter[n_set] += 3;
    std::cout << "Testing: " 
      << c.counter.count(n_set)<< " " <<  c.counter[n_set] << std::endl;

  return 0;
}

//------------------------------------------------------------------------------------------------------------------------


                
// set::count
#include <iostream>
#include <set>

using namespace std;
int main ()
{
  std::set<int> myset;
  std::set<int>::iterator it;

  // set some initial values:
  for (int i=1; i<5; ++i) myset.insert(i*3);    // set: 3 6 9 12
    //std::cout << myset. << std::endl    
    
  for (auto i=myset.begin(); i!= myset.end(); i++)
                std::cout << *i << std::endl;
                
    it= myset.find(3);
    cout << "found: " << *it << " at location: " << &it << "\n";            
    
    //does not allow duplicates            
    myset.insert(3);
    it= myset.find(3);
    cout << "found: " << *it << " at location: " << &it;
                
  return 0;
}

//------------------------------------------------------------------------------------------------------------------------

// vector::back
#include <iostream>
#include <vector>

int main ()
{
  std::vector<int> myvector;

  myvector.push_back(10);
  myvector.push_back(4);
  myvector.push_back(6);    //dont change it for subtractions to work
    std::cout << ' ' << myvector.back();
    std::cout << ' ' << myvector[myvector.back()];  //gargbage value
    std::cout << ' ' << myvector[myvector.back()-4];
    std::cout << ' ' << myvector[myvector.back()-5];
  return 0;
  while (myvector.back() != 0)
  {
    myvector.push_back ( myvector.back() -1 );
  }

  std::cout << "myvector contains:";
  for (unsigned i=0; i<myvector.size() ; i++)
    std::cout << ' ' << myvector[i];
  std::cout << '\n';

  return 0;
}

//------------------------------------------------------------------------------------------------------------------------

// find vector intersection
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main() {
	// both the vectors should be sorted.
	vector <int> vec0 = {1,2,3,4,5,6,10,15,20};
	vector <int> vec1 = {1,2,5,20};
	vector <int> vec2;
	std::set_intersection(  vec0.begin(), vec0.end(),
                        vec1.begin(), vec1.end(),
                        std::back_inserter( vec2 )  );
        
    cout << "total common elements are: " << vec2.size() << endl;;
    cout << "printing common elements from vectors: " ;                
    for (int i=0;i<vec2.size();i++)
    {
        cout << vec2[i] << " " ;
    }
    cout << endl;
	return 0;
}

//------------------------------------------------------------------------------------------------------------------------

//------------------------------------------------------------------------------------------------------------------------

//------------------------------------------------------------------------------------------------------------------------

