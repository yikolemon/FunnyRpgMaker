/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016eeec */

void FUN_14016eeec(undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [40];
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  local_30 = FUN_14012e438(*param_3);
  local_30 = local_30 >> 0x10;
  local_2c = FUN_14012e438(param_3[1]);
  local_2c = local_2c >> 0x10;
  FUN_14016f443(param_1,param_2,1,&local_30);
  if (DAT_140f17b40 == (local_28 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_28 ^ (ulonglong)auStack_58);
}

