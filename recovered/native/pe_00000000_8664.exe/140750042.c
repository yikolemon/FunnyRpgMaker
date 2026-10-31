/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140750042 */

/* WARNING: Control flow encountered bad instruction data */

void Unwind_140750042(void)

{
  char in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RBX;
  
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(char *)(unaff_RBX + 0x7208cc7d) = *(char *)(unaff_RBX + 0x7208cc7d) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

