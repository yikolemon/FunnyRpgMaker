/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f0f14 */

void __fastcall FUN_100f0f14(int *param_1)

{
  int iVar1;
  int *piVar2;
  int local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_c = 0xffffffff;
  local_10 = &LAB_100f5420;
  local_14 = ExceptionList;
  iVar1 = *param_1;
  if (iVar1 != 0) {
    ExceptionList = &local_14;
    piVar2 = (int *)FUN_10018d26(iVar1);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      local_c = 0xffffffff;
      local_1c = iVar1;
      FUN_102283a0(iVar1,0x14);
      ExceptionList = local_14;
      return;
    }
  }
  ExceptionList = local_14;
  return;
}

