/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140084b8e */

undefined8 FUN_140084b8e(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [39];
  undefined1 local_21;
  undefined8 *local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1401c9640 ^ (ulonglong)auStack_48;
  local_18 = param_1[2];
  if (7 < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  local_20 = param_1;
  FUN_140084c7a(param_2,&local_20,&local_21);
  if (DAT_1401c9640 == (local_10 ^ (ulonglong)auStack_48)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_10 ^ (ulonglong)auStack_48);
}

