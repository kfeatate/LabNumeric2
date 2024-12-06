#pragma once
#include<vector>
#include <functional>
#include<iostream>
#include<cmath>
using namespace std;


vector<vector<double>> differenceScheme(int n, double mu1, double mu2, double breaking_point, int is_test_task, double* maxDifference, double* maxDiffX);
/*
�� ���� �������� ��������� ���������:
double h - ���, ���������� ����� ������ �����
double n - ���������� �������� �����
double mu1 - ����� ��������� �������
double mu2 - ������ ��������� �������
double breaking_point - ����� �������
int is_test_task - ������, ������������, ��������� �� � ������ ������ �������� ������ ��� �� ��������

�������� ��� ���������� �������,���������� "�������", � ������ ������� �������:
{ xi =i*h - ������� �����, v_with_usual_h[i] - ��������� �������� � ���� �����,
	v_with_half_h[2 * i] - ��������� �������� � ���� �����, ����������� � ���������� �����,
	v_minus_v_half_h[i] - ������ �������� ���������� ������� � ������ ����� � ������� ����� � � ���������� ����� }
*/
double u_for_test(double x);
/*
���������� ������������� ������� �������� ������ � ����� �
*/
vector<double> sweepMethod(int n, double mu1, double mu2, double breaking_point, int is_test_task);
/*
�� ���� �������� ��������� ���������:
double h - ���, ���������� ����� ������ �����
double n - ���������� �������� �����
double mu1 - ����� ��������� �������
double mu2 - ������ ��������� �������
double breaking_point - ����� �������
int is_test_task - ������, ������������, ��������� �� � ������ ������ �������� ������ ��� �� ��������

������� ��������� ����� �������� ��� ������� ���������� �����, ���������� ������ ���� vector<double> - ������� ���������� �����

�������� ���������� ���������� ������ � ���� �������
*/
double d_i(double h, double breaking_point, double x_i_minus_05, double x_i_plus_05, double x_i, int is_test_task);
/*
����������� �� ���������� �����
*/
double a_i(double h, double breaking_point, double x_i_minus_05, double x_i_minus_1, double x_i, int is_test_task);
/*
����������� �� ���������� �����
*/
double fi_i(double h, double breaking_point, double x_i_minus_05, double x_i_plus_05, double x_i, int is_test_task);
/*
����������� �� ���������� �����
*/
double A_i(int i, double h, double breaking_point, int is_test_task);
/*
����������� �� ������ ��������
*/
double B_i(int i, double h, double breaking_point, int is_test_task);
/*
����������� �� ������ ��������
*/
double C_i(int i, double h, double breaking_point, int is_test_task);
/*
����������� �� ������ ��������
*/
