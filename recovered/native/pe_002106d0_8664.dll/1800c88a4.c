/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c88a4 */

undefined8 FUN_1800c88a4(undefined8 param_1,DWORD param_2)

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
    FUN_180004488(&local_58,L"Unknown error",0xd);
  }
  else {
    uVar5 = FUN_18028ca30(local_60);
    FUN_180004488(&local_58,pvVar3,uVar5);
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
  FUN_1800a3658(local_158,1);
  uVar5 = FUN_1800a3793(local_148,L"Win32 Error ");
  uVar5 = FUN_1800c8ac0(uVar5,param_2);
  uVar5 = FUN_1800a3793(uVar5,L": ");
  FUN_1800c8aa8(uVar5,&local_58);
  FUN_1800a6830(local_140,param_1);
  FUN_1800a3ba4(local_158);
  FUN_1800010ec(&local_58);
  return param_1;
}

