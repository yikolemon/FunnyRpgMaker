/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017953e */

int FUN_18017953e(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 == 0) {
    return -1;
  }
  uVar1 = param_1 >> 0x10;
  if (0xffff >= param_1) {
    uVar1 = param_1;
  }
  iVar4 = (uint)(0xffff < param_1) * 0x10;
  iVar3 = iVar4 + 8;
  uVar2 = uVar1 >> 8;
  if (uVar1 < 0x100) {
    iVar3 = iVar4;
    uVar2 = uVar1;
  }
  iVar4 = iVar3 + 4;
  uVar1 = uVar2 >> 4;
  if (uVar2 < 0x10) {
    iVar4 = iVar3;
    uVar1 = uVar2;
  }
  iVar3 = iVar4 + 2;
  uVar2 = uVar1 >> 2;
  if (uVar1 < 4) {
    iVar3 = iVar4;
    uVar2 = uVar1;
  }
  return (iVar3 + 1) - (uint)(uVar2 < 2);
}

