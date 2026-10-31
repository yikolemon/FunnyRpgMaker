/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140364d30 */

char * FUN_140364d30(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 8) != 0) {
    return *(char **)(*(longlong *)(param_2 + 8) + 8);
  }
  if ((longlong)*(int *)(param_2 + 0x28) != -1) {
    return (char *)((longlong)*(int *)(param_2 + 0x28) + *(longlong *)(param_1 + 0xa8));
  }
  return "UT THIS DEMO:";
}

