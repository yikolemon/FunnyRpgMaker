/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10124cd3 */

void __fastcall FUN_10124cd3(undefined4 param_1,undefined4 param_2,char param_3)

{
  undefined8 local_18;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_18;
  FUN_101131fa(param_2);
  local_18 = 0;
  FUN_100fd3bc(0xb,&local_18);
  FUN_1012d08c("%s:",param_2);
  if (param_3 == '\0') {
    FUN_10111871(1);
  }
  thunk_FUN_10130d81("NoResize",param_1,0x20);
  thunk_FUN_10130d81("NoResizeX",param_1,0x10000);
  thunk_FUN_10130d81("NoResizeY",param_1,0x20000);
  thunk_FUN_10130d81("NoTabBar",param_1,0x1000);
  thunk_FUN_10130d81("HiddenTabBar",param_1,0x2000);
  thunk_FUN_10130d81("NoWindowMenuButton",param_1,0x4000);
  thunk_FUN_10130d81("NoCloseButton",param_1,0x8000);
  thunk_FUN_10130d81("DockedWindowsInFocusRoute",param_1,0x40000);
  thunk_FUN_10130d81("NoDocking",param_1,0x780010);
  thunk_FUN_10130d81("NoDockingSplit",param_1,0x10);
  thunk_FUN_10130d81("NoDockingSplitOther",param_1,0x80000);
  thunk_FUN_10130d81("NoDockingOver",param_1,0x100000);
  thunk_FUN_10130d81("NoDockingOverOther",param_1,0x200000);
  thunk_FUN_10130d81("NoDockingOverEmpty",param_1,0x400000);
  thunk_FUN_10130d81("NoUndocking",param_1,0x80);
  if (param_3 == '\0') {
    FUN_10111961();
  }
  FUN_100fd4c4(1);
  if (DAT_10388d00 == (local_10 ^ (uint)&local_18)) {
    FUN_10113568();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

