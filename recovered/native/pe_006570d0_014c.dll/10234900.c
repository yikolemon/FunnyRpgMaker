/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10234900 */

void FUN_10234900(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)();
  return;
}

