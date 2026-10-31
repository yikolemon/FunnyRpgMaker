/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400ddcf0 */

void FUN_1400ddcf0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(2);
  return;
}

