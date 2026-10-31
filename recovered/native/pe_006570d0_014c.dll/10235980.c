/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10235980 */

void __fastcall FUN_10235980(int param_1)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  void *local_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_102891b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (((*(int *)(param_1 + 0xc) == -0x1f928c9d) && (*(int *)(param_1 + 0x1c) == 3)) &&
     ((iVar1 = *(int *)(param_1 + 0x20), iVar1 == 0x19930520 ||
      (((iVar1 == 0x19930521 || (iVar1 == 0x19930522)) || (iVar1 == 0x1994000)))))) {
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      _abort();
    }
    piVar2 = *(int **)(param_1 + 0x24);
    if (piVar2 != (int *)0x0) {
      if (*(int *)(iVar1 + 4) != 0) {
        FUN_102357b0(piVar2,*(int *)(iVar1 + 4));
        ExceptionList = local_10;
        return;
      }
      if (((**(byte **)(*(int *)(iVar1 + 0xc) + 4) & 8) != 0) &&
         (piVar2 = (int *)*piVar2, piVar2 != (int *)0x0)) {
        pcVar3 = *(code **)(*piVar2 + 8);
        (*(code *)PTR_guard_check_icall_1035d810)(piVar2,DAT_10388d00 ^ (uint)&stack0xfffffffc);
        (*pcVar3)();
      }
    }
  }
  ExceptionList = local_10;
  return;
}

