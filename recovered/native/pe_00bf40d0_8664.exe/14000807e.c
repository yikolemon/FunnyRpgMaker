/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000807e */

void FUN_14000807e(void)

{
  code *pcVar1;
  
  FUN_140086ae0(0x14011aa42);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

