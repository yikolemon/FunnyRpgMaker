/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e455b */

int * FUN_1400e455b(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  piVar3 = (int *)FUN_140077ab4(0x58);
  piVar3[0] = 0;
  piVar3[1] = 0;
  piVar3[2] = 0;
  piVar3[3] = 0;
  piVar3[4] = 0;
  piVar3[5] = 0;
  piVar3[6] = 0;
  piVar3[7] = 0;
  piVar3[8] = 0;
  piVar3[9] = 0;
  piVar3[10] = 0;
  piVar3[0xb] = 0;
  piVar3[0xc] = 0;
  piVar3[0xd] = 0;
  piVar3[0xe] = 0;
  piVar3[0xf] = 0;
  piVar3[0x10] = 0;
  piVar3[0x11] = 0;
  piVar3[0x12] = 0;
  piVar3[0x13] = 0;
  piVar3[0x14] = 0;
  piVar3[0x15] = 0;
  piVar3[1] = 1;
  iVar2 = *(int *)(param_1 + 0x298);
  *(int *)(param_1 + 0x298) = iVar2 + 1;
  *piVar3 = iVar2;
  iVar2 = *(int *)(param_1 + 0x40);
  if (iVar2 == *(int *)(param_1 + 0x44)) {
    if (iVar2 == 0) {
      iVar5 = 8;
    }
    else {
      iVar5 = iVar2 / 2 + iVar2;
    }
    iVar6 = iVar2 + 1;
    if (iVar2 + 1 < iVar5) {
      iVar6 = iVar5;
    }
    lVar4 = FUN_140077ab4((longlong)iVar6 << 3);
    if (*(longlong *)(param_1 + 0x48) != 0) {
      FUN_1401c5180(lVar4,*(longlong *)(param_1 + 0x48),(longlong)*(int *)(param_1 + 0x40) << 3);
      FUN_140077b90(*(undefined8 *)(param_1 + 0x48));
    }
    *(longlong *)(param_1 + 0x48) = lVar4;
    *(int *)(param_1 + 0x44) = iVar6;
    iVar2 = *(int *)(param_1 + 0x40);
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x48);
  }
  *(int **)(lVar4 + (longlong)iVar2 * 8) = piVar3;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x57) = 1;
  }
  FUN_1400e101a(piVar3,*(undefined4 *)(param_1 + 4),param_2,param_3);
  *(undefined1 *)(param_1 + 0x52) = 0;
  FUN_1400e466f(param_1,piVar3);
  return piVar3;
}

