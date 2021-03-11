#include <ros/ros.h>
#include <std_msgs/String.h>

using namespace ros;
using namespace std_msgs;

// A COMPLETER ...
// Préciser le type de message reçu
void infoCallback(/*... msg*/) {

  // A DECOMMENTER ...
  // ROS_INFO("Chatter Listener : I heard msg: [%s]", msg.data.c_str());
}

int main(int argc, char **argv) {
  init(argc, argv, "listener_node");
  NodeHandle nh;
  Subscriber info_sub;

  // A COMPLETER...
  // Préciser le topic
  // info_sub = nh.subscribe("...", 1000, infoCallback);

  spin();

  return 0;
}
