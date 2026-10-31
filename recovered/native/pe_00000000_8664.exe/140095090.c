/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140095090 */

bool FUN_140095090(uint param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)(DAT_140f2a910 + 0x2200);
  if (lVar1 == 0) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
    if ((param_1 & 4) == 0) {
      lVar3 = *(longlong *)(DAT_140f2a910 + 0x1608);
      if ((param_1 & 2) != 0) {
        lVar3 = FUN_14008fb4c(lVar3,(param_1 & 8) == 0,(param_1 & 0x10) >> 4);
      }
      if ((param_1 & 1) != 0) {
        uVar2 = FUN_14008fb00(lVar1,lVar3,(param_1 & 8) == 0,(param_1 & 0x10) >> 4);
        return (bool)uVar2;
      }
      bVar4 = lVar1 == lVar3;
    }
  }
  return bVar4;
}

