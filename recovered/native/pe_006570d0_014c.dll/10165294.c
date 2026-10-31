/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10165294 */

void FUN_10165294(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  
  iVar1 = *(int *)(DAT_1039d74c + 0x2308);
  if (iVar1 == 0) {
    FUN_100fcef5("Call should only be done while in BeginTable() scope!");
    return;
  }
  iVar2 = 0;
  if (param_2 != 0x1000000) {
    iVar2 = param_2;
  }
  if (param_1 - 1U < 2) {
    if (*(float *)(iVar1 + 0x100) <= *(float *)(iVar1 + 0x50) &&
        *(float *)(iVar1 + 0x50) != *(float *)(iVar1 + 0x100)) {
      return;
    }
    *(int *)(iVar1 + 0x70 + (uint)(param_1 == 2) * 4) = iVar2;
    return;
  }
  if (param_1 != 3) {
    return;
  }
  if (*(float *)(iVar1 + 0x100) <= *(float *)(iVar1 + 0x50) &&
      *(float *)(iVar1 + 0x50) != *(float *)(iVar1 + 0x100)) {
    return;
  }
  if (param_3 == 0xffffffff) {
    param_3 = *(uint *)(iVar1 + 0x48);
  }
  if ((*(uint *)(*(int *)(iVar1 + 0x30) + ((int)param_3 >> 5) * 4) >> (param_3 & 0x1f) & 1) == 0) {
    return;
  }
  sVar3 = *(short *)(iVar1 + 0x1e4);
  if (sVar3 < 0) {
    iVar4 = *(int *)(iVar1 + 0x20);
  }
  else {
    iVar4 = *(int *)(iVar1 + 0x20);
    if (param_3 == (int)*(short *)(iVar4 + 4 + sVar3 * 8)) goto LAB_1016533f;
  }
  sVar3 = sVar3 + 1;
  *(short *)(iVar1 + 0x1e4) = sVar3;
LAB_1016533f:
  *(int *)(iVar4 + sVar3 * 8) = iVar2;
  *(short *)(iVar4 + 4 + sVar3 * 8) = (short)param_3;
  return;
}

