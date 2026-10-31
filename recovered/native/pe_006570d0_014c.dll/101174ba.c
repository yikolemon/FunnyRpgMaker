/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101174ba */

void FUN_101174ba(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_1039d74c;
  iVar1 = *(int *)(DAT_1039d74c + 0x2048);
  if (iVar1 != 0) {
    iVar4 = *(int *)(DAT_1039d74c + 0x20a4);
    if (*(int *)(DAT_1039d74c + 0x2044) != iVar4) {
      uVar2 = *(undefined4 *)(DAT_1039d74c + 0x20a8);
      *(undefined4 *)(DAT_1039d74c + 0x2200) = *(undefined4 *)(DAT_1039d74c + 0x204c);
      *(int *)(iVar3 + 0x2204) = iVar4;
      *(undefined4 *)(iVar3 + 0x2208) = uVar2;
      *(undefined4 *)(iVar3 + 0x220c) = 0;
      *(undefined1 *)(iVar3 + 0x2210) = 0;
      *(byte *)(iVar3 + 0x2211) = (byte)(*(uint *)(iVar3 + 0x20bc) >> 0x15) & 1;
    }
    if ((*(byte *)(iVar3 + 0x27b4) & 0x10) != 0) {
      FUN_100f99e6("[nav] NavInitRequest: ApplyResult: NavID 0x%08X in Layer %d Window \"%s\"\n",
                   iVar4,*(undefined4 *)(iVar3 + 0x2050),*(undefined4 *)(iVar1 + 4));
      iVar4 = *(int *)(iVar3 + 0x20a4);
    }
    FUN_1011714e(iVar4,*(undefined4 *)(iVar3 + 0x2050),*(undefined4 *)(iVar3 + 0x20a8),
                 iVar3 + 0x20ac);
    *(undefined1 *)(iVar3 + 0x2043) = 1;
    if ((*(uint *)(iVar3 + 0x20d0) & *(uint *)(iVar3 + 0x20d4)) != 0xffffffff) {
      *(uint *)(iVar3 + 0x2090) = *(uint *)(iVar3 + 0x20d0);
      *(uint *)(iVar3 + 0x2094) = *(uint *)(iVar3 + 0x20d4);
    }
    if (*(char *)(iVar3 + 0x209b) == '\x01') {
      FUN_101170bb();
      return;
    }
  }
  return;
}

