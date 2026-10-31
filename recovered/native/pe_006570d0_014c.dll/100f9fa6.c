/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f9fa6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f9fa6(undefined8 *param_1,undefined8 *param_2,float *param_3,undefined8 *param_4,
                 float *param_5,float *param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = (float)*param_1;
  fVar3 = (float)*param_2 - fVar6;
  fVar7 = (float)((ulonglong)*param_1 >> 0x20);
  fVar4 = (float)*param_4 - fVar6;
  fVar1 = (float)((ulonglong)*param_4 >> 0x20) - fVar7;
  fVar2 = (float)((ulonglong)*param_2 >> 0x20) - fVar7;
  fVar5 = fVar3 * (param_3[1] - fVar7) - (*param_3 - fVar6) * fVar2;
  *param_6 = ((param_3[1] - fVar7) * fVar4 - (*param_3 - fVar6) * fVar1) / fVar5;
  fVar5 = ((float)((uint)fVar2 ^ _DAT_1028f620) * fVar4 + fVar3 * fVar1) / fVar5;
  *param_7 = fVar5;
  *param_5 = (DAT_1028b430 - *param_6) - fVar5;
  return;
}

