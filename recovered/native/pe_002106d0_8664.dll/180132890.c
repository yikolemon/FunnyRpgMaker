/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180132890 */

void FUN_180132890(float *param_1)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = *(longlong *)(DAT_180419160 + 0x1608);
  fVar2 = *(float *)(lVar1 + 0x160) + *(float *)(DAT_180419160 + 0xe04);
  if ((((*(float *)(lVar1 + 0x298) <= fVar2) &&
       (*(float *)(lVar1 + 0x29c) <= *(float *)(lVar1 + 0x164))) &&
      (fVar2 + *param_1 <= *(float *)(lVar1 + 0x2a0))) &&
     (*(float *)(lVar1 + 0x164) + param_1[1] <= *(float *)(lVar1 + 0x2a4))) {
    FUN_180119893(0,DAT_1802bb8e0);
    return;
  }
  return;
}

