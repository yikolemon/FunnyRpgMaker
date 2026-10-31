/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100752b0 */

uint FUN_100752b0(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = param_3 - param_2;
  if (param_4 <= (uint)(param_3 - param_2)) {
    uVar1 = param_4;
  }
  return uVar1;
}

