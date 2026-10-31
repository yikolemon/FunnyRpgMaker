/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010d55d */

void FUN_1010d55d(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  
  iVar3 = DAT_1039d74c;
  *(undefined1 *)(param_1 + 0xff) = 0;
  if ((*(byte *)(iVar3 + 0x1ed1) & 4) == 0) {
    return;
  }
  uVar1 = *(uint *)(iVar3 + 0x1f68);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x100) != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x101) == '\0') {
    if (((uVar1 & 2) != 0) && (*(int *)(iVar3 + 0x14d0) != 0)) {
      iVar2 = *(int *)(*(int *)(iVar3 + 0x14d0) + 0x3a8);
      if (*(int *)(param_1 + 0x3a8) == iVar2) {
        return;
      }
      cVar4 = FUN_101029f7(iVar2,param_1);
      if (cVar4 != '\0') {
        return;
      }
    }
    if (((uVar1 & 4) != 0) && (*(int *)(iVar3 + 0x2048) != 0)) {
      iVar3 = *(int *)(*(int *)(iVar3 + 0x2048) + 0x3a8);
      if (*(int *)(param_1 + 0x3a8) == iVar3) {
        return;
      }
      cVar4 = FUN_101029f7(iVar3,param_1);
      if (cVar4 != '\0') {
        return;
      }
    }
    *(undefined4 *)(param_1 + 0x2e8) = 0;
    *(undefined1 *)(param_1 + 0xff) = 1;
    return;
  }
  return;
}

