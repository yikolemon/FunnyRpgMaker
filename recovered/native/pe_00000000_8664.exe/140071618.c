/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140071618 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140071618(float *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  float fVar4;
  
  uVar1 = *(ulonglong *)(param_1 + 0xe);
  fVar4 = (float)FUN_1401a1f10((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
  uVar3 = (longlong)(fVar4 - _DAT_1401c8620) & (longlong)fVar4 >> 0x3f | (longlong)fVar4;
  uVar2 = 8;
  if (8 < uVar3) {
    uVar2 = uVar3;
  }
  uVar3 = uVar1;
  if (uVar1 < uVar2) {
    uVar3 = uVar1 * 8;
    if (uVar3 < uVar2 || uVar3 - uVar2 == 0) {
      uVar3 = uVar2;
    }
    if (0x1ff < uVar1) {
      uVar3 = uVar2;
    }
  }
  FUN_140070e60(param_1,uVar3);
  return;
}

