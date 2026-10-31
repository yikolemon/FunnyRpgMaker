/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004a6760 */

undefined4 __cdecl FUN_004a6760(uint *param_1)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  uint local_c;
  uint local_8;
  
  local_c = 0;
  local_8 = 0;
  iVar2 = FUN_004a66e0(&local_c);
  if (iVar2 == 0) {
    *param_1 = local_c;
    local_c = local_c | 0x1f;
    param_1[1] = local_8;
    bVar1 = FUN_004a6700(&local_c);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      FUN_0049c5f0();
      return 0;
    }
  }
  return 1;
}

