/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000baf8 */

char * FUN_14000baf8(char *param_1,longlong param_2,ulonglong param_3)

{
  FUN_14000bb38((ulonglong *)(param_2 + 8),param_1,param_3);
  if (*param_1 != '\0') {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14000b455(0x14011bfec);
}

