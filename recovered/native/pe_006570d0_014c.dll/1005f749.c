/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005f749 */

undefined4 FUN_1005f749(void)

{
  char cVar1;
  byte bVar2;
  HMODULE pHVar3;
  int iVar4;
  undefined4 uVar5;
  char *local_54;
  int local_50;
  int local_3c;
  int local_38;
  int *local_30;
  int local_2c;
  int local_28;
  uint local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_54;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c1a40;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_10041162();
  cVar1 = FUN_1005fe6c();
  if (cVar1 == '\0') {
    if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039c928)
       && (FUN_1022c0d0(&DAT_1039c928), DAT_1039c928 == -1)) {
      local_14 = 0;
      FUN_10021a06();
      FUN_1022c3a0(&LAB_1002210b);
      local_14 = 0xffffffff;
      FUN_1022c180(&DAT_1039c928);
    }
    FUN_10018780("C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\engine\\wolfrpg\\wolf_rpg_editor.cpp"
                 ,0x4f5,"InitWolfRPGEditor",4,"Failed to init version code",0x1b);
    ExceptionList = local_1c;
    return 0;
  }
  FUN_100604e4();
  FUN_10060560();
  pHVar3 = GetModuleHandleW((LPCWSTR)0x0);
  FUN_100c5d8c(&local_54,pHVar3);
  local_14 = 1;
  FUN_100c5eb6(&local_3c,&local_54);
  local_14 = 0xffffffff;
  FUN_10001134();
  local_14 = 2;
  local_30 = &local_3c;
  local_54 = &DAT_1032f509;
  local_2c = local_38;
  if (local_3c != local_38) {
    local_24 = 0;
    iVar4 = local_3c;
    do {
      if ((*(char *)(iVar4 + 8) == '\x01') && (*(char *)(iVar4 + 10) == '\x01')) {
        local_14 = 2;
        local_28 = iVar4;
        bVar2 = FUN_100b0998();
        local_24 = CONCAT31((int3)(local_24 >> 8),(byte)local_24 | bVar2);
        iVar4 = local_28;
      }
      iVar4 = iVar4 + 0xc;
    } while (iVar4 != local_2c);
    if ((local_24 & 1) != 0) {
      local_54 = &DAT_1032f28f;
      local_2c = local_38;
      if (local_3c != local_38) {
        local_24 = 0;
        iVar4 = local_3c;
        do {
          if ((*(char *)(iVar4 + 8) == '\x01') && (*(char *)(iVar4 + 10) == '\x01')) {
            local_14 = 2;
            local_28 = iVar4;
            bVar2 = FUN_100b2baf();
            local_24 = CONCAT31((int3)(local_24 >> 8),(byte)local_24 | bVar2);
            iVar4 = local_28;
          }
          iVar4 = iVar4 + 0xc;
        } while (iVar4 != local_2c);
        if ((local_24 & 1) != 0) {
          local_54 = &DAT_1032f3fa;
          local_2c = local_38;
          if (local_3c != local_38) {
            local_24 = 0;
            iVar4 = local_3c;
            do {
              if ((*(char *)(iVar4 + 8) == '\x01') && (*(char *)(iVar4 + 10) == '\x01')) {
                local_14 = 2;
                local_28 = iVar4;
                bVar2 = FUN_100ba68d();
                local_24 = CONCAT31((int3)(local_24 >> 8),(byte)local_24 | bVar2);
                iVar4 = local_28;
              }
              iVar4 = iVar4 + 0xc;
            } while (iVar4 != local_2c);
            if ((local_24 & 1) != 0) {
              if (DAT_1039ca4c < 0x30000) {
                local_14 = 2;
                if (DAT_1039ca4c < 0x20018) {
                  cVar1 = FUN_1006070a();
                }
                else {
                  cVar1 = FUN_100605d0();
                }
                if (cVar1 != '\0') {
code_r0x1005fb4a:
                  local_14 = 2;
                  if ((0x2ffff < DAT_1039ca4c) || (cVar1 = FUN_10060844(), cVar1 != '\0')) {
                    FUN_1002181a(&LAB_1006097e);
                    local_14 = 7;
                    FUN_10021780();
                    local_14 = 0xffffffff;
                    if (local_50 != 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_102716bc();
                    }
                    local_14 = 2;
                    FUN_1002181a(&LAB_100ec09c);
                    local_14 = 8;
                    FUN_10021780();
                    local_14 = 0xffffffff;
                    if (local_50 != 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_102716bc();
                    }
                    uVar5 = 1;
                    goto code_r0x1005faa6;
                  }
                }
                uVar5 = 0;
              }
              else {
                local_54 = "DrawMessage_V_30000";
                local_2c = local_38;
                if (local_3c != local_38) {
                  local_24 = 0;
                  do {
                    if ((*(char *)(local_3c + 8) == '\x01') && (*(char *)(local_3c + 10) == '\x01'))
                    {
                      local_14 = 2;
                      local_28 = local_3c;
                      bVar2 = FUN_100bae78();
                      local_24 = CONCAT31((int3)(local_24 >> 8),(byte)local_24 | bVar2);
                      local_3c = local_28;
                    }
                    local_3c = local_3c + 0xc;
                  } while (local_3c != local_2c);
                  if ((local_24 & 1) != 0) goto code_r0x1005fb4a;
                }
                if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) <
                     DAT_1039c928) && (FUN_1022c0d0(&DAT_1039c928), DAT_1039c928 == -1)) {
                  local_14 = 3;
                  FUN_10021a06();
                  FUN_1022c3a0(&LAB_1002210b);
                  local_14 = 0xffffffff;
                  FUN_1022c180(&DAT_1039c928);
                }
                local_14 = 2;
                FUN_100b26fe("C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\engine\\wolfrpg\\wolf_rpg_editor.cpp"
                             ,0x50a,"InitWolfRPGEditor()::(lambda)::operator()",4,
                             "Failed to init {}",0x11,&local_54);
                uVar5 = 0;
              }
              goto code_r0x1005faa6;
            }
          }
          if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) <
               DAT_1039c928) && (FUN_1022c0d0(&DAT_1039c928), DAT_1039c928 == -1)) {
            local_14 = 4;
            FUN_10021a06();
            FUN_1022c3a0(&LAB_1002210b);
            local_14 = 0xffffffff;
            FUN_1022c180(&DAT_1039c928);
          }
          local_14 = 2;
          FUN_100b26fe("C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\engine\\wolfrpg\\wolf_rpg_editor.cpp"
                       ,0x50a,"InitWolfRPGEditor()::(lambda)::operator()",4,"Failed to init {}",0x11
                       ,&local_54);
          uVar5 = 0;
          goto code_r0x1005faa6;
        }
      }
      if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039c928
          ) && (FUN_1022c0d0(&DAT_1039c928), DAT_1039c928 == -1)) {
        local_14 = 5;
        FUN_10021a06();
        FUN_1022c3a0(&LAB_1002210b);
        local_14 = 0xffffffff;
        FUN_1022c180(&DAT_1039c928);
      }
      local_14 = 2;
      FUN_100b26fe("C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\engine\\wolfrpg\\wolf_rpg_editor.cpp"
                   ,0x50a,"InitWolfRPGEditor()::(lambda)::operator()",4,"Failed to init {}",0x11,
                   &local_54);
      uVar5 = 0;
      goto code_r0x1005faa6;
    }
  }
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039c928) &&
     (FUN_1022c0d0(&DAT_1039c928), DAT_1039c928 == -1)) {
    local_14 = 6;
    FUN_10021a06();
    FUN_1022c3a0(&LAB_1002210b);
    local_14 = 0xffffffff;
    FUN_1022c180(&DAT_1039c928);
  }
  local_14 = 2;
  FUN_100b26fe("C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\engine\\wolfrpg\\wolf_rpg_editor.cpp"
               ,0x50a,"InitWolfRPGEditor()::(lambda)::operator()",4,"Failed to init {}",0x11,
               &local_54);
  uVar5 = 0;
code_r0x1005faa6:
  local_14 = 0xffffffff;
  FUN_10004eae();
  ExceptionList = local_1c;
  return uVar5;
}

