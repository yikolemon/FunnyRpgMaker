/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10185d98 */

void __fastcall FUN_10185d98(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 < *(int *)(param_1 + 0x10)) {
    FUN_10185dde(param_2,param_1);
    iVar1 = *(int *)(param_2 + 0x10);
  }
  if (*(int *)(param_3 + 0x10) < iVar1) {
    FUN_10185dde(param_3,param_2);
    if (*(int *)(param_2 + 0x10) < *(int *)(param_1 + 0x10)) {
      FUN_10185dde(param_2,param_1);
    }
  }
  return;
}

