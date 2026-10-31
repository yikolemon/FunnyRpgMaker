/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140255e50 */

void FUN_140255e50(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = FUN_14044eb20();
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x4c) != 0x7fffffff) {
      return;
    }
  }
  else {
    FUN_14044fbf0(5);
  }
  *(undefined4 *)(param_1 + 0x4c) = 0x7ffffffe;
  FUN_14044fbf0(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

