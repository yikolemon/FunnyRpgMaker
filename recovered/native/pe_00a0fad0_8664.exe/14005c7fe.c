/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14005c7fe */

void FUN_14005c7fe(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [46];
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_1401c9640 ^ (ulonglong)auStack_48;
  if (2 < (ulonglong)param_2[1]) {
                    /* WARNING: Subroutine does not return */
    FUN_1400451d8("Invalid fill (too long).");
  }
  uVar1 = thunk_FUN_14005c984(*param_2,*param_2 + param_2[1] * 2,*param_1 + 0x10);
  local_1a = 0;
  FUN_14005c92f(uVar1,*param_1 + 0x14);
  *(char *)(*param_1 + 0xe) = (char)param_2[1];
  if (DAT_1401c9640 == (local_18 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_18 ^ (ulonglong)auStack_48);
}

