/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400069fc */

longlong * FUN_1400069fc(longlong *param_1,DWORD param_2)

{
  short sVar1;
  longlong lVar2;
  undefined1 (*pauVar3) [32];
  DWORD DVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong ***ppplVar7;
  longlong local_158 [2];
  longlong local_148;
  undefined1 local_140 [224];
  undefined1 (*local_60) [32];
  longlong **local_58;
  undefined8 uStack_50;
  longlong local_48;
  ulonglong local_40;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_60 = (undefined1 (*) [32])0x0;
  DVar4 = FormatMessageW(0x1300,(LPCVOID)0x0,param_2,0x400,(LPWSTR)&local_60,0,(va_list *)0x0);
  pauVar3 = local_60;
  local_48 = 0;
  local_58 = (longlong **)0x0;
  uStack_50 = 0;
  local_40 = 7;
  if (local_60 == (undefined1 (*) [32])0x0 || DVar4 == 0) {
    FUN_140007116((longlong *)&local_58,(undefined8 *)L"Unknown error",0xd);
  }
  else {
    uVar5 = FUN_14009cf30(local_60);
    FUN_140007116((longlong *)&local_58,(undefined8 *)pauVar3,uVar5);
    lVar2 = local_48;
    while (lVar2 != 0) {
      ppplVar7 = &local_58;
      if (7 < local_40) {
        ppplVar7 = (longlong ***)local_58;
      }
      sVar1 = *(short *)((longlong)ppplVar7 + lVar2 * 2 + -2);
      if ((sVar1 != 0xd) && (sVar1 != 10)) break;
      local_48 = lVar2 + -1;
      *(undefined2 *)((longlong)ppplVar7 + lVar2 * 2 + -2) = 0;
      lVar2 = local_48;
    }
    local_48 = lVar2;
    LocalFree(local_60);
  }
  FUN_140006c00(local_158,1);
  plVar6 = FUN_140001f51(&local_148,(undefined1 (*) [32])L"Win32 Error ");
  plVar6 = FUN_140006d3c(plVar6,param_2);
  plVar6 = FUN_140001f51(plVar6,(undefined1 (*) [32])0x14011c32c);
  FUN_140001f3a(plVar6,&local_58);
  FUN_14000aba4((longlong)local_140,param_1);
  FUN_140006f22((longlong)local_158);
  FUN_140002174((longlong *)&local_58);
  return param_1;
}

