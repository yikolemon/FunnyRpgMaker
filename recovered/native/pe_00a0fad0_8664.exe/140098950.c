/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140098950 */

undefined8
FUN_140098950(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_60;
  undefined1 *local_58;
  undefined1 local_50 [48];
  ulonglong local_20;
  
  local_20 = DAT_1401c9640 ^ (ulonglong)auStack_98;
  FUN_1400989d5(local_50,param_3,param_4);
  local_60 = 2;
  local_78 = *param_2;
  uStack_74 = param_2[1];
  uStack_70 = param_2[2];
  uStack_6c = param_2[3];
  local_58 = local_50;
  FUN_140044d79(param_1);
  if (DAT_1401c9640 == (local_20 ^ (ulonglong)auStack_98)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_20 ^ (ulonglong)auStack_98);
}

