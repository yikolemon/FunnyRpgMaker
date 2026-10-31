/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040716c */

undefined4 * __cdecl FUN_0040716c(undefined4 *param_1,DWORD param_2)

{
  short sVar1;
  int iVar2;
  undefined1 (*pauVar3) [32];
  DWORD DVar4;
  uint uVar5;
  int *piVar6;
  undefined4 ***pppuVar7;
  undefined1 auStack_100 [12];
  undefined1 (*local_f4) [32];
  undefined4 **local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  int local_e0;
  uint local_dc;
  undefined1 local_d8 [16];
  int local_c8 [2];
  undefined1 local_c0 [152];
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_100;
  local_18 = 0xffffffff;
  local_1c = &LAB_00417f90;
  local_20 = ExceptionList;
  local_f4 = (undefined1 (*) [32])0x0;
  ExceptionList = &local_20;
  DVar4 = FormatMessageW(0x1300,(LPCVOID)0x0,param_2,0x400,(LPWSTR)&local_f4,0,(va_list *)0x0);
  pauVar3 = local_f4;
  local_e0 = 0;
  local_f0 = (undefined4 ***)0x0;
  uStack_ec = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  local_dc = 7;
  local_18 = 0;
  if (local_f4 == (undefined1 (*) [32])0x0 || DVar4 == 0) {
    FUN_004077de(&local_f0,(uint *)L"Unknown error",0xd);
  }
  else {
    uVar5 = FUN_00494090(local_f4);
    FUN_004077de(&local_f0,(uint *)pauVar3,uVar5);
    iVar2 = local_e0;
    while (iVar2 != 0) {
      pppuVar7 = &local_f0;
      if (7 < local_dc) {
        pppuVar7 = (undefined4 ***)local_f0;
      }
      sVar1 = *(short *)((int)pppuVar7 + iVar2 * 2 + -2);
      if ((sVar1 != 0xd) && (sVar1 != 10)) break;
      local_e0 = iVar2 + -1;
      *(undefined2 *)((int)pppuVar7 + iVar2 * 2 + -2) = 0;
      iVar2 = local_e0;
    }
    local_18 = 0;
    local_e0 = iVar2;
    LocalFree(local_f4);
  }
  FUN_00407326(local_d8,1);
  local_18 = 1;
  piVar6 = FUN_00401fcd(local_c8,(undefined1 (*) [32])L"Win32 Error ");
  piVar6 = FUN_0040744a(piVar6,param_2);
  piVar6 = FUN_00401fcd(piVar6,(undefined1 (*) [32])0x504ea6);
  FUN_00401fae(piVar6,&local_f0);
  FUN_0040b25c(local_c0,param_1);
  local_18 = 0xffffffff;
  FUN_0040761e((int)local_d8);
  FUN_0040226e(&local_f0);
  ExceptionList = local_20;
  return param_1;
}

