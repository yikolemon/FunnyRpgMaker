/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10207f2a */

void __fastcall FUN_10207f2a(int param_1,int param_2)

{
  if (*(char *)(*(int *)(param_1 + 0x1c) + 0x30) != '\0') {
    return;
  }
  **(int **)(*(int *)(param_1 + 0x1c) + 0x220) = param_2 + 0x8000 >> 0x10;
  return;
}

