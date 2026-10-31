/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00436b86 */

void __fastcall FUN_00436b86(int param_1,int param_2)

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

