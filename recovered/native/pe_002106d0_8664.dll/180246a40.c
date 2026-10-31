/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180246a40 */

void FUN_180246a40(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(param_1);
  return;
}

