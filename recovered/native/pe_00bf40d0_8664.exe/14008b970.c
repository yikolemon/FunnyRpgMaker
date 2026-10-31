/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008b970 */

void FUN_14008b970(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(2);
  return;
}

