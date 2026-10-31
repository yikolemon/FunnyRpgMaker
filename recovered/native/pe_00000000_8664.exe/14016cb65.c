/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016cb65 */

void FUN_14016cb65(int param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    if (param_1 == *(int *)((longlong)&DAT_140eb0750 + lVar1)) {
      *(undefined4 *)(param_2 + lVar1) = 2;
      return;
    }
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x28);
  return;
}

