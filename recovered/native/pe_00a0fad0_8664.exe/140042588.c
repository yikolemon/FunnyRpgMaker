/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140042588 */

undefined8 FUN_140042588(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_1401c9640 ^ (ulonglong)auStack_38;
  FUN_1400425de(param_1,param_2,&local_11);
  if (DAT_1401c9640 == (local_10 ^ (ulonglong)auStack_38)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_10 ^ (ulonglong)auStack_38);
}

