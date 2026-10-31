/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140146511 */

void FUN_140146511(longlong *param_1,undefined4 param_2)

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
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  lVar1 = *param_1;
  lVar2 = param_1[5];
  local_4a = 0;
  local_4c = 0;
  local_4e = 0;
  local_50 = 0;
  uVar3 = FUN_14012db43(lVar2);
  FUN_140145540(lVar1,param_2,&local_4a,&local_4e);
  local_58 = &local_50;
  FUN_140145568(lVar1,param_2,*(undefined4 *)((longlong)param_1 + 0x44),&local_4c);
  iVar4 = FUN_14012d612(lVar2,uVar3);
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
  if (DAT_140f17b40 == (local_48 ^ (ulonglong)auStack_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_48 ^ (ulonglong)auStack_78);
}

