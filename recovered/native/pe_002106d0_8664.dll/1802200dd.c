/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802200dd */

int FUN_1802200dd(longlong param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_58;
  local_24 = 0;
  iVar1 = 0;
  if (*(uint *)(param_1 + 4) < param_2) {
    uVar3 = param_2 + 7 & 0xfffffff8;
    local_38 = *(undefined8 *)(param_1 + 8);
    local_30 = &local_24;
    uVar2 = FUN_1801c9c3f(param_3,0x18,*(uint *)(param_1 + 4),uVar3);
    *(undefined8 *)(param_1 + 8) = uVar2;
    iVar1 = local_24;
    if (local_24 == 0) {
      *(uint *)(param_1 + 4) = uVar3;
      iVar1 = 0;
    }
  }
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_58)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_58);
}

