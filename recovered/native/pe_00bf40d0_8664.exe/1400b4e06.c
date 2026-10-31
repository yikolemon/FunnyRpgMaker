/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400b4e06 */

void FUN_1400b4e06(void)

{
  PVOID pvVar1;
  
  pvVar1 = FUN_14009d690();
  if (0 < *(int *)((longlong)pvVar1 + 0x30)) {
    pvVar1 = FUN_14009d690();
    *(int *)((longlong)pvVar1 + 0x30) = *(int *)((longlong)pvVar1 + 0x30) + -1;
  }
  return;
}

