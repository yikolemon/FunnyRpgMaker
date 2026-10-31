/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400baa29 */

undefined8 FUN_1400baa29(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1401c9640 ^ (ulonglong)auStack_48;
  FUN_1400baa85(local_28);
  FUN_140042588(param_1,local_28);
  if (DAT_1401c9640 == (local_18 ^ (ulonglong)auStack_48)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_18 ^ (ulonglong)auStack_48);
}

