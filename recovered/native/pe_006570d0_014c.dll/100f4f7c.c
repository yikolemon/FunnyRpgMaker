/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f4f7c */

void __fastcall FUN_100f4f7c(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_100dcc9e("isDockspaceSet",param_1);
  *param_1 = uVar1;
  uVar1 = FUN_100dcc9e(&DAT_1032f3fa,param_1 + 1);
  param_1[1] = uVar1;
  uVar2 = FUN_100dcf12(&DAT_10347280,param_1 + 2);
  *(undefined4 *)(param_1 + 2) = uVar2;
  return;
}

