/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002f834 */

int __thiscall FUN_1002f834(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1002f878(param_1,param_2);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else {
    FUN_1002febe(param_2);
    iVar1 = 0;
    do {
      FUN_1002ff46(param_2);
      iVar1 = iVar1 + 1;
      iVar2 = FUN_1002f878(param_1,param_2);
    } while (-1 < iVar2);
  }
  return iVar1;
}

