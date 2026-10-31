/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140048c20 */

undefined8 FUN_140048c20(undefined8 param_1)

{
  ulonglong uVar1;
  DWORD DVar2;
  LPCWSTR **pppWVar3;
  LPWSTR **lpszShortPath;
  bool bVar4;
  int local_c8 [2];
  undefined8 local_c0;
  LPCWSTR *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  LPCWSTR *local_98;
  undefined8 local_90;
  longlong local_88;
  LPCWSTR *local_78 [2];
  undefined8 local_68;
  ulonglong local_60;
  LPWSTR *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong uStack_40;
  undefined1 local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_c8[0] = 0;
  local_c0 = FUN_140002f76();
  FUN_140048f9b(local_78,local_c8);
  if (local_c8[0] == 0) {
    local_98 = (LPCWSTR *)local_78;
    if (7 < local_60) {
      local_98 = local_78[0];
    }
    local_90 = local_68;
    FUN_140017160(&local_58,&local_98,&local_b8);
    uVar1 = local_48;
    FUN_14000109c();
    if (uVar1 == 1) {
LAB_140048dea:
      local_b8 = (LPCWSTR *)CONCAT44(local_b8._4_4_,2);
      FUN_14004910a(&local_98);
      FUN_14001679e(&local_58,&local_98,0);
      FUN_140049186(param_1,local_78,&local_58);
      FUN_140001056(&local_58);
      FUN_14000109c(&local_98);
      goto LAB_140048e4b;
    }
    pppWVar3 = (LPCWSTR **)local_78[0];
    if (local_60 < 8) {
      pppWVar3 = local_78;
    }
    DVar2 = GetShortPathNameW((LPCWSTR)pppWVar3,(LPWSTR)0x0,0);
    if (0 < (int)DVar2) {
      local_48 = 0;
      uStack_40 = 0;
      local_58 = (LPWSTR *)0x0;
      uStack_50 = 0;
      FUN_140047692(&local_58,0,DVar2 - 1);
      lpszShortPath = &local_58;
      if (7 < uStack_40) {
        lpszShortPath = (LPWSTR **)local_58;
      }
      pppWVar3 = (LPCWSTR **)local_78[0];
      if (local_60 < 8) {
        pppWVar3 = local_78;
      }
      DVar2 = GetShortPathNameW((LPCWSTR)pppWVar3,(LPWSTR)lpszShortPath,DVar2);
      if (local_48 == DVar2) {
        FUN_1400016e8(local_78,&local_58);
        local_b8 = (LPCWSTR *)local_78;
        if (7 < local_60) {
          local_b8 = local_78[0];
        }
        local_b0 = local_68;
        FUN_140017160(&local_98,&local_b8,&local_29);
        FUN_140003aa0(&local_b8,local_78);
        bVar4 = local_88 == local_a8;
        FUN_140001e90(&local_b8);
        FUN_14000109c(&local_98);
      }
      else {
        bVar4 = false;
      }
      FUN_140001e90(&local_58);
      if (bVar4) goto LAB_140048dea;
    }
  }
  local_98 = (LPCWSTR *)CONCAT44(local_98._4_4_,2);
  FUN_14004910a(&local_58);
  FUN_14001679e(param_1,&local_58,0);
  FUN_14000109c(&local_58);
LAB_140048e4b:
  FUN_140001056(local_78);
  return param_1;
}

