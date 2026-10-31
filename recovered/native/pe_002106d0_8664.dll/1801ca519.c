/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ca519 */

void FUN_1801ca519(longlong param_1,undefined4 param_2)

{
  code *pcVar1;
  
  *(undefined4 *)(param_1 + 0x114) = param_2;
  FUN_18026ec50(param_1,1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

