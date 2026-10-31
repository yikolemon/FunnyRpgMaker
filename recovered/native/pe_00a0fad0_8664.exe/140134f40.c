/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140134f40 */

bool FUN_140134f40(int *param_1)

{
  int iVar1;
  undefined8 local_res8;
  
  FUN_1401349c0(*param_1);
  FUN_140134860(param_1[1]);
  local_res8 = 0;
  iVar1 = FUN_140134f20(&local_res8);
  if ((iVar1 == 0) && (*param_1 == (int)local_res8)) {
    return param_1[1] != local_res8._4_4_;
  }
  return true;
}

