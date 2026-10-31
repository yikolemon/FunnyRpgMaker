/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140754ae2 */

void FUN_140754ae2(void)

{
  code *pcVar1;
  undefined4 unaff_retaddr;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)(unaff_retaddr);
  return;
}

