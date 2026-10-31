/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14088c7d0 */

void FUN_14088c7d0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(2);
  return;
}

