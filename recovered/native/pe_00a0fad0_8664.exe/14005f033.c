/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14005f033 */

undefined8
FUN_14005f033(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 param_5)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1401c9640 ^ (ulonglong)auStack_58;
  local_28 = *param_4;
  uStack_24 = param_4[1];
  uStack_20 = param_4[2];
  uStack_1c = param_4[3];
  local_18 = param_4[4];
  local_38 = param_5;
  FUN_14005f0a1(param_1,param_2,param_3,&local_28);
  if (DAT_1401c9640 == (local_10 ^ (ulonglong)auStack_58)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_10 ^ (ulonglong)auStack_58);
}

