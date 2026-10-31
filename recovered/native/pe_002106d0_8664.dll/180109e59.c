/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180109e59 */

void FUN_180109e59(void)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = DAT_180419160;
  uVar2 = *(uint *)(DAT_180419160 + 0x30);
  if ((uVar2 & 4) != 0) {
    *(undefined1 *)(DAT_180419160 + 0x7a) = 1;
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
     ((*(code **)(lVar1 + 0xc48) == (code *)0x0 || (*(code **)(lVar1 + 0xc48) == FUN_180105d82)))) {
    *(undefined1 **)(lVar1 + 0xc48) = &LAB_18012d046;
  }
  if ((*(longlong *)(lVar1 + 0xc38) != 0) &&
     ((*(code **)(lVar1 + 0xc50) == (code *)0x0 || (*(code **)(lVar1 + 0xc50) == FUN_180105eef)))) {
    *(undefined1 **)(lVar1 + 0xc50) = &LAB_18012d058;
  }
  if (((uVar2 >> 10 & 1) != 0) && ((~*(uint *)(lVar1 + 0x34) & 0xc00) != 0)) {
    *(uint *)(lVar1 + 0x30) = uVar2 & 0xfffffbff;
  }
  return;
}

