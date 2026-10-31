/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14005b5d6 */

char * FUN_14005b5d6(char *param_1,longlong param_2)

{
  FUN_14005b616(param_2 + 8,param_1);
  if (*param_1 != '\0') {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400451d8("Argument not found.");
}

