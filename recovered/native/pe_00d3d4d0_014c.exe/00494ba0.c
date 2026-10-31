/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00494ba0 */

void FUN_00494ba0(void)

{
  PVOID pvVar1;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_004a7460;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar1 = FUN_00494580();
  if (*(int *)((int)pvVar1 + 0x1c) == 0) {
    local_8 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_004a3590();
  }
                    /* WARNING: Subroutine does not return */
  FUN_004903c8();
}

