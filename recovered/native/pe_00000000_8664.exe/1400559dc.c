/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400559dc */

undefined8 FUN_1400559dc(undefined8 param_1,DWORD param_2)

{
  short sVar1;
  longlong lVar2;
  HLOCAL pvVar3;
  DWORD DVar4;
  undefined8 uVar5;
  undefined8 ***pppuVar6;
  undefined1 local_158 [16];
  undefined1 local_148 [8];
  undefined1 local_140 [224];
  HLOCAL local_60;
  undefined8 **local_58;
  undefined8 uStack_50;
  longlong local_48;
  ulonglong local_40;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_60 = (HLOCAL)0x0;
  DVar4 = FormatMessageW(0x1300,(LPCVOID)0x0,param_2,0x400,(LPWSTR)&local_60,0,(va_list *)0x0);
  pvVar3 = local_60;
  local_48 = 0;
  local_58 = (undefined8 ***)0x0;
  uStack_50 = 0;
  local_40 = 7;
  if (local_60 == (HLOCAL)0x0 || DVar4 == 0) {
    FUN_140016930(&local_58,L"Unknown error",0xd);
  }
  else {
    uVar5 = FUN_1401aa6d0(local_60);
    FUN_140016930(&local_58,pvVar3,uVar5);
    lVar2 = local_48;
    while (lVar2 != 0) {
      pppuVar6 = &local_58;
      if (7 < local_40) {
        pppuVar6 = (undefined8 ***)local_58;
      }
      sVar1 = *(short *)((longlong)pppuVar6 + lVar2 * 2 + -2);
      if ((sVar1 != 0xd) && (sVar1 != 10)) break;
      local_48 = lVar2 + -1;
      *(undefined2 *)((longlong)pppuVar6 + lVar2 * 2 + -2) = 0;
      lVar2 = local_48;
    }
    local_48 = lVar2;
    LocalFree(local_60);
  }
  FUN_140055be0(local_158,1);
  uVar5 = FUN_140055d32(local_148,L"Win32 Error ");
  uVar5 = FUN_140055f56(uVar5,param_2);
  uVar5 = FUN_140055d32(uVar5,&DAT_140edd0f6);
  FUN_140055d1b(uVar5,&local_58);
  FUN_14005c97a(local_140,param_1);
  FUN_14005613c(local_158);
  FUN_140001e90(&local_58);
  return param_1;
}

