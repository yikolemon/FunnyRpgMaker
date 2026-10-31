/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012b539 */

void FUN_18012b539(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_58;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  local_28 = &local_res10;
  uVar1 = FUN_1802723a4(1);
  puVar2 = (undefined8 *)FUN_1800434e2();
  local_38 = &local_res10;
  FUN_180272820(*puVar2,uVar1,param_1,0);
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_58);
}

