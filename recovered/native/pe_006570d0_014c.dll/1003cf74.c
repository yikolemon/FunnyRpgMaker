/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1003cf74 */

void __thiscall FUN_1003cf74(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined1 local_54 [20];
  undefined1 local_40 [21];
  undefined1 local_2b [3];
  int local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_54;
  local_14 = 0xffffffff;
  local_18 = &LAB_1005a060;
  local_1c = ExceptionList;
  uVar1 = *(uint *)(param_2 + 0x28);
  ExceptionList = &local_1c;
  if ((int)uVar1 < 1) {
    FUN_1003a106(0,param_1 + 4,param_4);
    local_14 = 0xffffffff;
    FUN_1003a17a();
  }
  else {
    iVar2 = 0x1f;
    if ((uVar1 | 1) != 0) {
      for (; (uVar1 | 1) >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    local_20 = local_54;
    FUN_1003a106(*(int *)(&DAT_102902d4 + iVar2 * 8) +
                 (uint)CARRY4(uVar1,*(uint *)(&DAT_102902d0 + iVar2 * 8)),param_1 + 4,param_4);
    local_14 = 1;
    local_24 = *(int *)(param_2 + 0x28);
    iVar2 = -local_24;
    if (-local_24 < 0) {
      iVar2 = local_24;
    }
    iVar2 = FUN_1002472e(local_40,iVar2,0x15);
    local_28 = iVar2;
    if (local_24 < 0) {
      local_28 = iVar2 + -1;
      *(undefined1 *)(iVar2 + -1) = 0x2d;
    }
    FUN_1001909c(local_28,local_2b);
    local_14 = 0xffffffff;
    FUN_1003a17a();
  }
  ExceptionList = local_1c;
  return;
}

