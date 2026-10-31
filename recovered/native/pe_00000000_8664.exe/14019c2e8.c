/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14019c2e8 */

void FUN_14019c2e8(uint param_1)

{
  code *pcVar1;
  
  common_end_thread(param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

