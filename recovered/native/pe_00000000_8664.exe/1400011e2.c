/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400011e2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400011e2(void)

{
  code *pcVar1;
  uint uVar2;
  HRESULT HVar3;
  LPWSTR pWVar4;
  LPWSTR *hMem;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 ***pppuVar7;
  undefined1 local_b0 [36];
  int local_8c;
  undefined8 **local_88;
  undefined8 **local_80 [3];
  ulonglong local_68;
  undefined8 local_60;
  int iStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  int local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  setlocale(0,".UTF-8");
  FUN_1400151ba();
  local_8c = 0;
  pWVar4 = GetCommandLineW();
  hMem = CommandLineToArgvW(pWVar4,&local_8c);
  if (hMem == (LPWSTR *)0x0 || local_8c < 2) {
    pWVar4 = L"";
  }
  else {
    pWVar4 = hMem[1];
  }
  FUN_140001640(local_b0,pWVar4);
  FUN_1400016a0(local_80,local_b0,0);
  local_40 = 0xffff00000000;
  pppuVar7 = local_80;
  if (7 < local_68) {
    pppuVar7 = (undefined8 ***)local_80[0];
  }
  local_38 = FUN_14018a650(pppuVar7,&local_60,3,0xffffffff);
  FUN_140002738(&local_40,local_38,&local_60);
  uVar2 = (uint)local_40;
  if ((local_38 != 0) && (((uint)local_40 & 0xfffffff7) != 1)) {
    FUN_1400026ae("status",local_38,local_80);
code_r0x0001400014e1:
    iStack_58 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_1401896d0(6);
  }
  FUN_140001056(local_80);
  if (uVar2 == 3) {
    FUN_1400016e8(&DAT_140f2a268,local_b0);
  }
  else {
    FUN_1400016a0(local_80,local_b0,0);
    local_40 = 0xffff00000000;
    pppuVar7 = local_80;
    if (7 < local_68) {
      pppuVar7 = (undefined8 ***)local_80[0];
    }
    local_38 = FUN_14018a650(pppuVar7,&local_60,3,0xffffffff);
    FUN_140002738(&local_40,local_38,&local_60);
    uVar2 = (uint)local_40;
    if ((local_38 != 0) && (((uint)local_40 & 0xfffffff7) != 1)) {
      FUN_1400026ae("status",local_38,local_80);
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return uVar6;
    }
    FUN_140001056(local_80);
    if (uVar2 == 2) {
      FUN_1400562c1(&local_60,local_b0);
      FUN_140001f36(&DAT_140f2a240);
      DAT_140f2a250._0_4_ = (undefined4)local_50;
      DAT_140f2a250._4_4_ = local_50._4_4_;
      DAT_140f2a258._0_4_ = (undefined4)uStack_48;
      DAT_140f2a258._4_4_ = uStack_48._4_4_;
      DAT_140f2a240._0_4_ = (undefined4)local_60;
      DAT_140f2a240._4_4_ = local_60._4_4_;
      iRam0000000140f2a248 = iStack_58;
      uRam0000000140f2a24c = uStack_54;
      local_50 = 0;
      uStack_48 = 0xf;
      local_60 = local_60 & 0xffffffffffffff00;
      FUN_14000109c(&local_60);
    }
  }
  LocalFree(hMem);
  FUN_140001748(&DAT_140f2a240);
  lVar5 = _Xtime_get_ticks();
  DAT_140f14000 = 0x15180 < (ulonglong)(lVar5 / 10000000 - _DAT_140f2a260);
  if (!(bool)DAT_140f14000) {
    FUN_140001d08();
  }
  HVar3 = OleInitialize((LPVOID)0x0);
  if (HVar3 < 0) {
    uVar6 = 1;
    MessageBoxW((HWND)0x0,L"OleInitialize failed",L"Error",0x10);
  }
  else {
    local_88 = (undefined8 **)FUN_1401887b0(1);
    local_80[0] = local_88;
    local_60 = FUN_14019c208(0,0,FUN_1400459b2,local_88,0,&iStack_58);
    if (local_60 == 0) goto code_r0x0001400014e1;
    local_80[0] = (undefined8 ***)0x0;
    FUN_140001d2a();
    FUN_140001dfc(&local_60);
    OleUninitialize();
    if (iStack_58 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1401aa0e4();
    }
    uVar6 = 0;
  }
  FUN_140001e90(local_b0);
  return uVar6;
}

