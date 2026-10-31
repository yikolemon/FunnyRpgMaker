/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102859f0 */

void FUN_102859f0(char *param_1,char *param_2,uint param_3)

{
  if (DAT_103a5004 != 0) {
    FUN_10285a50(param_1,param_2,param_3,0);
    return;
  }
  if (((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) && (param_3 < 0x80000000)) {
    ___ascii_strnicmp(param_1,param_2,param_3);
    return;
  }
  FUN_10285bb0();
  return;
}

