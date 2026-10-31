/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801125be */

void FUN_1801125be(longlong param_1,int param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_3 == 0) || (((int)(char)*(uint *)(param_1 + 0x134) & param_3) != 0)) {
    *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) & 0xfffffff1;
    iVar1 = *(int *)(param_1 + 0x4d0);
    if (iVar1 != param_2) {
      lVar2 = FUN_180120868(DAT_180419160,param_2);
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x20) != 0)) {
        do {
          lVar3 = lVar2;
          lVar2 = *(longlong *)(lVar3 + 0x18);
        } while (*(longlong *)(lVar3 + 0x18) != 0);
        if (*(int **)(lVar3 + 0xa0) == (int *)0x0) {
          param_2 = *(int *)(lVar3 + 0xc0);
        }
        else {
          param_2 = **(int **)(lVar3 + 0xa0);
        }
      }
      if (iVar1 != param_2) {
        if (*(longlong *)(param_1 + 0x4c0) != 0) {
          FUN_180120b15(*(longlong *)(param_1 + 0x4c0),param_1,0);
        }
        *(int *)(param_1 + 0x4d0) = param_2;
      }
    }
  }
  return;
}

