/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140031d26 */

undefined8 FUN_140031d26(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [47];
  undefined1 local_39 [22];
  undefined1 local_23 [11];
  ulonglong local_18;
  
  local_18 = DAT_1401c9640 ^ (ulonglong)auStack_68;
  uVar1 = FUN_1400257fa(local_23);
  FUN_14001950a(param_1,uVar1,local_23,local_39);
  if (DAT_1401c9640 == (local_18 ^ (ulonglong)auStack_68)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_18 ^ (ulonglong)auStack_68);
}

