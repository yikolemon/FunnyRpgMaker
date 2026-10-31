/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180021c7a */

void FUN_180021c7a(longlong *param_1)

{
  code *pcVar1;
  
  if ((*param_1 != 0) && ((char)param_1[1] != '\0')) {
    FUN_18023d6e0();
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
  FUN_1800037a9(1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

