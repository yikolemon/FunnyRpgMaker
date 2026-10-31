/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140086da0 */

undefined4 thunk_FUN_14008dc10(void)

{
  PVOID pvVar1;
  
  pvVar1 = FUN_14009d770();
  if (pvVar1 != (PVOID)0x0) {
    return *(undefined4 *)((longlong)pvVar1 + 0x30);
  }
  return 0;
}

