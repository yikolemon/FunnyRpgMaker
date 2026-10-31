/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e7cb6 */

void Unwind_100e7cb6(void)

{
  char cVar1;
  int unaff_EBP;
  
  cVar1 = *(char *)(unaff_EBP + -0x12);
  *(char *)(unaff_EBP + -0x14) = cVar1;
  if (cVar1 == '\x01') {
    FUN_10060b3c();
  }
  *(char *)(unaff_EBP + -0x14) = cVar1;
  return;
}

