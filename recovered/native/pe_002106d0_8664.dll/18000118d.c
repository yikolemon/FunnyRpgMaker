/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18000118d */

void FUN_18000118d(void)

{
  char cVar1;
  LPCWSTR pWVar2;
  LPCWSTR lpCaption;
  
  setlocale(0,".UTF8");
  FUN_1800cbb38();
  FUN_180001757();
  if (DAT_180417498 == '\x01') {
    cVar1 = FUN_180004d40();
    if (cVar1 == '\0') {
      pWVar2 = L"无法跟踪进程创建，无法初始化 Rpg Maker MV/MZ Engine";
LAB_180001219:
                    /* WARNING: Could not recover jumptable at 0x000180001229. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      MessageBoxW((HWND)0x0,pWVar2,L"错误",0);
      return;
    }
    cVar1 = FUN_180001000();
    if (cVar1 != '\0') goto LAB_180001200;
    pWVar2 = L"无法监听动态库加载，可能无法初始化 Rpg Maker MV/MZ Engine";
    lpCaption = L"警告";
  }
  else {
    if (DAT_180417499 != '\x01') {
      pWVar2 = L"不支持的游戏类型";
      goto LAB_180001219;
    }
    cVar1 = FUN_18005f009();
    if (cVar1 != '\0') goto LAB_180001200;
    pWVar2 = L"无法初始化 Wolf Rpg Editor Engine";
    lpCaption = L"错误";
  }
  MessageBoxW((HWND)0x0,pWVar2,lpCaption,0);
LAB_180001200:
  FUN_1800d0420();
  return;
}

