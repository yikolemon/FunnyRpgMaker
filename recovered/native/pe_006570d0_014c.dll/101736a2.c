/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101736a2 */

int __fastcall FUN_101736a2(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 == 0) {
    return -1;
  }
  uVar2 = param_1 >> 0x10;
  if (0xffff >= param_1) {
    uVar2 = param_1;
  }
  iVar4 = (uint)(0xffff < param_1) * 0x10;
  iVar3 = iVar4 + 8;
  uVar1 = uVar2 >> 8;
  if (uVar2 < 0x100) {
    iVar3 = iVar4;
    uVar1 = uVar2;
  }
  iVar4 = iVar3 + 4;
  uVar2 = uVar1 >> 4;
  if (uVar1 < 0x10) {
    iVar4 = iVar3;
    uVar2 = uVar1;
  }
  iVar3 = iVar4 + 2;
  uVar1 = uVar2 >> 2;
  if (uVar2 < 4) {
    iVar3 = iVar4;
    uVar1 = uVar2;
  }
  return (iVar3 + 1) - (uint)(uVar1 < 2);
}

