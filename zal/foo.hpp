#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

using namespace std;

vector< char > foo(list< Human >& people)
{
    vector< char > ret_v(people.size());
    auto monster=[](Human& H;){
      if(H.isMonster()) return 'y';
      else return 'n';
    }
    for_each(people.begin(),people.end(),[](Human& H;){return H.birthday();});
    transform(people.begin(),people.end(),ret_v.begin(),monster);
    return ret_v;
}
