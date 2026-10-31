/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140457990 */

void FUN_140457990(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(2);
  return;
}

