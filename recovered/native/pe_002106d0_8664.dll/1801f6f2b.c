/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f6f2b */

void FUN_1801f6f2b(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(*(longlong *)(*param_1 + 0xd0) + 0x50);
  if ((plVar1 != (longlong *)0x0) && (*(code **)(*plVar1 + 0x10) != (code *)0x0)) {
    local_28._8_4_ = (int)((ulonglong)param_1[9] >> 0x20);
    local_28._0_8_ = param_1[9] & 0xffffffff;
    local_28._12_4_ = 0;
    iVar2 = (**(code **)(*plVar1 + 0x10))(plVar1[1],0,0);
    if (iVar2 == 0) {
      *(int *)(param_1 + 9) = (int)(short)local_28._0_2_;
      *(uint *)((longlong)param_1 + 0x4c) = (uint)(ushort)local_28._8_2_;
      param_1[0x1e] = 0;
      if (*(char *)((longlong)param_1 + 0x54) == '\0') {
        *(undefined1 *)((longlong)param_1 + 0x54) = 1;
        *(uint *)(param_1 + 10) = (uint)(ushort)local_28._8_2_;
      }
    }
  }
  if (DAT_180402640 == (local_10 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_10 ^ (ulonglong)auStack_48);
}

