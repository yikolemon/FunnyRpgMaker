/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140083171 */

void FUN_140083171(void)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = DAT_140f2a910;
  uVar2 = *(uint *)(DAT_140f2a910 + 0x30);
  if ((uVar2 & 4) != 0) {
    *(undefined1 *)(DAT_140f2a910 + 0x7a) = 1;
    uVar2 = uVar2 & 0xfffffffb;
    *(uint *)(lVar1 + 0x30) = uVar2;
  }
  if ((uVar2 & 8) != 0) {
    *(undefined1 *)(lVar1 + 0x7b) = 0;
    uVar2 = uVar2 & 0xfffffff7;
    *(uint *)(lVar1 + 0x30) = uVar2;
  }
  if ((uVar2 >> 0xe & 1) != 0) {
    *(undefined1 *)(lVar1 + 0x8a) = 1;
    uVar2 = uVar2 & 0xffffbfff;
    *(uint *)(lVar1 + 0x30) = uVar2;
  }
  if ((short)uVar2 < 0) {
    *(undefined1 *)(lVar1 + 0x8b) = 1;
    uVar2 = uVar2 & 0xffff7fff;
    *(uint *)(lVar1 + 0x30) = uVar2;
  }
  if ((*(longlong *)(lVar1 + 0xc30) != 0) &&
     ((*(code **)(lVar1 + 0xc48) == (code *)0x0 || (*(code **)(lVar1 + 0xc48) == FUN_14007f09a)))) {
    *(undefined1 **)(lVar1 + 0xc48) = &LAB_1400a5f76;
  }
  if ((*(longlong *)(lVar1 + 0xc38) != 0) &&
     ((*(code **)(lVar1 + 0xc50) == (code *)0x0 || (*(code **)(lVar1 + 0xc50) == FUN_14007f207)))) {
    *(undefined1 **)(lVar1 + 0xc50) = &LAB_1400a5f88;
  }
  if (((uVar2 >> 10 & 1) != 0) && ((~*(uint *)(lVar1 + 0x34) & 0xc00) != 0)) {
    *(uint *)(lVar1 + 0x30) = uVar2 & 0xfffffbff;
  }
  return;
}

