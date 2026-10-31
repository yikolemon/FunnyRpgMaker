/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10111961 */

void FUN_10111961(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = DAT_1039d74c;
  if (*(short *)(DAT_1039d74c + 0x25e8) < 1) {
    FUN_100fcef5("Calling EndDisabled() too many times!");
  }
  else {
    *(short *)(DAT_1039d74c + 0x25e8) = *(short *)(DAT_1039d74c + 0x25e8) + -1;
    iVar2 = *(int *)(iVar4 + 0x1fa4);
    *(int *)(iVar4 + 0x1fa4) = iVar2 + -1;
    uVar3 = *(uint *)(*(int *)(iVar4 + 0x1fac) + -8 + iVar2 * 4);
    bVar1 = *(byte *)(iVar4 + 0x1e40);
    *(uint *)(iVar4 + 0x1e40) = uVar3;
    if (((bVar1 & 0x40) != 0) && ((uVar3 & 0x40) == 0)) {
      *(undefined4 *)(iVar4 + 0xccc) = *(undefined4 *)(iVar4 + 0x25e4);
    }
  }
  return;
}

