/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001cef1 */

void FUN_14001cef1(longlong *param_1,undefined4 param_2)

{
  code *pcVar1;
  
  *(undefined4 *)((longlong)param_1 + 0x114) = param_2;
  FUN_14008dcb0(param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

