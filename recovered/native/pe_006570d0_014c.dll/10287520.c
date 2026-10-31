/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10287520 */

bool FUN_10287520(int *param_1)

{
  int iVar1;
  undefined8 local_c;
  
  FUN_102853b0(*param_1);
  FUN_102850c0(param_1[1]);
  local_c = 0;
  iVar1 = FUN_10287500(&local_c);
  if ((iVar1 == 0) && (*param_1 == (int)local_c)) {
    return param_1[1] != local_c._4_4_;
  }
  return true;
}

