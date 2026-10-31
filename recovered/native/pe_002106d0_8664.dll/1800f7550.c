/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f7550 */

longlong * FUN_1800f7550(longlong *param_1)

{
  if ((*param_1 != 0) && (((char)param_1[1] != '\x01' || (*(char *)(*param_1 + 0xb8) != '\x01')))) {
    if ((char)param_1[2] != '\x01') {
      *(undefined1 *)(param_1 + 2) = 1;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1800f7329(2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800f7329(4);
}

