/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140045268 */

void FUN_140045268(longlong *param_1)

{
  code *pcVar1;
  
  if ((*param_1 != 0) && ((char)param_1[1] != '\0')) {
    FUN_14018a340();
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
  FUN_140003cbf(1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

