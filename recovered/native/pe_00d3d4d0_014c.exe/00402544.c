/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00402544 */

undefined4 * FUN_00402544(undefined4 *param_1,DWORD param_2)

{
  uint *local_28;
  DWORD local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_14 = 0xffffffff;
  local_18 = &LAB_00406e20;
  local_1c = ExceptionList;
  local_28 = (uint *)0x0;
  ExceptionList = &local_1c;
  local_24 = FUN_00481c80(param_2,(int *)&local_28);
  *(undefined8 *)(param_1 + 4) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (local_24 == 0 || local_28 == (uint *)0x0) {
    param_1[4] = 0xd;
    param_1[5] = 0xf;
    *param_1 = 0x6e6b6e75;
    param_1[1] = 0x206e776f;
    param_1[2] = 0x6f727265;
    *(undefined1 *)(param_1 + 3) = 0x72;
  }
  else {
    local_14 = 0;
    FUN_00402780(param_1,local_28,local_24);
  }
  local_14 = 0xffffffff;
  LocalFree(local_28);
  ExceptionList = local_1c;
  return param_1;
}

