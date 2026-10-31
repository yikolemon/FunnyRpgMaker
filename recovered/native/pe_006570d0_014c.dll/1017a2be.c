/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1017a2be */

undefined4 * __thiscall FUN_1017a2be(undefined4 *param_1,char *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  char cVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined1 auStack_90 [4];
  undefined4 *local_8c;
  char *local_88;
  char local_81;
  char *local_80;
  char *local_7c;
  char *local_78;
  undefined4 *local_64;
  char *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [4];
  int *local_4c;
  char local_48 [8];
  undefined4 *local_40;
  char *local_38;
  int *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_90;
  local_18 = 0xffffffff;
  local_1c = &LAB_10180310;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  param_1[0xc] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_8c = param_1;
  FUN_10179c60();
  local_18 = 0;
  if (*param_2 == '\x01') {
    uVar5 = FUN_10013d2e("tileBitmaps");
    FUN_10013db4(uVar5);
    local_18 = 1;
    local_81 = local_48[0];
    if (local_48[0] == '\x02') {
      local_60 = local_48;
      local_5c = 0;
      local_54 = 0x80000000;
      local_58 = *local_40;
      local_38 = local_48;
      local_34 = (int *)0x0;
      local_2c = 0x80000000;
      local_30 = local_40[1];
      while( true ) {
        cVar4 = FUN_10051c02(&local_38);
        if (cVar4 != '\0') break;
        pcVar6 = (char *)FUN_100dc366();
        if (*pcVar6 == '\x03') {
          FUN_100173ea(&local_7c,local_50[0]);
          local_18 = 0xe;
          FUN_1016a814(local_50,&local_7c);
          local_18 = 0xf;
          FUN_1017a8ea(local_50);
          piVar3 = local_4c;
          local_18 = 0xffffffff;
          if (local_4c != (int *)0x0) {
            LOCK();
            piVar1 = local_4c + 1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*local_4c)();
              LOCK();
              piVar1 = piVar3 + 2;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*piVar3 + 4))();
              }
            }
          }
          FUN_10001fee();
        }
        else {
          local_7c = (char *)0x0;
          puVar2 = (undefined4 *)local_8c[1];
          if (puVar2 == (undefined4 *)local_8c[2]) {
            FUN_1017ab2c(puVar2,&local_7c);
          }
          else {
            *puVar2 = 0;
            puVar2[1] = 0;
            local_8c[1] = local_8c[1] + 8;
          }
        }
        local_18 = 1;
        FUN_10051ba0();
      }
      uVar5 = FUN_10013d2e("parallaxBitmap");
      FUN_10013db4(uVar5);
      local_18 = 0x10;
      if ((char)local_60 == '\x03') {
        FUN_100173ea(&local_7c,(uint)local_38 & 0xff);
        local_18 = 0x11;
        FUN_1016a814(&local_38,&local_7c);
        local_18 = 0x12;
        FUN_1002265a(&local_38);
        piVar3 = local_34;
        local_18 = 0xffffffff;
        if (local_34 != (int *)0x0) {
          LOCK();
          piVar1 = local_34 + 1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*local_34)();
            LOCK();
            piVar1 = piVar3 + 2;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*piVar3 + 4))();
            }
          }
        }
        FUN_10001fee();
      }
      local_18 = 0xffffffff;
      FUN_10013efc();
      local_18 = 1;
      uVar5 = FUN_10013d2e("widthCount");
      local_7c = (char *)0x0;
      FUN_100561d8(uVar5,&local_7c);
      local_8c[0xb] = local_7c;
      uVar5 = FUN_10013d2e("heightCount");
      local_7c = (char *)0x0;
      FUN_100561d8(uVar5,&local_7c);
      local_8c[0xc] = local_7c;
      local_60 = "lowerTiles";
      local_5c = 10;
      FUN_100d8f98(&local_60);
      local_64 = local_8c + 5;
      local_80 = local_78;
      pcVar6 = local_7c;
      while (pcVar6 != local_80) {
        local_88 = pcVar6;
        if (*pcVar6 == '\x01') {
          local_18 = 0xb;
          FUN_1017ad20(pcVar6);
        }
        pcVar6 = local_88 + 0x10;
      }
      local_18 = 0xffffffff;
      FUN_100171ce();
      local_60 = "upperTiles";
      local_5c = 10;
      local_18 = 1;
      FUN_100d8f98(&local_60);
      local_80 = local_78;
      pcVar6 = local_7c;
      while (pcVar6 != local_80) {
        local_88 = pcVar6;
        if (*pcVar6 == '\x01') {
          local_18 = 7;
          FUN_1017ad20(pcVar6);
        }
        pcVar6 = local_88 + 0x10;
      }
      local_18 = 0xffffffff;
      FUN_100171ce();
      local_60 = "events";
      local_5c = 6;
      local_18 = 1;
      FUN_100d8f98(&local_60);
      local_64 = local_8c + 8;
      local_80 = local_78;
      pcVar6 = local_7c;
      while (pcVar6 != local_80) {
        local_88 = pcVar6;
        if (*pcVar6 == '\x01') {
          local_18 = 3;
          FUN_1017b17c(pcVar6);
        }
        pcVar6 = local_88 + 0x10;
      }
      local_18 = 0xffffffff;
      FUN_100171ce();
    }
    local_18 = 0xffffffff;
    FUN_10013efc();
  }
  ExceptionList = local_20;
  return local_8c;
}

