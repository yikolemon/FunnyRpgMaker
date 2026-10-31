/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008b780 */

undefined8 FUN_14008b780(bool param_1,char param_2)

{
  longlong in_RAX;
  uint7 extraout_var;
  
  if ((DAT_14013d278 == '\0') || (param_2 == '\0')) {
    FUN_14008e99c(param_1);
    FUN_14008dc60(param_1);
    in_RAX = (ulonglong)extraout_var << 8;
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}

