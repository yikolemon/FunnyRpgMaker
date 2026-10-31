/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101170bb */

void FUN_101170bb(void)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = DAT_1039d74c;
  if ((*(int *)(DAT_1039d74c + 0x2048) == 0) ||
     ((*(byte *)(*(int *)(DAT_1039d74c + 0x2048) + 0xe) & 1) == 0)) {
    if (*(int *)(DAT_1039d74c + 0x208c) == 3) {
      if ((*(byte *)(DAT_1039d74c + 0x30) & 2) != 0) goto LAB_101170f0;
      goto LAB_101170e6;
    }
    if ((*(int *)(DAT_1039d74c + 0x208c) == 2) && ((*(byte *)(DAT_1039d74c + 0x30) & 1) == 0))
    goto LAB_101170e6;
LAB_101170f0:
    uVar2 = 1;
    if (*(char *)(DAT_1039d74c + 0x6a) != '\x01') goto LAB_101170fe;
  }
  else {
LAB_101170e6:
    uVar2 = 0;
  }
  *(undefined1 *)(DAT_1039d74c + 0x2040) = uVar2;
LAB_101170fe:
  *(undefined2 *)(iVar1 + 0x2041) = 0x101;
  return;
}

