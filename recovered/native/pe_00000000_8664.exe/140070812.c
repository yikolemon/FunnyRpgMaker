/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140070812 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140070812(float *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  float fVar2;
  
  fVar2 = (float)FUN_1401a1f10((float)*(ulonglong *)(param_1 + 4) / *param_1);
  uVar1 = (longlong)(fVar2 - _DAT_1401c8620) & (longlong)fVar2 >> 0x3f | (longlong)fVar2;
  if (uVar1 < param_2) {
    uVar1 = param_2;
  }
  if (*(ulonglong *)(param_1 + 0xe) < uVar1) {
    FUN_14007088e(param_1);
    return;
  }
  return;
}

