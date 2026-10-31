/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10223ec4 */

undefined4 __fastcall FUN_10223ec4(int param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  *param_2 = 0;
  if (param_1 == 0) {
    uVar5 = 0x23;
  }
  else {
    uVar5 = 6;
    if ((*(byte *)(param_1 + 9) & 1) != 0) {
      iVar3 = *(int *)(param_1 + 0x80);
      iVar4 = *(int *)(iVar3 + 0x20);
      uVar5 = 0;
      iVar2 = 0;
      if ((iVar4 != -2) && (iVar2 = iVar4, iVar4 == 0)) {
        pcVar1 = *(code **)(**(int **)(param_1 + 0x60) + 0x20);
        if (pcVar1 == (code *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = (*pcVar1)(*(int **)(param_1 + 0x60),"multi-masters");
          iVar3 = *(int *)(param_1 + 0x80);
        }
        iVar4 = -2;
        if (iVar2 != 0) {
          iVar4 = iVar2;
        }
        *(int *)(iVar3 + 0x20) = iVar4;
      }
      *param_2 = iVar2;
      if (iVar2 == 0) {
        uVar5 = 6;
      }
    }
  }
  return uVar5;
}

