/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10151d3f */

void __fastcall FUN_10151d3f(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_10142d8c();
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  if (iVar1 - iVar2 != 0) {
    if (iVar1 < iVar2) {
      FUN_10151d95(iVar1,iVar2 - iVar1);
      uVar3 = param_2[1];
      param_2[2] = uVar3;
    }
    else {
      FUN_10151d95(iVar2,iVar1 - iVar2);
      uVar3 = param_2[2];
      param_2[1] = uVar3;
    }
    *param_2 = uVar3;
    *(undefined1 *)((int)param_2 + 0x16) = 0;
  }
  return;
}

