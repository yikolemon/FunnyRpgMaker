/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021d479 */

void FUN_18021d479(int param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    if (param_1 == *(int *)((longlong)&DAT_18034c3e0 + lVar1)) {
      *(undefined4 *)(param_2 + lVar1) = 2;
      return;
    }
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x28);
  return;
}

