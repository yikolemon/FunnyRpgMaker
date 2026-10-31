/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076d4c9 */

undefined8 FUN_14076d4c9(undefined4 param_1)

{
  char in_CL;
  char in_CF;
  char *unaff_retaddr;
  undefined4 uStackX_c;
  
  DAT_15069d4d9 = DAT_15069d4d9 + in_CL + in_CF;
  *unaff_retaddr = *unaff_retaddr + -0x12;
  *unaff_retaddr = *unaff_retaddr + (char)unaff_retaddr;
  return CONCAT44(uStackX_c,param_1);
}

