/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10128d5b */

void __fastcall FUN_10128d5b(float *param_1,float *param_2,uint param_3,byte param_4)

{
  float10 fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(*(int *)(DAT_1039d74c + 0x2048) + 0x154);
  fVar2 = *(float *)(*(int *)(DAT_1039d74c + 0x2048) + 0x158);
  if ((param_4 & 0x80) == 0) {
    if ((*param_2 == DAT_102b89b4) && (!NAN(*param_2) && !NAN(DAT_102b89b4))) {
      fVar1 = (float10)FUN_100ea38a(*param_1 + DAT_1028b430,param_1[2]);
      *param_2 = (float)fVar1 - fVar3;
    }
    if ((param_2[1] == DAT_102b89b4) && (!NAN(param_2[1]) && !NAN(DAT_102b89b4))) {
      param_2[1] = (param_1[1] + param_1[3]) * DAT_102b70e0 - fVar2;
    }
  }
  if ((param_3 & 0xfffffffe) == 2) {
    fVar2 = *param_2;
    if ((fVar2 != DAT_102b89b4) || (NAN(fVar2) || NAN(DAT_102b89b4))) {
      fVar3 = fVar3 + fVar2;
      param_1[2] = fVar3;
      *param_1 = fVar3;
    }
  }
  else if (param_3 < 2) {
    fVar3 = param_2[1];
    if ((fVar3 != DAT_102b89b4) || (NAN(fVar3) || NAN(DAT_102b89b4))) {
      fVar2 = fVar2 + fVar3;
      param_1[3] = fVar2;
      param_1[1] = fVar2;
    }
  }
  return;
}

