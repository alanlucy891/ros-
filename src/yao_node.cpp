#include <ros/ros.h>
#include <std_msgs/String.h>
int main(int argc, char *argv[])
{
    ros::init(argc, argv,"yao_node");
    printf("hello\n");
   
    ros::NodeHandle nh;
    ros::Publisher pub = nh.advertise<std_msgs::String>("aed",10);

    ros::Rate loop_rate(10);
    while(ros::ok())
    {   
    printf("kai\n");
    std_msgs::String msg;
    msg.data="guo";
    pub.publish(msg);
    loop_rate.sleep();
    }
    return 0;
}