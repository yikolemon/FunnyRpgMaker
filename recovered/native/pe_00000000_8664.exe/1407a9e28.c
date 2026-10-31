/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407a9e28 */

void FUN_1407a9e28(ulonglong param_1)

{
  int *piVar1;
  int unaff_EBX;
  
  FUN_1408b31a0();
  *(undefined2 *)((param_1 & 0xffffffff) + 0x57) = 0x101;
  piVar1 = (int *)((param_1 & 0xffffffff) + 0x10);
  *piVar1 = *piVar1 - unaff_EBX;
  return;
}

