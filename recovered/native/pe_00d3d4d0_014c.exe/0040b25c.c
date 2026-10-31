/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040b25c */

undefined4 * __thiscall FUN_0040b25c(void *this,undefined4 *param_1)

{
  uint *local_2c;
  uint local_28;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_2c;
  local_18 = &LAB_004181d0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 7;
  local_14 = 0;
  FUN_0040b2f2(this,(int *)&local_2c);
  if (local_2c != (uint *)0x0) {
    FUN_004077de(param_1,local_2c,local_28);
  }
  ExceptionList = local_1c;
  return param_1;
}

