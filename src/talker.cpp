#include <iostream>
#include <ros/ros.h>
#include <sstream>
#include <std_msgs/String.h>

// Les namespaces
using namespace std;
using namespace ros;
using namespace std_msgs;

// prototypes des fonctions
string int_to_str(int x);

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





string int_to_str(int x) {
  stringstream ss;
  ss << x;
  return ss.str();
}