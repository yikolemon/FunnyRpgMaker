/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180006576 */

char * FUN_180006576(char *param_1,longlong param_2)

{
  FUN_1800065b6(param_2 + 8,param_1);
  if (*param_1 != '\0') {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180005ebc("Argument not found.");
}

