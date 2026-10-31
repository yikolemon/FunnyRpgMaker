/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140106b3b */

void FUN_140106b3b(byte *param_1)

{
  undefined4 uVar1;
  char cVar2;
  
  thunk_FUN_1400af8bf("_Disabled",param_1,1);
  FUN_140092bab(0,DAT_1401c86a4);
  FUN_14009cf92("Master disable flag (also hide from context menu)");
  thunk_FUN_1400af8bf("_DefaultHide",param_1,2);
  thunk_FUN_1400af8bf("_DefaultSort",param_1,4);
  cVar2 = thunk_FUN_1400af8bf("_WidthStretch",param_1,8);
  if (cVar2 != '\0') {
    *param_1 = *param_1 & 0xef;
  }
  cVar2 = thunk_FUN_1400af8bf("_WidthFixed",param_1,0x10);
  if (cVar2 != '\0') {
    *param_1 = *param_1 & 0xf7;
  }
  thunk_FUN_1400af8bf("_NoResize",param_1,0x20);
  thunk_FUN_1400af8bf("_NoReorder",param_1,0x40);
  thunk_FUN_1400af8bf("_NoHide",param_1,0x80);
  thunk_FUN_1400af8bf("_NoClip",param_1,0x100);
  thunk_FUN_1400af8bf("_NoSort",param_1,0x200);
  thunk_FUN_1400af8bf("_NoSortAscending",param_1,0x400);
  thunk_FUN_1400af8bf("_NoSortDescending",param_1,0x800);
  thunk_FUN_1400af8bf("_NoHeaderLabel",param_1,0x1000);
  thunk_FUN_1400af8bf("_NoHeaderWidth",param_1,0x2000);
  thunk_FUN_1400af8bf("_PreferSortAscending",param_1,0x4000);
  thunk_FUN_1400af8bf("_PreferSortDescending",param_1,0x8000);
  thunk_FUN_1400af8bf("_IndentEnable",param_1,0x10000);
  uVar1 = DAT_1401c86a4;
  FUN_140092bab(0,DAT_1401c86a4);
  FUN_14009cf92("Default for column 0");
  thunk_FUN_1400af8bf("_IndentDisable",param_1,0x20000);
  FUN_140092bab(0,uVar1);
  FUN_14009cf92("Default for column >0");
  thunk_FUN_1400af8bf("_AngledHeader",param_1,0x40000);
  return;
}

