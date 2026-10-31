/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a0121 */

void FUN_1801a0121(longlong param_1,undefined8 param_2)

{
  BOOL BVar1;
  BOOL BVar2;
  undefined8 *puVar3;
  HWND pHVar4;
  longlong lVar5;
  POINT PVar6;
  undefined4 *puVar7;
  LONG LVar8;
  undefined4 uVar9;
  int X;
  int Y;
  undefined1 auStack_68 [32];
  POINT local_48;
  POINT local_40;
  ulonglong local_38;
  
  local_38 = DAT_180402640 ^ (ulonglong)auStack_68;
  puVar3 = (undefined8 *)FUN_1801a14ce();
  BVar1 = GetCursorPos(&local_40);
  pHVar4 = GetForegroundWindow();
  if ((pHVar4 == (HWND)0x0) ||
     (((pHVar4 != (HWND)*puVar3 && (BVar2 = IsChild(pHVar4,(HWND)*puVar3), BVar2 == 0)) &&
      (lVar5 = FUN_1801a2659(param_2,pHVar4), lVar5 == 0)))) {
LAB_1801a0224:
    if (BVar1 == 0) {
      uVar9 = 0;
      goto LAB_1801a0267;
    }
  }
  else {
    if (*(char *)(param_1 + 0xbb) == '\x01') {
      X = (int)(float)*(undefined8 *)(param_1 + 0xe8);
      Y = (int)(float)((ulonglong)*(undefined8 *)(param_1 + 0xe8) >> 0x20);
      local_48.y = Y;
      local_48.x = X;
      if ((*(byte *)(param_1 + 1) & 4) == 0) {
        ClientToScreen(pHVar4,&local_48);
        X = local_48.x;
        Y = local_48.y;
      }
      SetCursorPos(X,Y);
      if (*(char *)(param_1 + 0xbb) != '\0') goto LAB_1801a0224;
    }
    if (*(int *)(puVar3 + 2) != 0 || BVar1 == 0) goto LAB_1801a0224;
    local_48 = local_40;
    if ((*(byte *)(param_1 + 1) & 4) == 0) {
      ScreenToClient((HWND)*puVar3,&local_48);
      PVar6 = (POINT)((ulonglong)local_48 & 0xffffffff);
      LVar8 = local_48.y;
    }
    else {
      LVar8 = local_40.y;
      PVar6 = local_40;
    }
    FUN_1800fdbee(param_1,(float)PVar6.x,(float)LVar8);
  }
  pHVar4 = WindowFromPoint(local_40);
  uVar9 = 0;
  if ((pHVar4 != (HWND)0x0) &&
     (puVar7 = (undefined4 *)FUN_1801a2659(param_2,pHVar4), uVar9 = 0, puVar7 != (undefined4 *)0x0))
  {
    uVar9 = *puVar7;
  }
LAB_1801a0267:
  FUN_1800fe18e(param_1,uVar9);
  if (DAT_180402640 != (local_38 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_38 ^ (ulonglong)auStack_68);
  }
  return;
}

