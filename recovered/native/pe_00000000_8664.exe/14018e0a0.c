/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14018e0a0 */

void FUN_14018e0a0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(8);
  return;
}

