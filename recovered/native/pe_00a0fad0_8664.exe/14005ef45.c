/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14005ef45 */

undefined2 FUN_14005ef45(undefined1 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  undefined2 local_14;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_1401c9640 ^ (ulonglong)auStack_48;
  local_14 = 0;
  local_20 = 0;
  local_28 = param_2;
  local_11 = param_1;
  FUN_1400da650(&local_14,&local_11,1);
  if (DAT_1401c9640 == (local_10 ^ (ulonglong)auStack_48)) {
    return local_14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_10 ^ (ulonglong)auStack_48);
}

