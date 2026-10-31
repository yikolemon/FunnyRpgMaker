/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140099504 */

void FUN_140099504(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  if (param_2 < 0x127350b8812736) {
    lVar1 = FUN_140006280(param_2 * 0xde0);
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = lVar1 + param_2 * 0xde0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400062c7();
}

