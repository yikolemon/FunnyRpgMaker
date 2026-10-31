/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100217b4 */

void __fastcall FUN_100217b4(int *param_1)

{
  if ((*param_1 != 0) && ((char)param_1[1] != '\0')) {
    FUN_1022c200(*param_1);
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1000393b(1);
}

