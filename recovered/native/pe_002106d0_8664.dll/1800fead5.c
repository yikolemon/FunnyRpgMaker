/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800fead5 */

void FUN_1800fead5(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  ulonglong *puVar3;
  int iVar4;
  undefined8 local_res20;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_68;
  local_res20 = param_4;
  local_30 = &local_res20;
  puVar3 = (ulonglong *)FUN_1800434e2();
  local_48 = 0;
  local_40 = &local_res20;
  iVar1 = FUN_180272944(*puVar3 | 1,param_1,param_2,param_3);
  iVar2 = -1;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  if (param_1 != 0) {
    iVar4 = (int)param_2 + -1;
    if ((int)param_2 <= iVar2) {
      iVar2 = iVar4;
    }
    if (iVar1 < 0) {
      iVar2 = iVar4;
    }
    *(undefined1 *)(param_1 + iVar2) = 0;
  }
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_68);
}

