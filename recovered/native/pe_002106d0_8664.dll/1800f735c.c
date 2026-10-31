/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f735c */

void FUN_1800f735c(undefined8 param_1)

{
  code *pcVar1;
  
  FUN_180247400(param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

