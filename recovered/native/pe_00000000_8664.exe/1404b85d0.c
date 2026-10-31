/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404b85d0 */

bool FUN_1404b85d0(int *param_1)

{
  int iVar1;
  undefined8 local_res8;
  
  FUN_1404b6400(*param_1);
  FUN_1404b62a0(param_1[1]);
  local_res8 = 0;
  iVar1 = FUN_1404b85b0(&local_res8);
  if ((iVar1 == 0) && (*param_1 == (int)local_res8)) {
    return param_1[1] != local_res8._4_4_;
  }
  return true;
}

