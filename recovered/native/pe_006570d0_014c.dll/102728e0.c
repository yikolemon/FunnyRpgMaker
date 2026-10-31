/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102728e0 */

void FUN_102728e0(void)

{
  int iVar1;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1028a550;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_10272260();
  if (*(int *)(iVar1 + 0x1c) == 0) {
    local_8 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_102833d0();
  }
                    /* WARNING: Subroutine does not return */
  _abort();
}

