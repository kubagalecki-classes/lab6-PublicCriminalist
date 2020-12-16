#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

using namespace std;

vector< char > foo(list< Human >& people)
{
    vector< char > ret_v(people.size());

    for_each(people.begin(),people.end(),[](Human& H;){return H.birthday();});
    transform(people.begin(),people.end(),ret_v.begin(),[](Human& H;){
      if(H.isMonster()) return 'n';
      else return 'y';
    });
    return ret_v;
}
