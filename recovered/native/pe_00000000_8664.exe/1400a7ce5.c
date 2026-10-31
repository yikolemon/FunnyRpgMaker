/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a7ce5 */

void FUN_1400a7ce5(float *param_1,float *param_2,uint param_3,char param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(*(longlong *)(DAT_140f2a910 + 0x2200) + 0x168);
  fVar2 = *(float *)(*(longlong *)(DAT_140f2a910 + 0x2200) + 0x16c);
  if (-1 < param_4) {
    if ((*param_2 == DAT_1402112e4) && (!NAN(*param_2) && !NAN(DAT_1402112e4))) {
      fVar1 = (float)FUN_14004863e(*param_1 + DAT_1401c86c8,param_1[2]);
      *param_2 = fVar1 - fVar3;
    }
    if ((param_2[1] == DAT_1402112e4) && (!NAN(param_2[1]) && !NAN(DAT_1402112e4))) {
      param_2[1] = (param_1[1] + param_1[3]) * DAT_1401c86a0 - fVar2;
    }
  }
  if ((param_3 & 0xfffffffe) == 2) {
    fVar2 = *param_2;
    if ((fVar2 != DAT_1402112e4) || (NAN(fVar2) || NAN(DAT_1402112e4))) {
      fVar3 = fVar3 + fVar2;
      param_1[2] = fVar3;
      *param_1 = fVar3;
    }
  }
  else if (param_3 < 2) {
    fVar3 = param_2[1];
    if ((fVar3 != DAT_1402112e4) || (NAN(fVar3) || NAN(DAT_1402112e4))) {
      fVar2 = fVar2 + fVar3;
      param_1[3] = fVar2;
      param_1[1] = fVar2;
    }
  }
  return;
}

