#include "safe_landing_planner/safe_landing_planner_node.hpp"

int main(int argc, char **argv) {
  ros::init(argc, argv, "safe_landing_planner_node");
  ros::NodeHandle nh("~");
  slp::SafeLandingPlannerNode NodeSLP(nh);
  NodeSLP.startNode();

  NodeSLP.worker_.join();

  return 0;
}
