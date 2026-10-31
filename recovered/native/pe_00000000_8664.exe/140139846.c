/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140139846 */

void FUN_140139846(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = param_1;
  if (param_1 != 0) {
    do {
      *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + param_2;
      plVar1 = (longlong *)(lVar2 + 0x20);
      lVar2 = *plVar1;
    } while (*plVar1 != param_1);
  }
  return;
}

