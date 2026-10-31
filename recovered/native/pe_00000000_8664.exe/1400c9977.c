/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c9977 */

void FUN_1400c9977(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined1 *local_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  local_10 = param_9;
  local_20 = (undefined1 *)&param_8;
  local_28 = param_7;
  local_30 = param_6;
  local_38 = param_5;
  local_48 = param_3;
  local_40 = param_4;
  local_18 = param_2;
  FUN_1400c8f81(1,param_1,&LAB_1400c98ce,&local_18);
  if (DAT_140f17b40 == (local_8 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_8 ^ (ulonglong)auStack_68);
}

