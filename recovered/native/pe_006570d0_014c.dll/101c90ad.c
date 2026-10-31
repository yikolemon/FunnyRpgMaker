/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c90ad */

void FUN_101c90ad(double *param_1,double param_2,double param_3,double param_4,double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = param_5[7];
  dVar2 = param_5[6];
  dVar3 = param_5[8];
  dVar4 = param_5[4];
  dVar5 = param_5[5];
  dVar6 = param_5[3];
  *param_1 = param_5[2] * param_4 + *param_5 * param_2 + param_5[1] * param_3;
  param_1[1] = dVar5 * param_4 + dVar6 * param_2 + dVar4 * param_3;
  param_1[2] = dVar3 * param_4 + dVar2 * param_2 + dVar1 * param_3;
  return;
}

