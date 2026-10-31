/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004a6700 */

bool __cdecl FUN_004a6700(uint *param_1)

{
  int iVar1;
  uint local_c [2];
  
  FUN_004a5530(*param_1);
  FUN_004a5240(param_1[1]);
  local_c[0] = 0;
  local_c[1] = 0;
  iVar1 = FUN_004a66e0(local_c);
  if ((iVar1 == 0) && (*param_1 == local_c[0])) {
    return param_1[1] != local_c[1];
  }
  return true;
}

