/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021ebf6 */

uint FUN_18021ebf6(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_1 + 0x20U & 0xffffffc0;
  uVar1 = (param_2 + param_1 + 0x20U & 0xffffffc0) - (param_2 + param_1);
  uVar2 = param_1 - uVar4;
  if (param_1 < (int)uVar4) {
    uVar2 = uVar4 - param_1;
  }
  uVar3 = -uVar1;
  if ((int)-uVar1 < 0) {
    uVar3 = uVar1;
  }
  if (uVar2 <= uVar3) {
    uVar1 = uVar4 - param_1;
  }
  return uVar1;
}

