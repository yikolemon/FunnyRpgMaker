/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140079b6f */

undefined8 FUN_140079b6f(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_78 [47];
  undefined1 local_49 [43];
  undefined1 local_1e [6];
  ulonglong local_18;
  
  local_18 = DAT_1401c9640 ^ (ulonglong)auStack_78;
  uVar1 = FUN_140079bd3(local_1e);
  FUN_140079c34(param_1,uVar1,local_1e,local_49);
  if (DAT_1401c9640 == (local_18 ^ (ulonglong)auStack_78)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_18 ^ (ulonglong)auStack_78);
}

