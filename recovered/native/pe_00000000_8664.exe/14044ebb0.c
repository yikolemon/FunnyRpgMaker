/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14044ebb0 */

undefined8 FUN_14044ebb0(longlong param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x4c);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
    (*(code *)s_InitializeCriticalSectionEx_14059e14e._2_8_)(param_1 + 0x10);
  }
  return 0;
}

