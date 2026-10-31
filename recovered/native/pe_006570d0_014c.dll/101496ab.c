/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101496ab */

void FUN_101496ab(undefined4 param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  
  cVar1 = FUN_10133727(param_1,*param_2,param_3,param_4);
  if (cVar1 != '\0') {
    *param_2 = *param_2 ^ 1;
  }
  return;
}

