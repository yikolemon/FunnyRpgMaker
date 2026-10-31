/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800454dc */

char * FUN_1800454dc(char *param_1,longlong param_2)

{
  FUN_18004551c(param_2 + 8,param_1);
  if (*param_1 != '\0') {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180005ebc("Argument not found.");
}

