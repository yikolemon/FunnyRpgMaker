/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002c368 */

int FUN_1002c368(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1002b688(param_2,param_3);
  if (iVar1 < 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  else {
    FUN_10024a34(param_1,iVar1);
  }
  return param_1;
}

