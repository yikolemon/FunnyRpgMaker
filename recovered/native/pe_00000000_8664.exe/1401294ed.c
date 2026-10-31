/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401294ed */

void FUN_1401294ed(longlong param_1,undefined4 param_2)

{
  code *pcVar1;
  
  *(undefined4 *)(param_1 + 0x114) = param_2;
  FUN_1401906c0(param_1,1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

