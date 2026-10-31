/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801357c7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801357c7(undefined4 *param_1)

{
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_68;
  local_40 = &local_18;
  local_18 = _DAT_1802de5c0;
  uStack_10 = _UNK_1802de5c8;
  local_48 = &local_28;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = *param_1;
  uStack_34 = param_1[1];
  uStack_30 = param_1[2];
  uStack_2c = param_1[3];
  FUN_1801354ec();
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_68);
}

