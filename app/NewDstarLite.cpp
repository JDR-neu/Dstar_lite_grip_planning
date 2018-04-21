/**
 * @Author: Zejiang Zeng <yzy>
 * @Date:   2018-04-20T22:06:58-04:00
 * @Email:  zzeng@terpmail.umd.edu
 * @Filename: NewDstarLite.cpp
 * @Last modified by:   yzy
 * @Last modified time: 2018-04-20T22:07:04-04:00
 * @Copyright: (C) 2017 Zejiang Zeng - All Rights Reserved
 * You may use, distribute and modify this code under the
 * terms of the BSD license.
 */

#include "NewDstarLite.h"


DstarLite::DstarLite(Buildingmap::gridMatrix gridmap_old,Buildingmap::gridMatrix gridmap_new,int start_x,int start_y,int goal_x,int goal_y) {
        for (int i = 0; i< ROW; i++) {
                for(int j = 0; j< COL; j++) {
                        if(gridmap_old[i][j] == 1)
                                map_info_old.push_back(1);
                        else
                                map_info_old.push_back(0);
                }
        }
        for (int i = 0; i< ROW; i++) {
                for(int j = 0; j< COL; j++) {
                        if(gridmap_new[i][j] == 1)
                                map_info_new.push_back(1);
                        else
                                map_info_new.push_back(0);
                }
        }
        start_node.x = start_x; start_node.y = start_y; start_node.index = start_node.y *COL + start_node.x;
        start_node.rhs = 0; start_node.min_cost_succ = 1; calculateKey(start_node);
        open_hash.insert(std::make_pair(start_node.index, start_node));
        last_node = start_node;
        goal_node.x = goal_x; goal_node.y = goal_y; goal_node.index = goal_node.y *COL + goal_node.x;

}


void DstarLite::calculateKey(Node currentnode){

}

void DstarLite::calculateIndex(Node currentnode) {

}

void DstarLite::updateVertex(Node currentnode) {

}

std::vector<Node> DstarLite::successor_node_list(Node currentnode,std::vector<int> map)  {

}

double DstarLite::cost_between_nodes(Node a, Node b) {
        return std::sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
}

double DstarLite::heuristic(Node a, Node b) {
        return std::sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
}

std::vector<Node> DstarLite::predecessor_node_list(Node currentnode,std::vector<int> map)  {

}

std::vector<int> DstarLite::computeShortestPath() {

}

Node DstarLite::Find_min_Node(const std::vector<Node>& successor_nodes) {

}

bool DstarLite::isNodeValid(Node start_node,std::vector<int> map){

}
