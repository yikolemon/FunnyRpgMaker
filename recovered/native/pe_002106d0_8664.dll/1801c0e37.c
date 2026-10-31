/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c0e37 */

void FUN_1801c0e37(byte *param_1)

{
  undefined4 uVar1;
  char cVar2;
  
  thunk_FUN_18013698f("_Disabled",param_1,1);
  FUN_180119893(0,DAT_1802bb8e0);
  FUN_180124063("Master disable flag (also hide from context menu)");
  thunk_FUN_18013698f("_DefaultHide",param_1,2);
  thunk_FUN_18013698f("_DefaultSort",param_1,4);
  cVar2 = thunk_FUN_18013698f("_WidthStretch",param_1,8);
  if (cVar2 != '\0') {
    *param_1 = *param_1 & 0xef;
  }
  cVar2 = thunk_FUN_18013698f("_WidthFixed",param_1,0x10);
  if (cVar2 != '\0') {
    *param_1 = *param_1 & 0xf7;
  }
  thunk_FUN_18013698f("_NoResize",param_1,0x20);
  thunk_FUN_18013698f("_NoReorder",param_1,0x40);
  thunk_FUN_18013698f("_NoHide",param_1,0x80);
  thunk_FUN_18013698f("_NoClip",param_1,0x100);
  thunk_FUN_18013698f("_NoSort",param_1,0x200);
  thunk_FUN_18013698f("_NoSortAscending",param_1,0x400);
  thunk_FUN_18013698f("_NoSortDescending",param_1,0x800);
  thunk_FUN_18013698f("_NoHeaderLabel",param_1,0x1000);
  thunk_FUN_18013698f("_NoHeaderWidth",param_1,0x2000);
  thunk_FUN_18013698f("_PreferSortAscending",param_1,0x4000);
  thunk_FUN_18013698f("_PreferSortDescending",param_1,0x8000);
  thunk_FUN_18013698f("_IndentEnable",param_1,0x10000);
  uVar1 = DAT_1802bb8e0;
  FUN_180119893(0,DAT_1802bb8e0);
  FUN_180124063("Default for column 0");
  thunk_FUN_18013698f("_IndentDisable",param_1,0x20000);
  FUN_180119893(0,uVar1);
  FUN_180124063("Default for column >0");
  thunk_FUN_18013698f("_AngledHeader",param_1,0x40000);
  return;
}

