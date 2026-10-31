/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e4345 */

void FUN_1400e4345(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x2a0);
  if (iVar1 == *(int *)(param_1 + 0x2a4)) {
    if (iVar1 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar1 / 2 + iVar1;
    }
    iVar4 = iVar1 + 1;
    if (iVar1 + 1 < iVar3) {
      iVar4 = iVar3;
    }
    lVar2 = FUN_140077ab4((longlong)iVar4 << 3);
    if (*(longlong *)(param_1 + 0x2a8) != 0) {
      FUN_1401c5180(lVar2,*(longlong *)(param_1 + 0x2a8),(longlong)*(int *)(param_1 + 0x2a0) << 3);
      FUN_140077b90(*(undefined8 *)(param_1 + 0x2a8));
    }
    *(longlong *)(param_1 + 0x2a8) = lVar2;
    *(int *)(param_1 + 0x2a4) = iVar4;
    iVar1 = *(int *)(param_1 + 0x2a0);
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x2a8);
  }
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 8) = param_2;
  *(int *)(param_1 + 0x2a0) = *(int *)(param_1 + 0x2a0) + 1;
  return;
}

