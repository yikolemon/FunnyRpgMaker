/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140088e1e */

void FUN_140088e1e(void)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  
  lVar2 = DAT_140f2a910;
  if (*(longlong *)(DAT_140f2a910 + 0x23e8) != 0) {
    FUN_1400a7dd7();
  }
  if (*(longlong *)(lVar2 + 0x2200) != 0) {
    cVar3 = FUN_140095421();
    if ((cVar3 != '\0') &&
       (uVar1 = *(uint *)(lVar2 + 0x22a4), -1 < (char)uVar1 && (uVar1 & 0xf) != 0)) {
      FUN_1400a7f81();
      return;
    }
  }
  return;
}

