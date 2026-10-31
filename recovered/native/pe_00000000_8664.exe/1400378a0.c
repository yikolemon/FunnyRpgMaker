/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400378a0 */

void FUN_1400378a0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14018a2b0();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1401896d0(5);
  }
  if (*(int *)(param_1 + 0x4c) != 0x7fffffff) {
    return;
  }
  *(undefined4 *)(param_1 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_1401896d0(6);
}

