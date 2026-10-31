/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18005f009 */

ulonglong FUN_18005f009(void)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  HMODULE pHVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  char *local_a8;
  undefined4 local_a0;
  char *local_98;
  char *local_90;
  undefined8 local_88;
  char *local_80;
  undefined8 local_78;
  longlong local_70;
  longlong local_68;
  char *local_58;
  int local_50;
  char *local_48;
  longlong *local_38;
  char *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_18004187e();
  cVar2 = FUN_18005f7a1();
  if (cVar2 == '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2c) < DAT_180417808) && (FUN_18023d500(&DAT_180417808), DAT_180417808 == -1)) {
      FUN_180021e84(&DAT_180417610);
      FUN_18023d710(&LAB_18002260a);
      _Init_thread_footer(&DAT_180417808);
    }
    local_90 = "Failed to init version code";
    local_88 = 0x1b;
    local_a8 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\engine\\wolfrpg\\wolf_rpg_editor.cpp"
    ;
    local_a0 = 0x4f5;
    local_98 = "InitWolfRPGEditor";
    FUN_18001830a(DAT_1804177e8,&local_a8,4);
    uVar8 = 0;
    goto LAB_18005f3a2;
  }
  FUN_18005fee5();
  FUN_18005ff47();
  pHVar4 = GetModuleHandleW((LPCWSTR)0x0);
  FUN_1800c9a2b(&local_58,pHVar4);
  FUN_1800c9b62(&local_70,&local_58);
  FUN_1800010ec(&local_58);
  lVar7 = local_68;
  local_30 = &DAT_18035f625;
  local_38 = &local_70;
  if (local_70 == local_68) {
code_r0x00018005f224:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2c) < DAT_180417808) && (FUN_18023d500(&DAT_180417808), DAT_180417808 == -1)) {
      FUN_180021e84(&DAT_180417610);
      FUN_18023d710(&LAB_18002260a);
      _Init_thread_footer(&DAT_180417808);
    }
    local_80 = "Failed to init {}";
    local_78 = 0x11;
    local_58 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\engine\\wolfrpg\\wolf_rpg_editor.cpp"
    ;
    local_50 = 0x50a;
    local_48 = "InitWolfRPGEditor()::(lambda)::operator()";
    FUN_1800b7668(DAT_1804177e8,&local_58,4,&local_80,&local_30);
    uVar8 = 0;
  }
  else {
    bVar5 = 0;
    lVar6 = local_70;
    do {
      if ((*(char *)(lVar6 + 0x10) == '\x01') && (*(char *)(lVar6 + 0x12) == '\x01')) {
        bVar3 = FUN_1800b5636(lVar6);
        bVar5 = bVar5 | bVar3;
      }
      lVar1 = local_68;
      lVar6 = lVar6 + 0x18;
    } while (lVar6 != lVar7);
    if ((bVar5 & 1) == 0) goto code_r0x00018005f224;
    local_30 = &DAT_18035f3ab;
    if (local_70 == local_68) {
code_r0x00018005f2a3:
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x2c) < DAT_180417808) && (FUN_18023d500(&DAT_180417808), DAT_180417808 == -1)) {
        FUN_180021e84(&DAT_180417610);
        FUN_18023d710(&LAB_18002260a);
        _Init_thread_footer(&DAT_180417808);
      }
      local_80 = "Failed to init {}";
      local_78 = 0x11;
      local_58 = 
      "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\engine\\wolfrpg\\wolf_rpg_editor.cpp"
      ;
      local_50 = 0x50a;
      local_48 = "InitWolfRPGEditor()::(lambda)::operator()";
      FUN_1800b7668(DAT_1804177e8,&local_58,4,&local_80,&local_30);
      uVar8 = 0;
    }
    else {
      bVar5 = 0;
      lVar7 = local_70;
      do {
        if ((*(char *)(lVar7 + 0x10) == '\x01') && (*(char *)(lVar7 + 0x12) == '\x01')) {
          bVar3 = FUN_1800b7b68(lVar7);
          bVar5 = bVar5 | bVar3;
        }
        lVar6 = local_68;
        lVar7 = lVar7 + 0x18;
      } while (lVar7 != lVar1);
      if ((bVar5 & 1) == 0) goto code_r0x00018005f2a3;
      local_30 = &DAT_18035f516;
      if (local_70 == local_68) {
code_r0x00018005f31f:
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x2c) < DAT_180417808) &&
           (FUN_18023d500(&DAT_180417808), DAT_180417808 == -1)) {
          FUN_180021e84(&DAT_180417610);
          FUN_18023d710(&LAB_18002260a);
          _Init_thread_footer(&DAT_180417808);
        }
        local_80 = "Failed to init {}";
        local_78 = 0x11;
        local_58 = 
        "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\engine\\wolfrpg\\wolf_rpg_editor.cpp"
        ;
        local_50 = 0x50a;
        local_48 = "InitWolfRPGEditor()::(lambda)::operator()";
        FUN_1800b7668(DAT_1804177e8,&local_58,4,&local_80,&local_30);
        uVar8 = 0;
      }
      else {
        bVar5 = 0;
        lVar7 = local_70;
        do {
          if ((*(char *)(lVar7 + 0x10) == '\x01') && (*(char *)(lVar7 + 0x12) == '\x01')) {
            bVar3 = FUN_1800c0163(lVar7);
            bVar5 = bVar5 | bVar3;
          }
          lVar7 = lVar7 + 0x18;
        } while (lVar7 != lVar6);
        if ((bVar5 & 1) == 0) goto code_r0x00018005f31f;
        if (DAT_180417a10 < 0x30000) {
          if (DAT_180417a10 < 0x20018) {
            cVar2 = FUN_1800600de(&local_38);
          }
          else {
            cVar2 = FUN_18005ff9c(&local_38);
          }
          if (cVar2 != '\0') {
code_r0x00018005f458:
            if ((0x2ffff < DAT_180417a10) || (cVar2 = FUN_180060220(&local_38), cVar2 != '\0')) {
              FUN_180021d02(&local_58,FUN_180060361);
              FUN_180021bf6(&local_58);
              if (local_50 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_18028c2e0();
              }
              FUN_180021d02(&local_58,FUN_1800f03bc);
              FUN_180021bf6(&local_58);
              if (local_50 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_18028c2e0();
              }
              uVar8 = CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
              goto LAB_18005f398;
            }
          }
          uVar8 = 0;
        }
        else {
          local_30 = "DrawMessage_V_30000";
          if (local_70 != local_68) {
            bVar5 = 0;
            lVar7 = local_70;
            do {
              if ((*(char *)(lVar7 + 0x10) == '\x01') && (*(char *)(lVar7 + 0x12) == '\x01')) {
                bVar3 = FUN_1800c0b09(lVar7);
                bVar5 = bVar5 | bVar3;
              }
              lVar7 = lVar7 + 0x18;
            } while (lVar7 != local_68);
            if ((bVar5 & 1) != 0) goto code_r0x00018005f458;
          }
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c) <
               DAT_180417808) && (FUN_18023d500(&DAT_180417808), DAT_180417808 == -1)) {
            FUN_180021e84(&DAT_180417610);
            FUN_18023d710(&LAB_18002260a);
            _Init_thread_footer(&DAT_180417808);
          }
          local_80 = "Failed to init {}";
          local_78 = 0x11;
          local_58 = 
          "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\engine\\wolfrpg\\wolf_rpg_editor.cpp"
          ;
          local_50 = 0x50a;
          local_48 = "InitWolfRPGEditor()::(lambda)::operator()";
          FUN_1800b7668(DAT_1804177e8,&local_58,4,&local_80,&local_30);
          uVar8 = 0;
        }
      }
    }
  }
LAB_18005f398:
  FUN_180004cea(&local_70);
LAB_18005f3a2:
  return uVar8 & 0xffffffff;
}

