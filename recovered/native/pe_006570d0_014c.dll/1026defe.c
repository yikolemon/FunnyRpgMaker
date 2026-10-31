/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026defe */

uint FUN_1026defe(uint param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_2 + 2;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    uVar2 = FUN_1027f9ee(param_1,param_2,param_3);
    return uVar2;
  }
  *(undefined1 *)*param_2 = (undefined1)param_1;
  *param_2 = *param_2 + 1;
  return param_1 & 0xff;
}

