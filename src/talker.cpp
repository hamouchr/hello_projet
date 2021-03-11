#include <ros/ros.h>
#include <std_msgs/String.h>

using namespace ros;
using namespace std_msgs;

int main(int argc, char **argv) {

  init(argc, argv, "publisher_node");
  NodeHandle nh;
  String msg;
  Publisher info_pub;

  // A COMPLETER...
  // Préciser le topic et le type du message associé
  // info_pub = nh.advertise<...>("...", 1000);

  // A COMPLETER ...
  // Préciser la bonne fréqunce de publication
  Rate loop_rate(1);

  while (ok()) {

    // A Compléter ...
    // Affectation du message

    // A Compléter ...
    // Publication du message

    ROS_INFO("Publisher : %s", msg.data.c_str());

    spinOnce();
    loop_rate.sleep();
  }
  return 0;
}