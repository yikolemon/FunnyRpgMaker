/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14002a8c4 */

undefined8 FUN_14002a8c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1401c9640 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  FUN_14001010a(&local_28);
  uVar1 = FUN_14002a936(param_1,param_2);
  thunk_FUN_1400ddcd0(uVar1,0x28);
  if (DAT_1401c9640 == (local_20 ^ (ulonglong)auStack_48)) {
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_20 ^ (ulonglong)auStack_48);
}

