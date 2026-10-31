/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400023c6 */

ulonglong * FUN_1400023c6(undefined8 param_1,ulonglong *param_2,DWORD param_3)

{
  undefined8 *local_30;
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_30 = (undefined8 *)0x0;
  local_28 = FUN_140089460(param_3,(longlong *)&local_30);
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  if (local_28 == 0 || local_30 == (undefined8 *)0x0) {
    param_2[2] = 0xd;
    param_2[3] = 0xf;
    *param_2 = 0x206e776f6e6b6e75;
    *(undefined8 *)((longlong)param_2 + 5) = 0x726f727265206e77;
  }
  else {
    FUN_1400025c6(param_2,local_30,local_28);
  }
  LocalFree(local_30);
  return param_2;
}

