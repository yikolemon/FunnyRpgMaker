/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1016e8ec */

int __fastcall FUN_1016e8ec(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_2 * param_3 * 4;
  iVar1 = FUN_1017207d();
  if (iVar1 == 0) {
    FUN_10170e07();
  }
  else {
    if (0 < iVar3) {
      iVar2 = 0;
      do {
        *(undefined1 *)(iVar1 + iVar2) = *(undefined1 *)(param_1 + 1 + iVar2 * 2);
        iVar2 = iVar2 + 1;
      } while (iVar3 != iVar2);
    }
    thunk_FUN_10274120(param_1);
  }
  return iVar1;
}

