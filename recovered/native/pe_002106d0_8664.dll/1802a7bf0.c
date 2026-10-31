/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802a7bf0 */

uint FUN_1802a7bf0(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = FUN_18029c230();
  if ((uVar2 & 0x3f) == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = (uVar2 & 1) << 4;
    uVar3 = uVar4 | 8;
    if ((uVar2 & 4) == 0) {
      uVar3 = uVar4;
    }
    uVar4 = uVar3 | 4;
    if ((uVar2 & 8) == 0) {
      uVar4 = uVar3;
    }
    uVar1 = uVar4 | 2;
    if ((uVar2 & 0x10) == 0) {
      uVar1 = uVar4;
    }
    uVar3 = uVar1 | 1;
    if ((uVar2 & 0x20) == 0) {
      uVar3 = uVar1;
    }
    if ((uVar2 & 2) != 0) {
      return uVar3 | 0x80000;
    }
  }
  return uVar3;
}

