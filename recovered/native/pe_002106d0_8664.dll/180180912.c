/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180180912 */

undefined8 * FUN_180180912(undefined8 *param_1,char *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined1 local_118 [8];
  longlong *local_110;
  undefined8 local_108;
  longlong *local_100;
  char *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  char local_c8 [8];
  undefined8 *local_c0;
  char *local_b8;
  undefined8 *local_b0;
  char *local_a8;
  char *local_a0;
  char *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  char *local_80;
  undefined8 *local_78;
  char local_69;
  undefined8 local_68;
  
  local_68 = 0xfffffffffffffffe;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  local_78 = param_1;
  FUN_180180244();
  if (*param_2 == '\x01') {
    uVar6 = FUN_1800136a6(param_2,"tileBitmaps");
    FUN_1800136fa(local_c8,uVar6);
    local_69 = local_c8[0];
    if (local_c8[0] == '\x02') {
      local_98 = (char *)0x0;
      local_88 = 0x8000000000000000;
      uStack_90 = *local_c0;
      local_e0 = 0;
      local_d0 = 0x8000000000000000;
      local_d8 = local_c0[1];
      local_e8 = local_c8;
      local_a0 = local_c8;
      while( true ) {
        cVar5 = FUN_18005324c(&local_a0,&local_e8);
        if (cVar5 != '\0') break;
        pcVar7 = (char *)FUN_1800e04aa(&local_a0);
        if (*pcVar7 == '\x03') {
          FUN_180017024(pcVar7,&local_108);
          FUN_18016fa32(local_118,&local_108);
          FUN_1801810de(local_78,local_118);
          plVar3 = local_110;
          if (local_110 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_110 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_110)(local_110);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar3 + 8))(plVar3);
              }
            }
          }
          FUN_180001ef2(&local_108);
        }
        else {
          local_108 = 0;
          puVar4 = (undefined8 *)local_78[1];
          if (puVar4 == (undefined8 *)local_78[2]) {
            FUN_1801812fc(local_78,puVar4,&local_108);
          }
          else {
            *puVar4 = 0;
            puVar4[1] = 0;
            local_78[1] = local_78[1] + 0x10;
          }
        }
        FUN_1800531d0(&local_a0);
      }
      uVar6 = FUN_1800136a6(param_2,"parallaxBitmap");
      FUN_1800136fa(&local_e8,uVar6);
      if ((char)local_e8 == '\x03') {
        FUN_180017024(&local_e8,&local_a0);
        FUN_18016fa32(&local_108,&local_a0);
        FUN_180022ada(local_78 + 3,&local_108);
        if (local_100 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_100 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_100)(local_100);
            LOCK();
            piVar2 = (int *)((longlong)local_100 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_100 + 8))(local_100);
            }
          }
        }
        FUN_180001ef2(&local_a0);
      }
      FUN_1800137c6(&local_e8);
      uVar6 = FUN_1800136a6(param_2,"widthCount");
      local_a0 = (char *)((ulonglong)local_a0 & 0xffffffff00000000);
      FUN_180057604(&DAT_1802b0ea8,uVar6);
      *(undefined4 *)(local_78 + 0xb) = local_a0._0_4_;
      uVar6 = FUN_1800136a6(param_2,"heightCount");
      local_a0 = (char *)((ulonglong)local_a0 & 0xffffffff00000000);
      FUN_180057604(&DAT_1802b0ea8,uVar6);
      *(undefined4 *)((longlong)local_78 + 0x5c) = local_a0._0_4_;
      local_e8 = "lowerTiles";
      local_e0 = 10;
      FUN_1800dcf0b(&local_a0,param_2);
      local_b0 = local_78 + 5;
      local_a8 = local_98;
      pcVar7 = local_a0;
      local_b8 = param_2;
      while (pcVar7 != local_a8) {
        local_80 = pcVar7;
        if (*pcVar7 == '\x01') {
          FUN_1801814c4(local_b0,pcVar7);
        }
        pcVar7 = local_80 + 0x10;
      }
      FUN_180016e50(&local_a0);
      local_e8 = "upperTiles";
      local_e0 = 10;
      FUN_1800dcf0b(&local_a0,local_b8);
      local_a8 = local_98;
      pcVar7 = local_a0;
      while (pcVar7 != local_a8) {
        local_80 = pcVar7;
        if (*pcVar7 == '\x01') {
          FUN_1801814c4(local_b0,pcVar7);
        }
        pcVar7 = local_80 + 0x10;
      }
      FUN_180016e50(&local_a0);
      local_e8 = "events";
      local_e0 = 6;
      FUN_1800dcf0b(&local_a0,local_b8);
      local_b0 = local_78 + 8;
      local_a8 = local_98;
      pcVar7 = local_a0;
      while (pcVar7 != local_a8) {
        local_80 = pcVar7;
        if (*pcVar7 == '\x01') {
          FUN_18018199e(local_b0,pcVar7);
        }
        pcVar7 = local_80 + 0x10;
      }
      FUN_180016e50(&local_a0);
    }
    FUN_1800137c6(local_c8);
  }
  return local_78;
}

