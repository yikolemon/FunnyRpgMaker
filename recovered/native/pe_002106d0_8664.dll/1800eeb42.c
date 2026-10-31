/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800eeb42 */

int FUN_1800eeb42(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_58;
  local_res18 = param_3;
  local_res20 = param_4;
  local_28 = &local_res18;
  puVar3 = (undefined8 *)FUN_1800434e2();
  local_38 = 0;
  local_30 = &local_res18;
  iVar1 = FUN_180272b98(*puVar3,param_1,0x32,param_2);
  iVar2 = -1;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_58)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_58);
}

