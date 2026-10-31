/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f2f34 */

int * __fastcall FUN_100f2f34(int *param_1)

{
  if ((*param_1 != 0) && (((char)param_1[1] != '\x01' || (*(char *)(*param_1 + 0x6c) != '\x01')))) {
    if ((char)param_1[2] != '\x01') {
      *(undefined1 *)(param_1 + 2) = 1;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_100f2ce8(2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_100f2ce8(4);
}

