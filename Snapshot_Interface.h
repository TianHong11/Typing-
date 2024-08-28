//
// Created by tianh on 3/17/2023.
//

#ifndef SFML_PROJECT_SNAPSHOTINTERFACE_H
#define SFML_PROJECT_SNAPSHOTINTERFACE_H

#include "Snapshot.h"
class SnapshotInterface
{
public:
    // this function will return a snapshot of the object's current state
    virtual Snapshot* getSnapshot() = 0;
    // this function will apply a snapshot to the object.
    //This will revert the object back to the state that has been recorded in the snapshot
    virtual void applySnapshot(const Snapshot* snapshot) = 0;

};


#endif //SFML_PROJECT_SNAPSHOTINTERFACE_H
