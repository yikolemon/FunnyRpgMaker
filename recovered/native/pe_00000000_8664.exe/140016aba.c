/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140016aba */

void FUN_140016aba(void)

{
  code *pcVar1;
  
  FUN_1401898c0("invalid string position");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

