/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d47b2 */

float10 __thiscall FUN_101d47b2(double *param_1,double param_2)

{
  float10 fVar1;
  double dVar2;
  double dVar3;
  
  if (param_2 <= DAT_10303848) {
    dVar2 = *param_1;
LAB_101d47ea:
    fVar1 = (float10)dVar2;
  }
  else {
    if (0.0 <= param_2) {
      if (DAT_102b96d8 <= param_2) {
        if (DAT_1028b438 <= param_2) {
          dVar2 = param_1[3];
          goto LAB_101d47ea;
        }
        param_2 = param_2 + DAT_102b96d0 + param_2 + DAT_102b96d0;
        dVar2 = param_1[2];
        dVar3 = param_1[3];
      }
      else {
        param_2 = param_2 + param_2;
        dVar2 = param_1[1];
        dVar3 = param_1[2];
      }
    }
    else {
      param_2 = param_2 + DAT_1028b438;
      dVar2 = *param_1;
      dVar3 = param_1[1];
    }
    fVar1 = (float10)FUN_101c9079(dVar2,dVar3,param_2);
  }
  return fVar1;
}

