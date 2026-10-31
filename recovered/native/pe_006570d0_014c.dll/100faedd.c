/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100faedd */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100faedd(float param_1,float param_2,float param_3,float *param_4,float *param_5,
                 float *param_6)

{
  float10 fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if ((param_2 == 0.0) && (!NAN(param_2))) {
    *param_6 = param_3;
    *param_5 = param_3;
    *param_4 = param_3;
    return;
  }
  fVar1 = (float10)FUN_1026dec0((double)param_1,0,0x3ff00000);
  fVar5 = (float)fVar1 / _DAT_102b8a60;
  fVar2 = (DAT_1028b430 - param_2) * param_3;
  fVar4 = (DAT_1028b430 - param_2 * (fVar5 - (float)(int)fVar5)) * param_3;
  if (4 < (uint)(int)fVar5) {
    *param_4 = param_3;
    *param_5 = fVar2;
    *param_6 = fVar4;
    return;
  }
  fVar3 = (DAT_1028b430 - param_2 * (DAT_1028b430 - (fVar5 - (float)(int)fVar5))) * param_3;
  switch((int)fVar5) {
  case 0:
    *param_4 = param_3;
    *param_5 = fVar3;
    break;
  case 1:
    *param_4 = fVar4;
    *param_5 = param_3;
    break;
  case 2:
    *param_4 = fVar2;
    *param_5 = param_3;
    *param_6 = fVar3;
    return;
  case 3:
    *param_4 = fVar2;
    *param_5 = fVar4;
    goto LAB_100fafd9;
  case 4:
    *param_4 = fVar3;
    *param_5 = fVar2;
LAB_100fafd9:
    *param_6 = param_3;
    return;
  }
  *param_6 = fVar2;
  return;
}

