/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140109228 */

void FUN_140109228(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  if (param_1[1] != 0) {
    *param_1 = 0;
    FUN_140077b90();
    param_1[1] = 0;
  }
  if (param_1[0x26] != 0) {
    param_1[0x25] = 0;
    FUN_140077b90();
    param_1[0x26] = 0;
  }
  iVar1 = *(int *)(param_1 + 0x25);
  if (iVar1 == 0) {
    iVar2 = 8;
  }
  else {
    iVar2 = iVar1 / 2 + iVar1;
  }
  iVar4 = iVar1 + 1;
  if (iVar1 + 1 < iVar2) {
    iVar4 = iVar2;
  }
  lVar3 = FUN_140077ab4((longlong)iVar4 << 2);
  if (param_1[0x26] != 0) {
    FUN_1401c5180(lVar3,param_1[0x26],(longlong)*(int *)(param_1 + 0x25) << 2);
    FUN_140077b90(param_1[0x26]);
  }
  param_1[0x26] = lVar3;
  *(int *)((longlong)param_1 + 300) = iVar4;
  *(undefined4 *)(lVar3 + (longlong)*(int *)(param_1 + 0x25) * 4) = 0;
  *(int *)(param_1 + 0x25) = *(int *)(param_1 + 0x25) + 1;
  return;
}

