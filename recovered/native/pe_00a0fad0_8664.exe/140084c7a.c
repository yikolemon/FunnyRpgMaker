/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140084c7a */

undefined8 FUN_140084c7a(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_1401c9640 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  uVar1 = FUN_1400dcf10();
  FUN_140084ce3(param_1,uVar1,&local_38,param_3);
  if (DAT_1401c9640 == (local_20 ^ (ulonglong)auStack_58)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_20 ^ (ulonglong)auStack_58);
}

