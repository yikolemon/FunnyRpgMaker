/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008be42 */

void FUN_14008be42(void)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  lVar1 = DAT_140f2a910;
  *(undefined4 *)
   (*(longlong *)(DAT_140f2a910 + 0x15e0) + -8 + (longlong)*(int *)(DAT_140f2a910 + 0x15d8) * 0x78)
       = *(undefined4 *)(DAT_140f2a910 + 0xdb4);
  *(undefined4 *)(lVar1 + 0xdb4) = *(undefined4 *)(lVar1 + 0x2860);
  iVar2 = *(int *)(lVar1 + 0x2128);
  uVar4 = *(uint *)(lVar1 + 0x1fa0) & 0xffffffbf;
  *(uint *)(lVar1 + 0x1fa0) = uVar4;
  if (iVar2 == *(int *)(lVar1 + 0x212c)) {
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
    lVar3 = FUN_140077ab4((longlong)iVar6 << 2);
    if (*(longlong *)(lVar1 + 0x2130) != 0) {
      FUN_1401c5180(lVar3,*(longlong *)(lVar1 + 0x2130),(longlong)*(int *)(lVar1 + 0x2128) << 2);
      FUN_140077b90(*(undefined8 *)(lVar1 + 0x2130));
    }
    *(longlong *)(lVar1 + 0x2130) = lVar3;
    *(int *)(lVar1 + 0x212c) = iVar6;
    uVar4 = *(uint *)(lVar1 + 0x1fa0);
    iVar2 = *(int *)(lVar1 + 0x2128);
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x2130);
  }
  *(uint *)(lVar3 + (longlong)iVar2 * 4) = uVar4;
  *(int *)(lVar1 + 0x2128) = *(int *)(lVar1 + 0x2128) + 1;
  *(short *)(lVar1 + 0x2864) = *(short *)(lVar1 + 0x2864) + 1;
  return;
}

