/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10105195 */

void FUN_10105195(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = DAT_1039d74c;
  uVar2 = *(uint *)(DAT_1039d74c + 0x30);
  if ((uVar2 & 4) != 0) {
    *(undefined1 *)(DAT_1039d74c + 0x66) = 1;
    uVar2 = uVar2 & 0xfffffffb;
    *(uint *)(iVar1 + 0x30) = uVar2;
  }
  if ((uVar2 & 8) != 0) {
    *(undefined1 *)(iVar1 + 0x67) = 0;
    uVar2 = uVar2 & 0xfffffff7;
    *(uint *)(iVar1 + 0x30) = uVar2;
  }
  if ((uVar2 >> 0xe & 1) != 0) {
    *(undefined1 *)(iVar1 + 0x76) = 1;
    uVar2 = uVar2 & 0xffffbfff;
    *(uint *)(iVar1 + 0x30) = uVar2;
  }
  if ((short)uVar2 < 0) {
    *(undefined1 *)(iVar1 + 0x77) = 1;
    uVar2 = uVar2 & 0xffff7fff;
    *(uint *)(iVar1 + 0x30) = uVar2;
  }
  if ((*(int *)(iVar1 + 0xbf0) != 0) &&
     ((*(undefined1 **)(iVar1 + 0xc00) == (undefined1 *)0x0 ||
      (*(undefined1 **)(iVar1 + 0xc00) == &LAB_10101358)))) {
    *(undefined1 **)(iVar1 + 0xc00) = &LAB_101270a0;
  }
  if ((*(int *)(iVar1 + 0xbf4) != 0) &&
     ((*(undefined1 **)(iVar1 + 0xc04) == (undefined1 *)0x0 ||
      (*(undefined1 **)(iVar1 + 0xc04) == &LAB_101014a4)))) {
    *(undefined1 **)(iVar1 + 0xc04) = &LAB_101270b4;
  }
  if (((uVar2 >> 10 & 1) != 0) && ((~*(uint *)(iVar1 + 0x34) & 0xc00) != 0)) {
    *(uint *)(iVar1 + 0x30) = uVar2 & 0xfffffbff;
  }
  return;
}

