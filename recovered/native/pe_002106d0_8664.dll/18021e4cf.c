/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021e4cf */

int FUN_18021e4cf(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = -param_1;
  if ((int)-param_1 < 0) {
    uVar1 = param_1;
  }
  uVar2 = -param_2;
  if ((int)-param_2 < 0) {
    uVar2 = param_2;
  }
  if (uVar2 * 0xc < uVar1) {
    return ((int)~param_1 >> 0x1f) * -4 + 4;
  }
  iVar3 = 0;
  if (uVar1 * 0xc < uVar2) {
    iVar3 = 1 - ((int)param_2 >> 0x1f);
  }
  return iVar3;
}

