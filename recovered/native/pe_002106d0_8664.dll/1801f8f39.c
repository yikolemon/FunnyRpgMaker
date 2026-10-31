/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f8f39 */

uint FUN_1801f8f39(undefined8 param_1,int param_2,int param_3)

{
  uint uVar1;
  
  if (-1 < param_2) {
    uVar1 = 0;
    if (0 < param_3 + param_2) {
      uVar1 = param_3 + param_2;
    }
    return uVar1;
  }
  return param_2 - param_3 >> 0x1f & param_2 - param_3;
}

