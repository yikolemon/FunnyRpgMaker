/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400653be */

char * FUN_1400653be(char *param_1,longlong param_2)

{
  FUN_1400653fe(param_2 + 8,param_1);
  if (*param_1 != '\0') {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140049b0a("Argument not found.");
}

