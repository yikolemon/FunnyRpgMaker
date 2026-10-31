/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a24e9 */

void FUN_1801a24e9(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong dwNewLong;
  HWND hWndInsertAfter;
  bool bVar3;
  float fVar4;
  float fVar5;
  undefined1 auStackY_98 [32];
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  uint local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_180402640 ^ (ulonglong)auStackY_98;
  puVar2 = *(undefined8 **)(param_1 + 0x50);
  dwNewLong = FUN_1801a26ba(*(undefined8 *)(param_1 + 0x38));
  if (dwNewLong != puVar2[1]) {
    puVar2[1] = dwNewLong;
    SetWindowLongPtrW((HWND)*puVar2,-8,dwNewLong);
  }
  uVar1 = *(uint *)(param_1 + 4);
  FUN_1801a2689(uVar1,&local_3c,&local_40);
  if (*(int *)((longlong)puVar2 + 0x14) != local_3c || (*(uint *)(puVar2 + 3) ^ local_40) != 0) {
    bVar3 = ((*(uint *)(puVar2 + 3) ^ local_40) & 8) == 0;
    hWndInsertAfter = (HWND)((ulonglong)((uVar1 >> 10 & 1) != 0) - 2);
    if (bVar3) {
      hWndInsertAfter = (HWND)0x0;
    }
    *(int *)((longlong)puVar2 + 0x14) = local_3c;
    *(uint *)(puVar2 + 3) = local_40;
    SetWindowLongW((HWND)*puVar2,-0x10,local_3c);
    SetWindowLongW((HWND)*puVar2,-0x14,*(LONG *)(puVar2 + 3));
    fVar4 = (float)*(undefined8 *)(param_1 + 8);
    fVar5 = (float)((ulonglong)*(undefined8 *)(param_1 + 8) >> 0x20);
    local_58 = (int)fVar4;
    iStack_54 = (int)fVar5;
    iStack_50 = (int)((float)*(undefined8 *)(param_1 + 0x10) + fVar4);
    iStack_4c = (int)((float)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20) + fVar5);
    FUN_1801a26c7(param_1,&local_58,*(undefined4 *)((longlong)puVar2 + 0x14),
                  *(undefined4 *)(puVar2 + 3));
    SetWindowPos((HWND)*puVar2,hWndInsertAfter,local_58,iStack_54,iStack_50 - local_58,
                 iStack_4c - iStack_54,(uint)bVar3 * 4 + 0x30);
    ShowWindow((HWND)*puVar2,8);
    *(undefined2 *)(param_1 + 0x71) = 0x101;
  }
  if (DAT_180402640 == (local_38 ^ (ulonglong)auStackY_98)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_38 ^ (ulonglong)auStackY_98);
}

