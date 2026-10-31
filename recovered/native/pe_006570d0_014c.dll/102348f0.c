/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102348f0 */

void FUN_102348f0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)();
  return;
}

