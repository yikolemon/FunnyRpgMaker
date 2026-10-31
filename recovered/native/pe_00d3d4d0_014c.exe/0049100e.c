/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049100e */

uint __cdecl FUN_0049100e(byte param_1,FILE *param_2,int *param_3)

{
  char **ppcVar1;
  uint uVar2;
  
  ppcVar1 = &param_2->_base;
  *ppcVar1 = *ppcVar1 + -1;
  if ((int)*ppcVar1 < 0) {
    uVar2 = FUN_0049fe0e(param_1,param_2,param_3);
    return uVar2;
  }
  *param_2->_ptr = param_1;
  param_2->_ptr = param_2->_ptr + 1;
  return (uint)param_1;
}

