/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14002017d */

undefined8 FUN_14002017d(undefined8 param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined1 *local_30;
  undefined8 local_28;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_1401c9640 ^ (ulonglong)auStack_58;
  local_38 = param_2[2];
  local_11 = param_3;
  if (local_38 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_14000626f();
  }
  puVar1 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar1 = (undefined8 *)*param_2;
  }
  local_30 = &local_11;
  local_28 = 1;
  FUN_1400091a0(param_1,param_2,param_2,puVar1);
  if (DAT_1401c9640 == (local_10 ^ (ulonglong)auStack_58)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_10 ^ (ulonglong)auStack_58);
}

