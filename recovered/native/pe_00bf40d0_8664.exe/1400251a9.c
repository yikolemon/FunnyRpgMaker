/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400251a9 */

undefined1 (*) [16] FUN_1400251a9(undefined1 (*param_1) [16],double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar3 = param_2[2];
  dVar4 = param_3[7];
  dVar5 = param_3[6];
  dVar6 = param_3[8];
  dVar8 = param_3[5] * dVar3 + dVar1 * param_3[3] + param_3[4] * dVar2;
  auVar7._8_4_ = SUB84(dVar8,0);
  auVar7._0_8_ = param_3[2] * dVar3 + dVar1 * *param_3 + param_3[1] * dVar2;
  auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *param_1 = auVar7;
  *(double *)param_1[1] = dVar6 * dVar3 + dVar5 * dVar1 + dVar4 * dVar2;
  return param_1;
}

