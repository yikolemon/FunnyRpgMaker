/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18027d9d8 */

void FUN_18027d9d8(uint param_1)

{
  code *pcVar1;
  
  common_end_thread(param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

