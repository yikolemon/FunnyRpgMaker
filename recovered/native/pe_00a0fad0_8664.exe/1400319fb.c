/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400319fb */

undefined8 * FUN_1400319fb(undefined8 *param_1)

{
  DWORD DVar1;
  LPWSTR pWVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 local_100 [120];
  undefined1 local_88 [24];
  undefined1 local_70 [32];
  LPWSTR *local_50;
  undefined8 *local_48;
  int local_3c [3];
  
  local_3c[1] = -2;
  local_3c[2] = -1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_3c[0] = 0;
  local_48 = param_1;
  pWVar2 = GetCommandLineW();
  local_50 = CommandLineToArgvW(pWVar2,local_3c);
  if (local_50 != (LPWSTR *)0x0) {
    FUN_140031cc2(local_48,(longlong)local_3c[0]);
    for (uVar4 = 0; uVar4 < (ulonglong)(longlong)local_3c[0]; uVar4 = uVar4 + 1) {
      pWVar2 = local_50[uVar4];
      lVar3 = FUN_14011cf50(pWVar2);
      FUN_140007310(local_100);
      FUN_140031ece(local_100,local_70,pWVar2,pWVar2 + lVar3);
      FUN_1400076f4(local_100);
      FUN_14001a45e(local_48,local_70);
      FUN_1400017de(local_70);
    }
    LocalFree(local_50);
    return local_48;
  }
  DVar1 = GetLastError();
  FUN_140031d26(local_70,DVar1);
  FUN_140018136(local_100,"CommandLineToArgvW failed with code ",local_70);
  FUN_14000b166(local_88,local_100);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_88,&DAT_14017a4d8);
}

