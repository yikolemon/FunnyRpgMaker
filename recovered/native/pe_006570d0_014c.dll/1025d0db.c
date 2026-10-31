/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1025d0db */

void FUN_1025d0db(short *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_3;
  for (; (iVar1 != 0 && (*param_1 != 0)); param_1 = param_1 + 1) {
    *(short *)*param_2 = *param_1;
    *param_2 = *param_2 + 2;
    *param_3 = *param_3 + -1;
    iVar1 = *param_3;
  }
  return;
}

