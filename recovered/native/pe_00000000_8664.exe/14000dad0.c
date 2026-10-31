/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000dad0 */

undefined8 * FUN_14000dad0(undefined8 *param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  if (*(char *)*param_1 == '\x02') {
    param_1[2] = param_1[2] + 0x10;
  }
  else if (*(char *)*param_1 == '\x01') {
    local_20 = param_1[1];
    FUN_140006b8a(&local_20);
    param_1[1] = local_20;
  }
  else {
    param_1[3] = param_1[3] + 1;
  }
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_48)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_48);
}

