/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0042cf32 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0042cf32(double *param_1,double param_2)

{
  float10 fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if (param_2 <= DAT_004d7df8) {
    dVar3 = *param_1;
LAB_0042cf6a:
    fVar1 = (float10)dVar3;
  }
  else {
    if (0.0 <= param_2) {
      if (DAT_004cda70 <= param_2) {
        if (DAT_004a88f8 <= param_2) {
          dVar3 = param_1[3];
          goto LAB_0042cf6a;
        }
        dVar2 = param_2 + _DAT_004cda68 + param_2 + _DAT_004cda68;
        dVar3 = param_1[2];
        dVar4 = param_1[3];
      }
      else {
        dVar2 = param_2 + param_2;
        dVar3 = param_1[1];
        dVar4 = param_1[2];
      }
    }
    else {
      dVar2 = param_2 + DAT_004a88f8;
      dVar3 = *param_1;
      dVar4 = param_1[1];
    }
    fVar1 = FUN_00424ed5(dVar3,dVar4,dVar2);
  }
  return fVar1;
}

