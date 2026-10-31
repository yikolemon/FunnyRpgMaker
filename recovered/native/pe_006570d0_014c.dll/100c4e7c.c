/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c4e7c */

undefined4 FUN_100c4e7c(undefined4 param_1,DWORD param_2)

{
  short sVar1;
  int iVar2;
  HLOCAL pvVar3;
  DWORD DVar4;
  undefined4 uVar5;
  undefined4 ***pppuVar6;
  undefined1 auStack_100 [12];
  HLOCAL local_f4;
  undefined4 **local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  int local_e0;
  uint local_dc;
  undefined1 local_c8 [160];
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_100;
  local_18 = 0xffffffff;
  local_1c = &LAB_100c7d60;
  local_20 = ExceptionList;
  local_f4 = (HLOCAL)0x0;
  ExceptionList = &local_20;
  DVar4 = FormatMessageW(0x1300,(LPCVOID)0x0,param_2,0x400,(LPWSTR)&local_f4,0,(va_list *)0x0);
  pvVar3 = local_f4;
  local_e0 = 0;
  local_f0 = (undefined4 ***)0x0;
  uStack_ec = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  local_dc = 7;
  local_18 = 0;
  if (local_f4 == (HLOCAL)0x0 || DVar4 == 0) {
    FUN_10004664(L"Unknown error",0xd);
  }
  else {
    uVar5 = FUN_10271d80(local_f4);
    FUN_10004664(pvVar3,uVar5);
    iVar2 = local_e0;
    while (iVar2 != 0) {
      pppuVar6 = &local_f0;
      if (7 < local_dc) {
        pppuVar6 = (undefined4 ***)local_f0;
      }
      sVar1 = *(short *)((int)pppuVar6 + iVar2 * 2 + -2);
      if ((sVar1 != 0xd) && (sVar1 != 10)) break;
      local_e0 = iVar2 + -1;
      *(undefined2 *)((int)pppuVar6 + iVar2 * 2 + -2) = 0;
      iVar2 = local_e0;
    }
    local_18 = 0;
    local_e0 = iVar2;
    LocalFree(local_f4);
  }
  FUN_1009fee2(1);
  local_18 = 1;
  FUN_100a0005(local_c8,L"Win32 Error ");
  uVar5 = FUN_100c5056(param_2);
  uVar5 = FUN_100a0005(uVar5,L": ");
  FUN_100c5036(uVar5,&local_f0);
  FUN_100a302e(param_1);
  local_18 = 0xffffffff;
  FUN_100a0488();
  FUN_10001134();
  ExceptionList = local_20;
  return param_1;
}

