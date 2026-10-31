/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1025f258 */

void FUN_1025f258(undefined4 param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = FUN_1025f331(param_1,param_3);
  if (cVar1 == '\0') {
    *param_2 = -1;
  }
  else {
    *param_2 = *param_2 + 1;
  }
  return;
}

