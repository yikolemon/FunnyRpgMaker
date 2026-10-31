/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180178fd2 */

uint FUN_180178fd2(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (param_3 * 3 - param_2) - param_1;
  uVar1 = param_2;
  if (param_1 < param_2) {
    uVar1 = param_1;
  }
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  if ((int)param_2 <= iVar2) {
    param_3 = uVar1;
  }
  if (iVar2 <= (int)uVar1) {
    param_3 = param_2;
  }
  return param_3;
}

