/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14017c5e0 */

void FUN_14017c5e0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  puVar1 = (undefined8 *)FUN_140128a1f(param_1,8,&local_24);
  if (local_24 == 0) {
    *puVar1 = param_1;
  }
  *param_2 = puVar1;
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_48);
}

