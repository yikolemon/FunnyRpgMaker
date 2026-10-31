/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10223f44 */

void __fastcall FUN_10223f44(int param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  *param_2 = 0;
  if ((param_1 != 0) && ((*(byte *)(param_1 + 9) & 1) != 0)) {
    iVar3 = *(int *)(param_1 + 0x80);
    iVar2 = *(int *)(iVar3 + 0x24);
    if (iVar2 == -2) {
      iVar2 = 0;
    }
    else if (iVar2 == 0) {
      pcVar1 = *(code **)(**(int **)(param_1 + 0x60) + 0x20);
      if (pcVar1 == (code *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*pcVar1)(*(int **)(param_1 + 0x60),"metrics-variations");
        iVar3 = *(int *)(param_1 + 0x80);
      }
      iVar4 = -2;
      if (iVar2 != 0) {
        iVar4 = iVar2;
      }
      *(int *)(iVar3 + 0x24) = iVar4;
    }
    *param_2 = iVar2;
  }
  return;
}

