/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180002228 */

undefined8 * FUN_180002228(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  HLOCAL local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_30 = (HLOCAL)0x0;
  local_28 = FUN_18023cbc0(param_3,&local_30);
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  if (local_28 == 0 || local_30 == (HLOCAL)0x0) {
    param_2[2] = 0xd;
    param_2[3] = 0xf;
    *param_2 = 0x206e776f6e6b6e75;
    *(undefined8 *)((longlong)param_2 + 5) = 0x726f727265206e77;
  }
  else {
    FUN_180002428(param_2,local_30,local_28);
  }
  LocalFree(local_30);
  return param_2;
}

