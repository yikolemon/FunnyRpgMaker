/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101df416 */

void __fastcall FUN_101df416(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1;
  if (param_1 != 0) {
    do {
      *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + param_2;
      piVar1 = (int *)(iVar2 + 0x20);
      iVar2 = *piVar1;
    } while (*piVar1 != param_1);
  }
  return;
}

