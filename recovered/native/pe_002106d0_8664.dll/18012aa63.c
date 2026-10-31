/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012aa63 */

void FUN_18012aa63(undefined8 param_1,undefined8 param_2,char param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_48;
  FUN_180117f98(param_2);
  local_28 = 0;
  FUN_180101bbb(0xb);
  FUN_1801330a5("%s:",param_2);
  if (param_3 == '\0') {
    FUN_180116580(1);
  }
  thunk_FUN_18013698f("NoResize",param_1,0x20);
  thunk_FUN_18013698f("NoResizeX",param_1,0x10000);
  thunk_FUN_18013698f("NoResizeY",param_1,0x20000);
  thunk_FUN_18013698f("NoTabBar",param_1,0x1000);
  thunk_FUN_18013698f("HiddenTabBar",param_1,0x2000);
  thunk_FUN_18013698f("NoWindowMenuButton",param_1,0x4000);
  thunk_FUN_18013698f("NoCloseButton",param_1,0x8000);
  thunk_FUN_18013698f("DockedWindowsInFocusRoute",param_1,0x40000);
  thunk_FUN_18013698f("NoDocking",param_1,0x780010);
  thunk_FUN_18013698f("NoDockingSplit",param_1,0x10);
  thunk_FUN_18013698f("NoDockingSplitOther",param_1,0x80000);
  thunk_FUN_18013698f("NoDockingOver",param_1,0x100000);
  thunk_FUN_18013698f("NoDockingOverOther",param_1,0x200000);
  thunk_FUN_18013698f("NoDockingOverEmpty",param_1,0x400000);
  thunk_FUN_18013698f("NoUndocking",param_1,0x80);
  if (param_3 == '\0') {
    FUN_180116676();
  }
  FUN_180101ccb(1);
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_48)) {
    FUN_18011834f();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_48);
}

