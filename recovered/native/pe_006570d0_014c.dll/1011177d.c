/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011177d */

void FUN_1011177d(uint param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = DAT_1039d74c;
  uVar4 = *(uint *)(DAT_1039d74c + 0x1e40) | param_1;
  if (param_2 == '\0') {
    uVar4 = ~param_1 & *(uint *)(DAT_1039d74c + 0x1e40);
  }
  iVar2 = *(int *)(DAT_1039d74c + 0x1fa4);
  *(uint *)(DAT_1039d74c + 0x1e40) = uVar4;
  if (iVar2 == *(int *)(iVar1 + 0x1fa8)) {
    if (iVar2 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar2 / 2 + iVar2;
    }
    iVar5 = iVar2 + 1;
    if (iVar2 + 1 < iVar3) {
      iVar5 = iVar3;
    }
    iVar3 = FUN_100fa1fa(iVar5 * 4);
    if (*(int *)(iVar1 + 0x1fac) != 0) {
      FUN_1025b2d0(iVar3,*(int *)(iVar1 + 0x1fac),*(int *)(iVar1 + 0x1fa4) << 2);
      FUN_100fa2cb(*(undefined4 *)(iVar1 + 0x1fac));
    }
    *(int *)(iVar1 + 0x1fac) = iVar3;
    *(int *)(iVar1 + 0x1fa8) = iVar5;
    iVar2 = *(int *)(iVar1 + 0x1fa4);
  }
  else {
    iVar3 = *(int *)(iVar1 + 0x1fac);
  }
  *(uint *)(iVar3 + iVar2 * 4) = uVar4;
  *(int *)(iVar1 + 0x1fa4) = *(int *)(iVar1 + 0x1fa4) + 1;
  return;
}

