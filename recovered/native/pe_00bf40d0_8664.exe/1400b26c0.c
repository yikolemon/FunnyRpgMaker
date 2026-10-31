/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400b26c0 */

bool FUN_1400b26c0(uint *param_1)

{
  undefined8 uVar1;
  uint local_res8 [2];
  
  FUN_1400b1b00(*param_1);
  FUN_1400b19a0(param_1[1]);
  local_res8[0] = 0;
  local_res8[1] = 0;
  uVar1 = FUN_1400b26a0(local_res8);
  if (((int)uVar1 == 0) && (*param_1 == local_res8[0])) {
    return param_1[1] != local_res8[1];
  }
  return true;
}

