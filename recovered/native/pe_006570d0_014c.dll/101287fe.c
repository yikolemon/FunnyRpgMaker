/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101287fe */

void FUN_101287fe(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  
  iVar2 = DAT_1039d74c;
  iVar1 = *(int *)(DAT_1039d74c + 0x2048);
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(DAT_1039d74c + 0x221c) != 0) {
    return;
  }
  if ((*(byte *)(iVar1 + 0xe) & 1) != 0) {
    return;
  }
  if (*(char *)(DAT_1039d74c + 0x2212) != '\x01') {
    return;
  }
  cVar3 = FUN_10113d60(0x200,1,0xffffffff);
  if (cVar3 == '\0') {
    return;
  }
  if (*(char *)(iVar2 + 0x104) != '\0') {
    return;
  }
  if (*(char *)(iVar2 + 0x106) != '\0') {
    return;
  }
  if ((*(byte *)(iVar2 + 0x30) & 1) == 0) {
    if (*(char *)(iVar2 + 0x105) != '\0') {
LAB_10128879:
      uVar4 = 0xffffffff;
      goto LAB_10128898;
    }
  }
  else {
    if (*(char *)(iVar2 + 0x105) != '\0') goto LAB_10128879;
    if (*(char *)(iVar2 + 0x2040) != '\0') {
      uVar4 = 1;
      goto LAB_10128898;
    }
  }
  uVar4 = (uint)(*(int *)(iVar2 + 0x1528) != 0);
LAB_10128898:
  *(uint *)(iVar2 + 0x2118) = uVar4;
  uVar5 = 3;
  if (*(char *)(iVar1 + 0x100) != '\0') {
    uVar5 = 0x21;
  }
  FUN_1011240d(0xffffffff,uVar4 >> 0x1f ^ 3,0x1400,uVar5);
  *(undefined4 *)(iVar2 + 0x211c) = 0xffffffff;
  return;
}

