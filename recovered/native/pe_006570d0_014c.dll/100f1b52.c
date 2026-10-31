/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f1b52 */

void __fastcall FUN_100f1b52(int *param_1)

{
  if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1000393b(1);
  }
  if ((char)param_1[1] != '\x01') {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1000393b(0x24);
}

