/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140009824 */

void Unwind_140009824(undefined8 param_1,longlong param_2)

{
  longlong unaff_RBP;
  char in_CF;
  
  *(char *)(unaff_RBP + 0x41) = *(char *)(unaff_RBP + 0x41) + (char)param_2 + in_CF;
  FUN_14000109c(param_2 + 0xd0);
  return;
}

