/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140138409 */

void FUN_140138409(undefined8 param_1,longlong param_2,longlong param_3)

{
  FUN_1401398ac(param_1,(*(int *)(param_2 + 0x10) - *(int *)(param_3 + 0x10)) / 7 +
                        *(int *)(param_2 + 0x10) + 0x10);
  return;
}

