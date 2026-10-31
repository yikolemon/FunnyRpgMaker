/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e6290 */

void FUN_1407e6290(ulonglong param_1)

{
  if (*(int *)(param_1 + 0x28) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14075219b();
  }
  *(undefined4 *)((param_1 & 0xffffffff) + 0x28) = 0;
  *(undefined1 *)((param_1 & 0xffffffff) + 0x4e) = 0;
  return;
}

