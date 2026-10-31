/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180004933 */

undefined8 FUN_180004933(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  uVar1 = FUN_18023a5b0();
  FUN_1800049b4(param_1,uVar1,&local_28);
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_48)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_48);
}

