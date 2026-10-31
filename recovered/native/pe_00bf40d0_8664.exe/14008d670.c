/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008d670 */

void FUN_14008d670(undefined8 param_1)

{
  PVOID pvVar1;
  
  pvVar1 = FUN_14009d690();
  *(undefined8 *)((longlong)pvVar1 + 0x60) = param_1;
  return;
}

