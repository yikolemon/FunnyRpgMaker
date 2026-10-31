/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140058be6 */

void FUN_140058be6(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = FUN_1400dd8e0();
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x4c) != 0x7fffffff) {
      return;
    }
  }
  else {
    FUN_1400dd9a0(5);
  }
  *(undefined4 *)(param_1 + 0x4c) = 0x7ffffffe;
  FUN_1400dd9a0(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

