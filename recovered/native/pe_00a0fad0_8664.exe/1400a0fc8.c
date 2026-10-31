/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400a0fc8 */

undefined8
FUN_1400a0fc8(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined1 *local_50;
  undefined1 local_48 [40];
  ulonglong local_20;
  
  local_20 = DAT_1401c9640 ^ (ulonglong)auStack_88;
  FUN_1400a10e3(local_48,param_3,param_4);
  local_58 = 2;
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_50 = local_48;
  FUN_140044d79(param_1);
  if (DAT_1401c9640 == (local_20 ^ (ulonglong)auStack_88)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_20 ^ (ulonglong)auStack_88);
}

