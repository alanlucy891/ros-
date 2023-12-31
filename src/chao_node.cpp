#include <ros/ros.h>
#include <std_msgs/String.h>
int main(int argc, char *argv[])
{
    ros::init(argc, argv,"chao_node");
    printf("ni_hao\n");
   
    ros::NodeHandle nh;
    ros::Publisher pub = nh.advertise<std_msgs::String>("abc",10);

    ros::Rate loop_rate(10);
    while(ros::ok())
    {   
    printf("qi_dong\n");
    std_msgs::String msg;
    msg.data="hhhai_";
    pub.publish(msg);
    loop_rate.sleep();
    }
    return 0;
}