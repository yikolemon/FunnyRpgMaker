/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ab7c0 */

void FUN_1400ab7c0(float *param_1)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = *(longlong *)(DAT_140f2a910 + 0x1608);
  fVar2 = *(float *)(lVar1 + 0x160) + *(float *)(DAT_140f2a910 + 0xe04);
  if ((((*(float *)(lVar1 + 0x298) <= fVar2) &&
       (*(float *)(lVar1 + 0x29c) <= *(float *)(lVar1 + 0x164))) &&
      (fVar2 + *param_1 <= *(float *)(lVar1 + 0x2a0))) &&
     (*(float *)(lVar1 + 0x164) + param_1[1] <= *(float *)(lVar1 + 0x2a4))) {
    FUN_140092bab(0,DAT_1401c86a4);
    return;
  }
  return;
}

