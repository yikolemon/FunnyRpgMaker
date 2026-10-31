/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400272c4 */

undefined8 FUN_1400272c4(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [47];
  undefined1 local_39 [22];
  undefined1 local_23 [11];
  ulonglong local_18;
  
  local_18 = DAT_1401c9640 ^ (ulonglong)auStack_68;
  if (param_2 < 0) {
    lVar1 = FUN_1400194a0(local_23,-param_2);
    *(undefined1 *)(lVar1 + -1) = 0x2d;
    lVar1 = lVar1 + -1;
  }
  else {
    lVar1 = FUN_1400194a0(local_23);
  }
  FUN_14001950a(param_1,lVar1,local_23,local_39);
  if (DAT_1401c9640 == (local_18 ^ (ulonglong)auStack_68)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_18 ^ (ulonglong)auStack_68);
}

