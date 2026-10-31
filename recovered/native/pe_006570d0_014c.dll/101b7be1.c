/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b7be1 */

void __fastcall FUN_101b7be1(byte *param_1)

{
  char cVar1;
  
  thunk_FUN_10130d81("_Disabled",param_1,1);
  FUN_10114a0e(0,0xbf800000);
  FUN_1011eaad();
  thunk_FUN_10130d81("_DefaultHide",param_1,2);
  thunk_FUN_10130d81("_DefaultSort",param_1,4);
  cVar1 = thunk_FUN_10130d81("_WidthStretch",param_1,8);
  if (cVar1 != '\0') {
    *param_1 = *param_1 & 0xef;
  }
  cVar1 = thunk_FUN_10130d81("_WidthFixed",param_1,0x10);
  if (cVar1 != '\0') {
    *param_1 = *param_1 & 0xf7;
  }
  thunk_FUN_10130d81("_NoResize",param_1,0x20);
  thunk_FUN_10130d81("_NoReorder",param_1,0x40);
  thunk_FUN_10130d81("_NoHide",param_1,0x80);
  thunk_FUN_10130d81("_NoClip",param_1,0x100);
  thunk_FUN_10130d81("_NoSort",param_1,0x200);
  thunk_FUN_10130d81("_NoSortAscending",param_1,0x400);
  thunk_FUN_10130d81("_NoSortDescending",param_1,0x800);
  thunk_FUN_10130d81("_NoHeaderLabel",param_1,0x1000);
  thunk_FUN_10130d81("_NoHeaderWidth",param_1,0x2000);
  thunk_FUN_10130d81("_PreferSortAscending",param_1,0x4000);
  thunk_FUN_10130d81("_PreferSortDescending",param_1,0x8000);
  thunk_FUN_10130d81("_IndentEnable",param_1,0x10000);
  FUN_10114a0e(0,0xbf800000);
  FUN_1011eaad();
  thunk_FUN_10130d81("_IndentDisable",param_1,0x20000);
  FUN_10114a0e(0,0xbf800000);
  FUN_1011eaad();
  thunk_FUN_10130d81("_AngledHeader",param_1,0x40000);
  return;
}

