/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140058228 */

undefined8 * FUN_140058228(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1401c9640 ^ (ulonglong)auStack_48;
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  local_18 = 1;
  local_20 = param_2;
  FUN_140107d50(&local_20,param_1 + 1);
  if (DAT_1401c9640 == (local_10 ^ (ulonglong)auStack_48)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_10 ^ (ulonglong)auStack_48);
}

