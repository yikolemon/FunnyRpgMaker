/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140093898 */

void FUN_140093898(uint param_1)

{
  code *pcVar1;
  
  common_end_thread(param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

