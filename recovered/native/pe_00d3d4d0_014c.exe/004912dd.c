/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004912dd */

void __cdecl FUN_004912dd(WCHAR param_1,FILE *param_2,int *param_3)

{
  char **ppcVar1;
  
  ppcVar1 = &param_2->_base;
  *ppcVar1 = *ppcVar1 + -2;
  if ((int)*ppcVar1 < 0) {
    FUN_0049fe19(param_1,param_2,param_3);
    return;
  }
  *(WCHAR *)param_2->_ptr = param_1;
  param_2->_ptr = param_2->_ptr + 2;
  return;
}

