/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10142d8c */

void __fastcall FUN_10142d8c(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_10151d91();
  iVar2 = param_2[1];
  iVar3 = param_2[2];
  if (iVar2 != iVar3) {
    if (iVar1 < iVar2) {
      param_2[1] = iVar1;
      iVar2 = iVar1;
    }
    if (iVar1 < iVar3) {
      param_2[2] = iVar1;
      iVar3 = iVar1;
    }
    if (iVar2 == iVar3) {
      *param_2 = iVar2;
    }
  }
  if (iVar1 < *param_2) {
    *param_2 = iVar1;
  }
  return;
}

