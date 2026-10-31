/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ff588 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800ff588(undefined8 param_1,float param_2,float param_3,float *param_4,float *param_5,
                  float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = DAT_1802ac570;
  if ((param_2 == 0.0) && (!NAN(param_2))) {
    *param_6 = param_3;
    *param_5 = param_3;
    *param_4 = param_3;
    return;
  }
  fVar1 = (float)FUN_180285540(param_1,DAT_1802ac570);
  fVar1 = fVar1 / _DAT_1802de60c;
  fVar2 = (fVar4 - param_2) * param_3;
  fVar3 = (fVar4 - param_2 * (fVar1 - (float)(int)fVar1)) * param_3;
  if (4 < (uint)(int)fVar1) {
    *param_4 = param_3;
    *param_5 = fVar2;
    *param_6 = fVar3;
    return;
  }
  fVar4 = (fVar4 - param_2 * (fVar4 - (fVar1 - (float)(int)fVar1))) * param_3;
  switch((int)fVar1) {
  case 0:
    *param_4 = param_3;
    *param_5 = fVar4;
    break;
  case 1:
    *param_4 = fVar3;
    *param_5 = param_3;
    break;
  case 2:
    *param_4 = fVar2;
    *param_5 = param_3;
    *param_6 = fVar4;
    return;
  case 3:
    *param_4 = fVar2;
    *param_5 = fVar3;
    goto LAB_1800ff685;
  case 4:
    *param_4 = fVar4;
    *param_5 = fVar2;
LAB_1800ff685:
    *param_6 = param_3;
    return;
  }
  *param_6 = fVar2;
  return;
}

