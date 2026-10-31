/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180197b74 */

longlong FUN_180197b74(longlong *param_1,float param_2,float param_3)

{
  longlong lVar1;
  float fVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  fVar2 = (float)(~-(uint)(param_3 < 0.0) & (uint)param_3 |
                 *(uint *)((longlong)param_1 + 0x14) & -(uint)(param_3 < 0.0));
  if (lVar1 != 0) {
    if ((*(float *)(lVar1 + 0x14) == (float)(int)(param_2 + DAT_1802dbb2c)) &&
       (!NAN(*(float *)(lVar1 + 0x14)) && !NAN((float)(int)(param_2 + DAT_1802dbb2c)))) {
      if ((*(float *)(lVar1 + 0x18) == fVar2) && (!NAN(*(float *)(lVar1 + 0x18)) && !NAN(fVar2))) {
        return lVar1;
      }
    }
  }
  lVar1 = *(longlong *)(param_1[1] + 0x2b0);
  lVar3 = FUN_18019ad71(param_1[1],param_1);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    *(undefined4 *)(lVar3 + 0x50) = *(undefined4 *)(lVar1 + 0xa4);
    *param_1 = lVar3;
  }
  return lVar3;
}

