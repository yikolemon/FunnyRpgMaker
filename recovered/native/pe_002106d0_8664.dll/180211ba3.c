/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180211ba3 */

int FUN_180211ba3(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int *local_50;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_180402640 ^ (ulonglong)auStack_78;
  local_3c = 0;
  uVar2 = param_3 - 7;
  if (uVar2 == 0) {
    local_3c = 0;
  }
  else {
    local_58 = *(undefined8 *)(param_1 + 0x60);
    local_50 = &local_3c;
    lVar1 = FUN_1801cc8d6(*(undefined8 *)(param_1 + 0x80),1,*(int *)(param_1 + 0x68),
                          param_3 + *(int *)(param_1 + 0x68) + -6);
    *(longlong *)(param_1 + 0x60) = lVar1;
    if (local_3c == 0) {
      lVar1 = lVar1 + (ulonglong)*(uint *)(param_1 + 0x68);
      FUN_1802a82f0(lVar1,param_2 + 7,(ulonglong)uVar2);
      *(undefined1 *)((ulonglong)uVar2 + lVar1) = 0;
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + param_3 + -6;
    }
  }
  if (DAT_180402640 == (local_38 ^ (ulonglong)auStack_78)) {
    return local_3c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_38 ^ (ulonglong)auStack_78);
}

