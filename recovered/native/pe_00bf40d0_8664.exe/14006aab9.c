/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006aab9 */

void FUN_14006aab9(int param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    if (param_1 == *(int *)((longlong)&DAT_140109510 + lVar1)) {
      *(undefined4 *)(param_2 + lVar1) = 2;
      return;
    }
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x28);
  return;
}

