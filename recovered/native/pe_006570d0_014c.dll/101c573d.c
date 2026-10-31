/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c573d */

uint FUN_101c573d(uint param_1)

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
      iVar1 = __aulldiv(param_1 * 0x10000 + -1,
                        ((param_1 >> 0x10) - 1) + (uint)(param_1 * 0x10000 != 0),uVar3,0);
      uVar2 = iVar1 + uVar3 + 1 >> 1;
    } while (uVar2 != uVar3);
  }
  return uVar3;
}

