/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008b960 */

void FUN_14008b960(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(8);
  return;
}

