/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a3993 */

void FUN_1400a3993(undefined8 param_1,undefined8 param_2,char param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  FUN_1400912b0(param_2);
  local_28 = 0;
  FUN_14007ae77(0xb);
  FUN_1400abfd5("%s:",param_2);
  if (param_3 == '\0') {
    FUN_14008f898(1);
  }
  thunk_FUN_1400af8bf("NoResize",param_1,0x20);
  thunk_FUN_1400af8bf("NoResizeX",param_1,0x10000);
  thunk_FUN_1400af8bf("NoResizeY",param_1,0x20000);
  thunk_FUN_1400af8bf("NoTabBar",param_1,0x1000);
  thunk_FUN_1400af8bf("HiddenTabBar",param_1,0x2000);
  thunk_FUN_1400af8bf("NoWindowMenuButton",param_1,0x4000);
  thunk_FUN_1400af8bf("NoCloseButton",param_1,0x8000);
  thunk_FUN_1400af8bf("DockedWindowsInFocusRoute",param_1,0x40000);
  thunk_FUN_1400af8bf("NoDocking",param_1,0x780010);
  thunk_FUN_1400af8bf("NoDockingSplit",param_1,0x10);
  thunk_FUN_1400af8bf("NoDockingSplitOther",param_1,0x80000);
  thunk_FUN_1400af8bf("NoDockingOver",param_1,0x100000);
  thunk_FUN_1400af8bf("NoDockingOverOther",param_1,0x200000);
  thunk_FUN_1400af8bf("NoDockingOverEmpty",param_1,0x400000);
  thunk_FUN_1400af8bf("NoUndocking",param_1,0x80);
  if (param_3 == '\0') {
    FUN_14008f98e();
  }
  FUN_14007af87(1);
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_48)) {
    FUN_140091667();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_48);
}

