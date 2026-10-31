/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140dce370 */

void FUN_140dce370(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

