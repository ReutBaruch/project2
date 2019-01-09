#ifndef PROJ2_DFS_H
#define PROJ2_DFS_H

#include "Searcher.h"

template <class Solution, class T>
class DFS: public Searcher<Solution, T> {
    int nodesEvaluated;

public:
    DFS();
    virtual Solution search(Searchable<T> toSearch);
    virtual int getNumberOfNodesEvaluated();
    //Solution backTrace(State<T> goal, Searchable<T> toSearch);

};





#endif //PROJ2_DFS_H
