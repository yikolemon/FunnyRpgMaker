/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f0cde */

void __fastcall FUN_100f0cde(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  int local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_c = 0xffffffff;
  local_10 = &LAB_100f53f0;
  local_14 = ExceptionList;
  iVar2 = *param_1;
  if (iVar2 != 0) {
    ExceptionList = &local_14;
    puVar3 = (uint *)FUN_10018d26(iVar2 + 4);
    LOCK();
    uVar1 = *puVar3;
    *puVar3 = *puVar3 - 2;
    UNLOCK();
    if ((uVar1 & 0xfffffffe) == 2) {
      piVar4 = (int *)FUN_10018d26(iVar2);
      LOCK();
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        local_c = 0xffffffff;
        local_1c = iVar2;
        FUN_102283a0(iVar2,0x14);
        ExceptionList = local_14;
        return;
      }
    }
  }
  ExceptionList = local_14;
  return;
}

