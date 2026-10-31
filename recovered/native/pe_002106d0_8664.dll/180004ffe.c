/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180004ffe */

undefined8 FUN_180004ffe(undefined8 param_1)

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
  local_c0 = FUN_180002218();
  FUN_180005379(local_78,local_c8);
  if (local_c8[0] == 0) {
    local_98 = (LPCWSTR *)local_78;
    if (7 < local_60) {
      local_98 = local_78[0];
    }
    local_90 = local_68;
    FUN_18000560c(&local_58,&local_98,&local_b8);
    uVar1 = local_48;
    FUN_180001ef2();
    if (uVar1 == 1) {
LAB_1800051c8:
      local_b8 = (LPCWSTR *)CONCAT44(local_b8._4_4_,2);
      FUN_1800054e8(&local_98);
      FUN_180005564(&local_58,&local_98,0);
      FUN_180001c90(param_1,local_78,&local_58);
      FUN_180001e4c(&local_58);
      FUN_180001ef2(&local_98);
      goto LAB_180005229;
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
      FUN_180005764(&local_58,0,DVar2 - 1);
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
        FUN_1800055ac(local_78,&local_58);
        local_b8 = (LPCWSTR *)local_78;
        if (7 < local_60) {
          local_b8 = local_78[0];
        }
        local_b0 = local_68;
        FUN_18000560c(&local_98,&local_b8,&local_29);
        FUN_18000358a(&local_b8,local_78);
        bVar4 = local_88 == local_a8;
        FUN_1800010ec(&local_b8);
        FUN_180001ef2(&local_98);
      }
      else {
        bVar4 = false;
      }
      FUN_1800010ec(&local_58);
      if (bVar4) goto LAB_1800051c8;
    }
  }
  local_98 = (LPCWSTR *)CONCAT44(local_98._4_4_,2);
  FUN_1800054e8(&local_58);
  FUN_180005564(param_1,&local_58,0);
  FUN_180001ef2(&local_58);
LAB_180005229:
  FUN_180001e4c(local_78);
  return param_1;
}

