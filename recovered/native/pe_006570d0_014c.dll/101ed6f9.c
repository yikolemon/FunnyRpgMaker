/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101ed6f9 */

char * __fastcall FUN_101ed6f9(char *param_1)

{
  if ((((((int)*param_1 - 0x41U < 0x1a) && ((int)param_1[1] - 0x41U < 0x1a)) &&
       ((int)param_1[2] - 0x41U < 0x1a)) &&
      (((int)param_1[3] - 0x41U < 0x1a && ((int)param_1[4] - 0x41U < 0x1a)))) &&
     (((int)param_1[5] - 0x41U < 0x1a && ((param_1[6] == '+' && (param_1[7] != '\0')))))) {
    param_1 = param_1 + 7;
  }
  return param_1;
}

