/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019599f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18019599f(longlong param_1,int param_2,int param_3,float *param_4,float param_5,
                  float param_6,undefined8 *param_7)

{
  longlong lVar1;
  float *pfVar2;
  float fVar3;
  
  if (param_2 < param_3) {
    lVar1 = *(longlong *)(param_1 + 0x28);
    pfVar2 = (float *)(lVar1 + (longlong)param_2 * 0x14);
    fVar3 = (float)(_DAT_1802b0ce0 ^ (uint)param_6);
    do {
      *(ulonglong *)pfVar2 =
           CONCAT44((float)((ulonglong)*param_7 >> 0x20) +
                    (*pfVar2 - *param_4) * param_6 + (pfVar2[1] - param_4[1]) * param_5,
                    (float)*param_7 +
                    (*pfVar2 - *param_4) * param_5 + (pfVar2[1] - param_4[1]) * fVar3);
      pfVar2 = pfVar2 + 5;
    } while (pfVar2 < (float *)(lVar1 + (longlong)param_3 * 0x14));
  }
  return;
}

