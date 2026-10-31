/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10234d00 */

void FUN_10234d00(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)();
  return;
}

