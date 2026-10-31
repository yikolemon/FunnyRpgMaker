/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100011f4 */

void FUN_100011f4(void)

{
  char cVar1;
  void *pvStack_30;
  uintptr_t uStack_2c;
  uint uStack_28;
  void *pvStack_24;
  undefined1 *puStack_20;
  void *pvStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  LPCWSTR pWVar2;
  LPCWSTR lpCaption;
  
  _setlocale(0,".UTF8");
  FUN_100c7f5c();
  FUN_100017e6();
  if (DAT_1039c728 == '\x01') {
    cVar1 = FUN_1000515c();
    if (cVar1 == '\0') {
      pWVar2 = L"无法跟踪进程创建，无法初始化 Rpg Maker MV/MZ Engine";
LAB_10001286:
      uStack_14 = 0x1000128d;
      MessageBoxW((HWND)0x0,pWVar2,L"错误",0);
      return;
    }
    cVar1 = FUN_10001000();
    if (cVar1 != '\0') {
code_r0x100cccb5:
      puStack_20 = (undefined1 *)&pvStack_30;
      uStack_14 = 0xffffffff;
      puStack_18 = &LAB_100ce490;
      pvStack_1c = ExceptionList;
      ExceptionList = &pvStack_1c;
      pvStack_30 = (void *)FUN_10228350(1);
      uStack_14 = 1;
      pvStack_24 = pvStack_30;
      uStack_2c = __beginthreadex((void *)0x0,0,(_StartAddress *)&LAB_100cd9e2,pvStack_30,0,
                                  &uStack_28);
      if (uStack_2c == 0) {
        uStack_28 = 0;
                    /* WARNING: Subroutine does not return */
        FUN_1022d330(6);
      }
      pvStack_30 = (void *)0x0;
      uStack_14 = 2;
      FUN_10021780();
      uStack_14 = 0xffffffff;
      if (uStack_28 == 0) {
        ExceptionList = pvStack_1c;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_102716bc();
    }
    lpCaption = L"警告";
    pWVar2 = L"无法监听动态库加载，可能无法初始化 Rpg Maker MV/MZ Engine";
  }
  else {
    if (DAT_1039c729 != '\x01') {
      pWVar2 = L"不支持的游戏类型";
      goto LAB_10001286;
    }
    cVar1 = FUN_1005f749();
    if (cVar1 != '\0') goto code_r0x100cccb5;
    lpCaption = L"错误";
    pWVar2 = L"无法初始化 Wolf Rpg Editor Engine";
  }
  uStack_14 = 0x10001265;
  MessageBoxW((HWND)0x0,pWVar2,lpCaption,0);
  FUN_100cccb5();
  return;
}

