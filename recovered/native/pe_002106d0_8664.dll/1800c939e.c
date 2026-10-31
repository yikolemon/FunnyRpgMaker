/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c939e */

void FUN_1800c939e(undefined8 *param_1,HKEY param_2)

{
  undefined8 uVar1;
  LSTATUS LVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined8 ***pppuVar5;
  DWORD dwIndex;
  WCHAR local_368 [16];
  undefined1 local_348 [496];
  undefined1 local_158 [32];
  undefined1 local_138 [32];
  undefined1 local_118 [32];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  LPWSTR local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  LPBYTE local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 **local_a0 [2];
  undefined8 local_90;
  ulonglong local_88;
  DWORD local_7c;
  HKEY local_78;
  DWORD local_70;
  DWORD local_6c;
  DWORD local_68;
  DWORD local_64 [9];
  
  local_64[1] = 0xfffffffe;
  local_64[2] = 0xffffffff;
  LVar2 = RegOpenKeyExW(param_2,L"SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Fonts",0,0x20019,
                        &local_78);
  if (LVar2 == 0) {
    RegQueryInfoKeyW(local_78,(LPWSTR)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,
                     (LPDWORD)0x0,(LPDWORD)0x0,&local_70,local_64,(LPDWORD)0x0,(PFILETIME)0x0);
    local_d8 = (LPWSTR)0x0;
    uStack_d0 = 0;
    local_c8 = 0;
    FUN_1800cabfe(&local_d8,local_70 + 1);
    local_b8 = (LPBYTE)0x0;
    uStack_b0 = 0;
    local_a8 = 0;
    FUN_180016162(&local_b8,local_64[0] + 1);
    dwIndex = 0;
    while( true ) {
      local_68 = local_64[0] + 1;
      local_6c = local_70 + 1;
      LVar2 = RegEnumValueW(local_78,dwIndex,local_d8,&local_6c,(LPDWORD)0x0,&local_7c,local_b8,
                            &local_68);
      if (LVar2 != 0) break;
      if (local_7c == 1) {
        FUN_180001254(local_158,local_d8);
        FUN_180001254(local_a0,local_b8);
        pppuVar5 = local_a0;
        if (7 < local_88) {
          pppuVar5 = (undefined8 ***)local_a0[0];
        }
        lVar3 = FUN_180090097(pppuVar5,local_90,0,&DAT_180386f12,2);
        if (lVar3 == -1) {
          GetWindowsDirectoryW(local_368,0x104);
          FUN_180001254(local_118,local_368);
          FUN_1800cab31(local_138,local_118,L"\\Fonts\\");
          pppuVar5 = local_a0;
          if (7 < local_88) {
            pppuVar5 = (undefined8 ***)local_a0[0];
          }
          puVar4 = (undefined4 *)FUN_180004718(local_138,pppuVar5,local_90);
          local_f8 = *puVar4;
          uStack_f4 = puVar4[1];
          uStack_f0 = puVar4[2];
          uStack_ec = puVar4[3];
          local_e8 = puVar4[4];
          uStack_e4 = puVar4[5];
          uStack_e0 = puVar4[6];
          uStack_dc = puVar4[7];
          *(undefined8 *)(puVar4 + 4) = 0;
          *(undefined8 *)(puVar4 + 6) = 7;
          *(undefined2 *)puVar4 = 0;
          FUN_180012524(local_a0,&local_f8);
          FUN_1800010ec(&local_f8);
          FUN_1800010ec(local_138);
          FUN_1800010ec(local_118);
        }
        uVar1 = *param_1;
        FUN_18000358a(local_368,local_158);
        FUN_18000358a(local_348,local_a0);
        FUN_1800cacb0(uVar1,local_368);
        FUN_1800010ec(local_348);
        FUN_1800010ec(local_368);
        FUN_1800010ec(local_a0);
        FUN_1800010ec(local_158);
      }
      dwIndex = dwIndex + 1;
    }
    RegCloseKey(local_78);
    FUN_180004cea(&local_b8);
    FUN_180004cea(&local_d8);
  }
  return;
}

