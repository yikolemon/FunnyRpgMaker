/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c593a */

void __fastcall FUN_100c593a(undefined4 param_1,HKEY param_2)

{
  LSTATUS LVar1;
  int iVar2;
  undefined4 ***pppuVar3;
  undefined4 *puVar4;
  int *unaff_FS_OFFSET;
  WCHAR local_2dc [260];
  undefined1 local_d4 [24];
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined8 local_ac;
  undefined1 local_a4 [24];
  undefined1 local_8c [24];
  LPWSTR local_74;
  undefined4 local_70;
  undefined4 local_6c;
  LPBYTE local_68;
  undefined4 local_64;
  undefined4 local_60;
  DWORD local_5c;
  DWORD local_58;
  undefined4 local_54;
  undefined4 *local_50;
  undefined4 **local_4c [4];
  undefined4 local_3c;
  uint local_38;
  DWORD local_34;
  DWORD local_30;
  DWORD local_2c;
  HKEY local_28;
  DWORD local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_2dc;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c7dd0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  LVar1 = RegOpenKeyExW(param_2,L"SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Fonts",0,0x20019,
                        &local_28);
  if (LVar1 == 0) {
    RegQueryInfoKeyW(local_28,(LPWSTR)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,
                     (LPDWORD)0x0,(LPDWORD)0x0,&local_34,&local_24,(LPDWORD)0x0,(PFILETIME)0x0);
    local_74 = (LPWSTR)0x0;
    local_70 = 0;
    local_6c = 0;
    FUN_100c6d70(local_34 + 1);
    local_14 = 2;
    local_68 = (LPBYTE)0x0;
    local_64 = 0;
    local_60 = 0;
    FUN_100164d2(local_24 + 1);
    local_58 = 0;
    while( true ) {
      local_2c = local_24 + 1;
      local_30 = local_34 + 1;
      local_14 = 3;
      LVar1 = RegEnumValueW(local_28,local_58,local_74,&local_30,(LPDWORD)0x0,&local_5c,local_68,
                            &local_2c);
      if (LVar1 != 0) break;
      if (local_5c == 1) {
        FUN_100012b0(local_74);
        local_14 = 4;
        FUN_100012b0(local_68);
        local_14 = 5;
        pppuVar3 = local_4c;
        if (7 < local_38) {
          pppuVar3 = (undefined4 ***)local_4c[0];
        }
        iVar2 = FUN_1008ee93(pppuVar3,local_3c,0,&DAT_10356e30,2);
        if (iVar2 == -1) {
          GetWindowsDirectoryW(local_2dc,0x104);
          FUN_100012b0(local_2dc);
          local_14 = 6;
          FUN_100c6c9a(local_a4,local_8c,L"\\Fonts\\");
          local_14 = 7;
          pppuVar3 = local_4c;
          if (7 < local_38) {
            pppuVar3 = (undefined4 ***)local_4c[0];
          }
          puVar4 = (undefined4 *)FUN_100048de(pppuVar3,local_3c);
          local_ac = *(undefined8 *)(puVar4 + 4);
          local_bc = *puVar4;
          uStack_b8 = puVar4[1];
          uStack_b4 = puVar4[2];
          uStack_b0 = puVar4[3];
          puVar4[4] = 0;
          puVar4[5] = 7;
          *(undefined2 *)puVar4 = 0;
          local_14 = 8;
          FUN_100128b2(&local_bc);
          local_14 = 0xffffffff;
          FUN_10001134();
          FUN_10001134();
          FUN_10001134();
        }
        local_54 = *local_50;
        local_14 = 5;
        FUN_10003728(local_d4);
        local_14 = 9;
        FUN_10003728(local_4c);
        local_14 = 0xb;
        FUN_100c6e3a(local_2dc);
        local_14 = 0xffffffff;
        FUN_10001134();
        FUN_10001134();
        FUN_10001134();
        FUN_10001134();
      }
      local_58 = local_58 + 1;
    }
    RegCloseKey(local_28);
    local_14 = 0xffffffff;
    FUN_10004eae();
    FUN_10004eae();
  }
  *unaff_FS_OFFSET = local_1c;
  return;
}

