/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100450f0 */

char * FUN_100450f0(char *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_10045168(param_1,param_3);
  if (*param_1 != '\0') {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10006198("Argument not found.");
}

