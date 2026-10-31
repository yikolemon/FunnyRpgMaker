/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cf8e6 */

uint FUN_1801cf8e6(uint param_1)

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

