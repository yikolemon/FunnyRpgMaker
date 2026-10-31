/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1003cb2e */

void __thiscall FUN_1003cb2e(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  DWORD DVar2;
  undefined1 local_50 [21];
  undefined1 local_3b [3];
  undefined4 local_38;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_50;
  local_14 = 0xffffffff;
  local_18 = &LAB_1005a020;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  DVar2 = GetCurrentProcessId();
  iVar1 = 0x1f;
  if ((DVar2 | 1) != 0) {
    for (; (DVar2 | 1) >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  FUN_1003a106(*(int *)(&DAT_102902d4 + iVar1 * 8) +
               (uint)CARRY4(*(uint *)(&DAT_102902d0 + iVar1 * 8),DVar2),param_1 + 4,param_4);
  local_14 = 0;
  local_38 = FUN_1002472e(local_50,DVar2,0x15);
  FUN_1001909c(local_38,local_3b);
  local_14 = 0xffffffff;
  FUN_1003a17a();
  ExceptionList = local_1c;
  return;
}

