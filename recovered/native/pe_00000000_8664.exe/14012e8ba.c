/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012e8ba */

uint FUN_14012e8ba(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = 0x1f;
    if (param_1 != 0) {
      for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    uVar2 = 1 << ((byte)(iVar1 + 0x11U >> 1) & 0x1f);
    do {
      uVar3 = uVar2;
      uVar2 = (int)(((ulonglong)param_1 * 0x10000 - 1) / (ulonglong)uVar3) + uVar3 + 1 >> 1;
    } while (uVar2 != uVar3);
  }
  return uVar3;
}

