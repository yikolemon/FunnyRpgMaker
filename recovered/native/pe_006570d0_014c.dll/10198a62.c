/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10198a62 */

void __fastcall FUN_10198a62(int param_1,undefined4 param_2)

{
  POINT Point;
  undefined4 *puVar1;
  BOOL BVar2;
  HWND pHVar3;
  BOOL BVar4;
  int iVar5;
  undefined4 uVar6;
  LONG LVar7;
  LONG LVar8;
  undefined4 local_28;
  tagPOINT local_24;
  tagPOINT local_1c;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_28;
  local_28 = param_2;
  puVar1 = (undefined4 *)FUN_10199fcf();
  BVar2 = GetCursorPos(&local_1c);
  pHVar3 = GetForegroundWindow();
  if ((pHVar3 == (HWND)0x0) ||
     (((pHVar3 != (HWND)*puVar1 && (BVar4 = IsChild(pHVar3,(HWND)*puVar1), BVar4 == 0)) &&
      (iVar5 = FUN_1019af70(), iVar5 == 0)))) {
LAB_10198b74:
    if (BVar2 == 0) {
      uVar6 = 0;
      goto LAB_10198ba0;
    }
  }
  else {
    if (*(char *)(param_1 + 0x8f) == '\x01') {
      LVar7 = (LONG)(float)*(undefined8 *)(param_1 + 0xb4);
      LVar8 = (LONG)(float)((ulonglong)*(undefined8 *)(param_1 + 0xb4) >> 0x20);
      local_24.y = LVar8;
      local_24.x = LVar7;
      if ((*(byte *)(param_1 + 1) & 4) == 0) {
        ClientToScreen(pHVar3,&local_24);
        LVar7 = local_24.x;
        LVar8 = local_24.y;
      }
      SetCursorPos(LVar7,LVar8);
      if (*(char *)(param_1 + 0x8f) != '\0') goto LAB_10198b74;
    }
    if (puVar1[2] != 0 || BVar2 == 0) goto LAB_10198b74;
    local_24.y = local_1c.y;
    local_24.x = local_1c.x;
    LVar7 = local_1c.x;
    LVar8 = local_1c.y;
    if ((*(byte *)(param_1 + 1) & 4) == 0) {
      ScreenToClient((HWND)*puVar1,&local_24);
      LVar7 = local_24.x;
      LVar8 = local_24.y;
    }
    FUN_100f960e((float)LVar7,(float)LVar8);
  }
  Point.y = local_1c.y;
  Point.x = local_1c.x;
  pHVar3 = WindowFromPoint(Point);
  uVar6 = 0;
  if ((pHVar3 != (HWND)0x0) && (puVar1 = (undefined4 *)FUN_1019af70(), puVar1 != (undefined4 *)0x0))
  {
    uVar6 = *puVar1;
  }
LAB_10198ba0:
  FUN_100f9b72(uVar6);
  if (DAT_10388d00 != (local_14 ^ (uint)&local_28)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

