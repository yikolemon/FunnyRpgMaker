/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802a7100 */

bool FUN_1802a7100(int *param_1)

{
  int iVar1;
  undefined8 local_res8;
  
  FUN_1802a4f30(*param_1);
  FUN_1802a4dd0(param_1[1]);
  local_res8 = 0;
  iVar1 = FUN_1802a70e0(&local_res8);
  if ((iVar1 == 0) && (*param_1 == (int)local_res8)) {
    return param_1[1] != local_res8._4_4_;
  }
  return true;
}

