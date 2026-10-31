/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f6e25 */

void FUN_1801f6e25(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_78 [32];
  ushort *local_58;
  ushort local_50;
  ushort local_4e;
  short local_4c;
  short local_4a;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_78;
  lVar1 = *param_1;
  lVar2 = param_1[5];
  local_4a = 0;
  local_4c = 0;
  local_4e = 0;
  local_50 = 0;
  uVar3 = FUN_1801ceb6f(lVar2);
  FUN_1801f5e54(lVar1,param_2,&local_4a,&local_4e);
  local_58 = &local_50;
  FUN_1801f5e7c(lVar1,param_2,*(undefined4 *)((longlong)param_1 + 0x44),&local_4c);
  iVar4 = FUN_1801ce63e(lVar2,uVar3);
  if (iVar4 == 0) {
    *(int *)(param_1 + 9) = (int)local_4a;
    *(uint *)((longlong)param_1 + 0x4c) = (uint)local_4e;
    *(int *)(param_1 + 0x1e) = (int)local_4c;
    *(uint *)((longlong)param_1 + 0xf4) = (uint)local_50;
    if ((*(longlong *)(*(longlong *)(lVar1 + 0xd0) + 0x50) == 0) &&
       (*(char *)((longlong)param_1 + 0x54) == '\0')) {
      *(undefined1 *)((longlong)param_1 + 0x54) = 1;
      *(uint *)(param_1 + 10) = (uint)local_4e;
    }
  }
  if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_78);
}

