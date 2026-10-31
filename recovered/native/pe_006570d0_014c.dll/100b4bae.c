/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b4bae */

void Unwind_100b4bae(void)

{
  char cVar1;
  int unaff_EBP;
  
  cVar1 = *(char *)(unaff_EBP + -0x1cb);
  *(char *)(unaff_EBP + -0x1c9) = cVar1;
  if (cVar1 == '\x01') {
    FUN_10060b3c();
  }
  *(char *)(unaff_EBP + -0x1c9) = cVar1;
  return;
}

