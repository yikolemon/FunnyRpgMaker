/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008dc10 */

undefined4 FUN_14008dc10(void)

{
  PVOID pvVar1;
  
  pvVar1 = FUN_14009d770();
  if (pvVar1 != (PVOID)0x0) {
    return *(undefined4 *)((longlong)pvVar1 + 0x30);
  }
  return 0;
}

