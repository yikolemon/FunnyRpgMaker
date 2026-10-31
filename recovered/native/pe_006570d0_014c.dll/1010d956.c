/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010d956 */

void FUN_1010d956(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_3 == 0) || (((int)(char)*(uint *)(param_1 + 0x124) & param_3) != 0)) {
    *(uint *)(param_1 + 0x124) = *(uint *)(param_1 + 0x124) & 0xfffffff1;
    iVar1 = *(int *)(param_1 + 0x438);
    if (iVar1 != param_2) {
      iVar2 = FUN_1011b528(DAT_1039d74c,param_2);
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) != 0)) {
        do {
          iVar3 = iVar2;
          iVar2 = *(int *)(iVar3 + 0x18);
        } while (*(int *)(iVar3 + 0x18) != 0);
        if (*(int **)(iVar3 + 0x80) == (int *)0x0) {
          param_2 = *(int *)(iVar3 + 0x98);
        }
        else {
          param_2 = **(int **)(iVar3 + 0x80);
        }
      }
      if (iVar1 != param_2) {
        if (*(int *)(param_1 + 0x430) != 0) {
          FUN_1011b729(0);
        }
        *(int *)(param_1 + 0x438) = param_2;
      }
    }
  }
  return;
}

