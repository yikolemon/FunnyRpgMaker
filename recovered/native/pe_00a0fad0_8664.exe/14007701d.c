/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14007701d */

undefined8 FUN_14007701d(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_40;
  undefined1 *local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_1401c9640 ^ (ulonglong)auStack_78;
  thunk_FUN_140079c9d(local_30,param_3);
  local_40 = 1;
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_38 = local_30;
  FUN_14005a9d3(param_1);
  if (DAT_1401c9640 == (local_20 ^ (ulonglong)auStack_78)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_20 ^ (ulonglong)auStack_78);
}

