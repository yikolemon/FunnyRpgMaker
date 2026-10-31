/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016782a */

float FUN_18016782a(longlong param_1,int param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  float fVar4;
  
  fVar1 = *(float *)(param_1 + 0xc0);
  fVar2 = *(float *)(param_1 + 200);
  fVar4 = *(float *)(param_1 + 0xb8) + fVar1 + fVar1 + *(float *)(param_1 + 0xc4) + fVar2;
  lVar3 = (longlong)param_2 * 0x74 + *(longlong *)(param_1 + 0x18);
  if ((*(uint *)(param_1 + 4) >> 0x18 & 1) == 0) {
    if ((*(uint *)(param_1 + 4) >> 0x12 & 1) == 0) {
      return ((((*(float *)(param_1 + 0x118) -
                (float)(~(int)*(short *)(lVar3 + 0x58) + (int)*(short *)(param_1 + 0x202)) * fVar4)
               - *(float *)(lVar3 + 8)) - fVar2) - (fVar1 + fVar1)) - *(float *)(param_1 + 0xbc);
    }
  }
  else if (*(short *)(lVar3 + 0x56) < *(short *)(param_1 + 0x22c)) {
    return ((((*(float *)(param_1 + 0x128) -
              (float)((int)*(short *)(param_1 + 0x22c) - (int)*(short *)(lVar3 + 0x56)) * fVar4) -
             *(float *)(lVar3 + 8)) - *(float *)(param_1 + 0xbc)) - fVar1) - fVar2;
  }
  return DAT_1802de564;
}

