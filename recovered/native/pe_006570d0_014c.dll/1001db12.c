/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001db12 */

void __thiscall FUN_1001db12(int param_1,int param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x48) == param_2) {
    FUN_1001d8ea();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1001d9e4(param_3);
}

