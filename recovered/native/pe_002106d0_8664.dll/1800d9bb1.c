/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d9bb1 */

int FUN_1800d9bb1(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_58;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  local_20 = &local_res10;
  puVar3 = (ulonglong *)FUN_1800434e2();
  local_38 = 0;
  local_30 = &local_res10;
  iVar1 = FUN_180272944(*puVar3 | 2,0,0,param_1);
  iVar2 = -1;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_58)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_58);
}

