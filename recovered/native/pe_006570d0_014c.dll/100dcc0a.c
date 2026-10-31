/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100dcc0a */

void __fastcall FUN_100dcc0a(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  DAT_1039d904 = FUN_100dcc9e("gIsRpgMakerMapDockSpaceSet",&DAT_1039d904);
  DAT_1039d905 = FUN_100dcc9e("gIsRpgMakerCommonEventDockSpaceSet",&DAT_1039d905);
  uVar1 = FUN_100dcc9e(&DAT_1032f3fa,param_1);
  *param_1 = uVar1;
  uVar1 = FUN_100dcc9e(&DAT_1032f38a,param_1 + 1);
  param_1[1] = uVar1;
  uVar2 = FUN_100dcdd6(&DAT_1032f327,param_1 + 4);
  *(undefined4 *)(param_1 + 4) = uVar2;
  uVar2 = FUN_100dcf12(&DAT_10347280,param_1 + 8);
  *(undefined4 *)(param_1 + 8) = uVar2;
  uVar2 = FUN_100dcf12(&DAT_1034721a,param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  return;
}

