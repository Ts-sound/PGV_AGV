#pragma once
#include "Movement.h"
#include "../parameter_define.h"

class Movemeng_Mecanum_Class:public Movement_Class
{
public:

private:
	float Cal_Displacement(const Coordinate_Class Destination_Coor_InOrigin) override;	//根据终点坐标在起点坐标中的坐标计算插补距离
	Velocity_Class &Cal_Velocity(const Coordinate_Class&Destination_Coor_InOrigin, const float velocity) override;	//根据终点坐标在起点坐标中的坐标，将合速度分配给各个轴
	float Cal_Current_Coor_InOrigin(const Coordinate_Class Current_Coor_InOrigin) override;	//根据当前坐标计算在源坐标系上的位移

	float x_temp_InOrigin;	//终点坐标在起点坐标系上的x轴偏移
	float y_temp_InOrigin;	//终点坐标在起点坐标系上的y轴偏移
	float angle_equivalent_temp_InOrigin;	//终点坐标在起点坐标系上的角度轴的偏移（等效为线偏移）
	float distance_InOrigin;	//终点坐标离起点坐标的距离绝对值

};
