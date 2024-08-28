//
// Created by tianh on 3/18/2023.
//

#ifndef SFML_PROJECT_HISTORY_NODE_H
#define SFML_PROJECT_HISTORY_NODE_H

#include "GUIComponent.h"
#include "Snapshot.h"
struct HistoryNode
{
    Snapshot* snapshot;
    GUIComponent* component;
};
#endif //SFML_PROJECT_HISTORY_NODE_H
