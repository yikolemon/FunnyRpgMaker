/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10157f38 */

void FUN_10157f38(void)

{
  char cVar1;
  char *pcVar2;
  undefined1 auStack_188 [4];
  char *local_184;
  char *local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  char *local_168;
  undefined4 local_164;
  int local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  char **ppcStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  char *local_11c;
  char *local_118;
  char *local_114;
  undefined4 local_110;
  undefined4 local_10c;
  char *local_100;
  char *local_fc;
  char *local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  char *local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  char *local_6c;
  char *local_68;
  char local_60 [20];
  char *local_4c;
  char *local_48;
  char *local_40;
  char *local_3c;
  char *local_38;
  undefined4 local_34;
  char *local_30;
  char *local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_188;
  local_18 = 0xffffffff;
  local_1c = &LAB_1015f540;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  FUN_10001f66(
              "\n({\n    dataActors: $dataActors,\n    dataClasses: $dataClasses,\n    dataSkills: $dataSkills,\n    dataItems: $dataItems,\n    dataWeapons: $dataWeapons,\n    dataArmors: $dataArmors,\n    dataEnemies: $dataEnemies,\n    dataTroops: $dataTroops,\n    dataStates: $dataStates,\n    dataAnimations: $dataAnimations,\n    dataTilesets: $dataTilesets,\n    dataCommonEvents: $dataCommonEvents,\n    dataSystem: $dataSystem,\n    plugins: $plugins,\n    dataMapInfos: $dataMapInfos,\n})\n"
              );
  local_18 = 0;
  FUN_100145e4(local_60,&local_168);
  local_18 = 0xffffffff;
  FUN_10001fee();
  local_18 = 0x30;
  if (local_60[0] == '\x01') {
    DAT_1039d2f0 = 0x3dcccccd;
    pcVar2 = (char *)FUN_10013d2e("dataActors");
    if (*pcVar2 == '\x02') {
      FUN_10001f66("dataActors");
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_128 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_138 = 0;
      local_134 = 0;
      local_150 = 0;
      uStack_14c = 0;
      uStack_148 = 0;
      ppcStack_144 = (char **)0x0;
      local_18 = 0xe5;
      FUN_1002218a();
      local_18 = 0xe8;
      local_180 = (char *)FUN_10013d2e("dataActors");
      local_f4 = 0;
      local_f8 = (char *)0x0;
      local_f0 = 0x80000000;
      cVar1 = *local_180;
      if (cVar1 == '\0') {
        local_f0 = 1;
      }
      else if (cVar1 == '\x02') {
        local_f4 = **(undefined4 **)(local_180 + 8);
      }
      else if (cVar1 == '\x01') {
        local_f8 = *(char **)**(undefined4 **)(local_180 + 8);
      }
      else {
        local_f0 = 0;
      }
      local_178 = 0;
      local_17c = 0;
      local_174 = 0x80000000;
      local_fc = local_180;
      if (*local_180 == '\x02') {
        local_178 = *(undefined4 *)(*(int *)(local_180 + 8) + 4);
      }
      else if (*local_180 == '\x01') {
        local_17c = **(undefined4 **)(local_180 + 8);
      }
      else {
        local_174 = 1;
      }
      while (cVar1 = FUN_10051c02(&local_180), cVar1 == '\0') {
        FUN_100dc366();
        local_118 = "name";
        local_114 = (char *)0x4;
        FUN_100db8d0(&local_118);
        local_18 = 0xe9;
        FUN_1015d38a();
        local_18 = 0xffffffff;
        FUN_10001fee();
        local_18 = 0xe8;
        FUN_10051ba0();
      }
      FUN_1006b168(&local_168);
      local_18 = 0xffffffff;
      FUN_1006ae4c();
      FUN_10001fee();
    }
    DAT_1039d2f0 = 0x3de147ae;
    local_18 = 0x30;
    pcVar2 = (char *)FUN_10013d2e("dataClasses");
    if (*pcVar2 == '\x02') {
      FUN_10001f66("dataClasses");
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_128 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_138 = 0;
      local_134 = 0;
      local_150 = 0;
      uStack_14c = 0;
      uStack_148 = 0;
      ppcStack_144 = (char **)0x0;
      local_18 = 0xdf;
      FUN_1002218a();
      local_18 = 0xe2;
      local_180 = (char *)FUN_10013d2e("dataClasses");
      local_f4 = 0;
      local_f8 = (char *)0x0;
      local_f0 = 0x80000000;
      cVar1 = *local_180;
      if (cVar1 == '\0') {
        local_f0 = 1;
      }
      else if (cVar1 == '\x02') {
        local_f4 = **(undefined4 **)(local_180 + 8);
      }
      else if (cVar1 == '\x01') {
        local_f8 = *(char **)**(undefined4 **)(local_180 + 8);
      }
      else {
        local_f0 = 0;
      }
      local_178 = 0;
      local_17c = 0;
      local_174 = 0x80000000;
      local_fc = local_180;
      if (*local_180 == '\x02') {
        local_178 = *(undefined4 *)(*(int *)(local_180 + 8) + 4);
      }
      else if (*local_180 == '\x01') {
        local_17c = **(undefined4 **)(local_180 + 8);
      }
      else {
        local_174 = 1;
      }
      while (cVar1 = FUN_10051c02(&local_180), cVar1 == '\0') {
        FUN_100dc366();
        local_118 = "name";
        local_114 = (char *)0x4;
        FUN_100db8d0(&local_118);
        local_18 = 0xe3;
        FUN_1015d38a();
        local_18 = 0xffffffff;
        FUN_10001fee();
        local_18 = 0xe2;
        FUN_10051ba0();
      }
      FUN_1006b168(&local_168);
      local_18 = 0xffffffff;
      FUN_1006ae4c();
      FUN_10001fee();
    }
    DAT_1039d2f0 = 0x3df5c28f;
    local_18 = 0x30;
    pcVar2 = (char *)FUN_10013d2e("dataSkills");
    if (*pcVar2 == '\x02') {
      FUN_10001f66("dataSkills");
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_128 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_138 = 0;
      local_134 = 0;
      local_150 = 0;
      uStack_14c = 0;
      uStack_148 = 0;
      ppcStack_144 = (char **)0x0;
      local_18 = 0xd7;
      FUN_1002218a();
      local_18 = 0xda;
      local_180 = (char *)FUN_10013d2e("dataSkills");
      local_f4 = 0;
      local_f8 = (char *)0x0;
      local_f0 = 0x80000000;
      cVar1 = *local_180;
      if (cVar1 == '\0') {
        local_f0 = 1;
      }
      else if (cVar1 == '\x02') {
        local_f4 = **(undefined4 **)(local_180 + 8);
      }
      else if (cVar1 == '\x01') {
        local_f8 = *(char **)**(undefined4 **)(local_180 + 8);
      }
      else {
        local_f0 = 0;
      }
      local_178 = 0;
      local_17c = 0;
      local_174 = 0x80000000;
      local_fc = local_180;
      if (*local_180 == '\x02') {
        local_178 = *(undefined4 *)(*(int *)(local_180 + 8) + 4);
      }
      else if (*local_180 == '\x01') {
        local_17c = **(undefined4 **)(local_180 + 8);
      }
      else {
        local_174 = 1;
      }
      while (cVar1 = FUN_10051c02(&local_180), cVar1 == '\0') {
        local_184 = (char *)FUN_100dc366();
        local_118 = "name";
        local_114 = (char *)0x4;
        FUN_100db8d0(&local_118);
        local_18 = 0xdb;
        FUN_1015d38a();
        local_18 = 0xffffffff;
        FUN_10001fee();
        local_118 = "message1";
        local_114 = (char *)0x8;
        local_18 = 0xda;
        FUN_100db8d0(&local_118);
        local_18 = 0xdc;
        FUN_1015d38a();
        local_18 = 0xffffffff;
        FUN_10001fee();
        local_118 = "message2";
        local_114 = (char *)0x8;
        local_18 = 0xda;
        FUN_100db8d0(&local_118);
        local_18 = 0xdd;
        FUN_1015d38a();
        local_18 = 0xffffffff;
        FUN_10001fee();
        local_18 = 0xda;
        FUN_10051ba0();
      }
      FUN_1006b168(&local_168);
      local_18 = 0xffffffff;
      FUN_1006ae4c();
      FUN_10001fee();
    }
    DAT_1039d2f0 = 0x3e051eb8;
    local_18 = 0x30;
    pcVar2 = (char *)FUN_10013d2e("dataItems");
    if (*pcVar2 == '\x02') {
      FUN_10001f66("dataItems");
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_128 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_138 = 0;
      local_134 = 0;
      local_150 = 0;
      uStack_14c = 0;
      uStack_148 = 0;
      ppcStack_144 = (char **)0x0;
      local_18 = 0xd0;
      FUN_1002218a();
      local_18 = 0xd3;
      local_180 = (char *)FUN_10013d2e("dataItems");
      local_f4 = 0;
      local_f8 = (char *)0x0;
      local_f0 = 0x80000000;
      cVar1 = *local_180;
      if (cVar1 == '\0') {
        local_f0 = 1;
      }
      else if (cVar1 == '\x02') {
        local_f4 = **(undefined4 **)(local_180 + 8);
      }
      else if (cVar1 == '\x01') {
        local_f8 = *(char **)**(undefined4 **)(local_180 + 8);
      }
      else {
        local_f0 = 0;
      }
      local_178 = 0;
      local_17c = 0;
      local_174 = 0x80000000;
      local_fc = local_180;
      if (*local_180 == '\x02') {
        local_178 = *(undefined4 *)(*(int *)(local_180 + 8) + 4);
      }
      else if (*local_180 == '\x01') {
        local_17c = **(undefined4 **)(local_180 + 8);
      }
      else {
        local_174 = 1;
      }
      while (cVar1 = FUN_10051c02(&local_180), cVar1 == '\0') {
        local_184 = (char *)FUN_100dc366();
        local_118 = "name";
        local_114 = (char *)0x4;
        FUN_100db8d0(&local_118);
        local_18 = 0xd4;
        FUN_1015d38a();
        local_18 = 0xffffffff;
        FUN_10001fee();
        local_118 = "description";
        local_114 = (char *)0xb;
        local_18 = 0xd3;
        FUN_100db8d0(&local_118);
        local_18 = 0xd5;
        FUN_1015d38a();
        local_18 = 0xffffffff;
        FUN_10001fee();
        local_18 = 0xd3;
        FUN_10051ba0();
      }
      FUN_1006b168(&local_168);
      local_18 = 0xffffffff;
      FUN_1006ae4c();
      FUN_10001fee();
    }
    DAT_1039d2f0 = 0x3e0f5c29;
    local_18 = 0x30;
    pcVar2 = (char *)FUN_10013d2e("dataWeapons");
    if (*pcVar2 == '\x02') {
      FUN_10001f66("dataWeapons");
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_128 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_138 = 0;
      local_134 = 0;
      local_150 = 0;
      uStack_14c = 0;
      uStack_148 = 0;
      ppcStack_144 = (char **)0x0;
      local_18 = 0xc9;
      FUN_1002218a();
      local_18 = 0xcc;
      local_180 = (char *)FUN_10013d2e("dataWeapons");
      local_f4 = 0;
      local_f8 = (char *)0x0;
      local_f0 = 0x80000000;
      cVar1 = *local_180;
      if (cVar1 == '\0') {
        local_f0 = 1;
      }
      else if (cVar1 == '\x02') {
        local_f4 = **(undefined4 **)(local_180 + 8);
      }
      else if (cVar1 == '\x01') {
        local_f8 = *(char **)**(undefined4 **)(local_180 + 8);
      }
      else {
        local_f0 = 0;
      }
      local_178 = 0;
      local_17c = 0;
      local_174 = 0x80000000;
      local_fc = local_180;
      if (*local_180 == '\x02') {
        local_178 = *(undefined4 *)(*(int *)(local_180 + 8) + 4);
      }
      else if (*local_180 == '\x01') {
        local_17c = **(undefined4 **)(local_180 + 8);
      }
      else {
        local_174 = 1;
      }
      while (cVar1 = FUN_10051c02(&local_180), cVar1 == '\0') {
        local_184 = (char *)FUN_100dc366();
        local_118 = "name";
        local_114 = (char *)0x4;
        FUN_100db8d0(&local_118);
        local_18 = 0xcd;
        FUN_1015d38a();
        local_18 = 0xffffffff;
        FUN_10001fee();
        local_118 = "description";
        local_114 = (char *)0xb;
        local_18 = 0xcc;
        FUN_100db8d0(&local_118);
        local_18 = 0xce;
        FUN_1015d38a();
        local_18 = 0xffffffff;
        FUN_10001fee();
        local_18 = 0xcc;
        FUN_10051ba0();
      }
      FUN_1006b168(&local_168);
      local_18 = 0xffffffff;
      FUN_1006ae4c();
      FUN_10001fee();
    }
    DAT_1039d2f0 = 0x3e19999a;
    local_18 = 0x30;
    pcVar2 = (char *)FUN_10013d2e("dataArmors");
    if (*pcVar2 == '\x02') {
      FUN_10001f66("dataArmors");
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_128 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_138 = 0;
      local_134 = 0;
      local_150 = 0;
      uStack_14c = 0;
      uStack_148 = 0;
      ppcStack_144 = (char **)0x0;
      local_18 = 0xc2;
      FUN_1002218a();
      local_18 = 0xc5;
      local_180 = (char *)FUN_10013d2e("dataArmors");
      local_f4 = 0;
      local_f8 = (char *)0x0;
      local_f0 = 0x80000000;
      cVar1 = *local_180;
      if (cVar1 == '\0') {
        local_f0 = 1;
      }
      else if (cVar1 == '\x02') {
        local_f4 = **(undefined4 **)(local_180 + 8);
      }
      else if (cVar1 == '\x01') {
        local_f8 = *(char **)**(undefined4 **)(local_180 + 8);
      }
      else {
        local_f0 = 0;
      }
      local_178 = 0;
      local_17c = 0;
      local_174 = 0x80000000;
      local_fc = local_180;
      if (*local_180 == '\x02') {
        local_178 = *(undefined4 *)(*(int *)(local_180 + 8) + 4);
      }
      else if (*local_180 == '\x01') {
        local_17c = **(undefined4 **)(local_180 + 8);
      }
      else {
        local_174 = 1;
      }
      while (cVar1 = FUN_10051c02(&local_180), cVar1 == '\0') {
        local_184 = (char *)FUN_100dc366();
        local_118 = "name";
        local_114 = (char *)0x4;
        FUN_100db8d0(&local_118);
        local_18 = 0xc6;
        FUN_1015d38a();
        local_18 = 0xffffffff;
        FUN_10001fee();
        local_118 = "description";
        local_114 = (char *)0xb;
        local_18 = 0xc5;
        FUN_100db8d0(&local_118);
        local_18 = 199;
        FUN_1015d38a();
        local_18 = 0xffffffff;
        FUN_10001fee();
        local_18 = 0xc5;
        FUN_10051ba0();
      }
      FUN_1006b168(&local_168);
      local_18 = 0xffffffff;
      FUN_1006ae4c();
      FUN_10001fee();
    }
    DAT_1039d2f0 = 0x3e23d70a;
    local_18 = 0x30;
    pcVar2 = (char *)FUN_10013d2e("dataEnemies");
    if (*pcVar2 == '\x02') {
      FUN_10001f66("dataEnemies");
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_128 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_138 = 0;
      local_134 = 0;
      local_150 = 0;
      uStack_14c = 0;
      uStack_148 = 0;
      ppcStack_144 = (char **)0x0;
      local_18 = 0xbc;
      FUN_1002218a();
      local_18 = 0xbf;
      local_180 = (char *)FUN_10013d2e("dataEnemies");
      local_f4 = 0;
      local_f8 = (char *)0x0;
      local_f0 = 0x80000000;
      cVar1 = *local_180;
      if (cVar1 == '\0') {
        local_f0 = 1;
      }
      else if (cVar1 == '\x02') {
        local_f4 = **(undefined4 **)(local_180 + 8);
      }
      else if (cVar1 == '\x01') {
        local_f8 = *(char **)**(undefined4 **)(local_180 + 8);
      }
      else {
        local_f0 = 0;
      }
      local_178 = 0;
      local_17c = 0;
      local_174 = 0x80000000;
      local_fc = local_180;
      if (*local_180 == '\x02') {
        local_178 = *(undefined4 *)(*(int *)(local_180 + 8) + 4);
      }
      else if (*local_180 == '\x01') {
        local_17c = **(undefined4 **)(local_180 + 8);
      }
      else {
        local_174 = 1;
      }
      while (cVar1 = FUN_10051c02(&local_180), cVar1 == '\0') {
        FUN_100dc366();
        local_118 = "name";
        local_114 = (char *)0x4;
        FUN_100db8d0(&local_118);
        local_18 = 0xc0;
        FUN_1015d38a();
        local_18 = 0xffffffff;
        FUN_10001fee();
        local_18 = 0xbf;
        FUN_10051ba0();
      }
      FUN_1006b168(&local_168);
      local_18 = 0xffffffff;
      FUN_1006ae4c();
      FUN_10001fee();
    }
    DAT_1039d2f0 = 0x3e2e147b;
    local_18 = 0x30;
    pcVar2 = (char *)FUN_10013d2e("dataTroops");
    if (*pcVar2 == '\x02') {
      FUN_10001f66("dataTroops");
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_128 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_138 = 0;
      local_134 = 0;
      local_150 = 0;
      uStack_14c = 0;
      uStack_148 = 0;
      ppcStack_144 = (char **)0x0;
      local_18 = 0xaf;
      FUN_1002218a();
      local_18 = 0xb2;
      local_180 = (char *)FUN_10013d2e("dataTroops");
      local_f4 = 0;
      local_f8 = (char *)0x0;
      local_f0 = 0x80000000;
      cVar1 = *local_180;
      if (cVar1 == '\0') {
        local_f0 = 1;
      }
      else if (cVar1 == '\x02') {
        local_f4 = **(undefined4 **)(local_180 + 8);
      }
      else if (cVar1 == '\x01') {
        local_f8 = *(char **)**(undefined4 **)(local_180 + 8);
      }
      else {
        local_f0 = 0;
      }
      local_178 = 0;
      local_17c = 0;
      local_174 = 0x80000000;
      local_fc = local_180;
      if (*local_180 == '\x02') {
        local_178 = *(undefined4 *)(*(int *)(local_180 + 8) + 4);
      }
      else if (*local_180 == '\x01') {
        local_17c = **(undefined4 **)(local_180 + 8);
      }
      else {
        local_174 = 1;
      }
      while (cVar1 = FUN_10051c02(&local_180), cVar1 == '\0') {
        local_184 = (char *)FUN_100dc366();
        local_118 = "name";
        local_114 = (char *)0x4;
        FUN_100db8d0(&local_118);
        local_18 = 0xba;
        FUN_1015d38a();
        local_18 = 0xffffffff;
        FUN_10001fee();
        local_b8 = "pages";
        local_b4 = 5;
        local_18 = 0xb2;
        FUN_100d8f98(&local_b8);
        local_30 = local_114;
        pcVar2 = local_118;
        while (pcVar2 != local_30) {
          local_b8 = "list";
          local_b4 = 4;
          local_18 = 0xb4;
          local_2c = pcVar2;
          FUN_100d8f98(&local_b8);
          local_40 = local_68;
          pcVar2 = local_6c;
          while (pcVar2 != local_40) {
            local_b8 = "parameters";
            local_b4 = 10;
            local_18 = 0xb6;
            local_100 = pcVar2;
            FUN_100d8f98(&local_b8);
            local_11c = local_48;
            pcVar2 = local_4c;
            while (pcVar2 != local_11c) {
              local_38 = (char *)0x0;
              local_34 = 0;
              local_18 = 0xb8;
              local_184 = pcVar2;
              FUN_100db8d0(&local_38);
              local_18 = 0xb9;
              FUN_1015d38a();
              local_18 = 0xffffffff;
              FUN_10001fee();
              pcVar2 = local_184 + 0x10;
            }
            local_18 = 0xffffffff;
            FUN_100171ce();
            pcVar2 = local_100 + 0x10;
          }
          local_18 = 0xffffffff;
          FUN_100171ce();
          pcVar2 = local_2c + 0x10;
        }
        local_18 = 0xffffffff;
        FUN_100171ce();
        local_18 = 0xb2;
        FUN_10051ba0();
      }
      FUN_1006b168(&local_168);
      local_18 = 0xffffffff;
      FUN_1006ae4c();
      FUN_10001fee();
    }
    DAT_1039d2f0 = 0x3e3851ec;
    local_18 = 0x30;
    pcVar2 = (char *)FUN_10013d2e("dataStates");
    if (*pcVar2 == '\x02') {
      FUN_10001f66("dataStates");
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_128 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_138 = 0;
      local_134 = 0;
      local_150 = 0;
      uStack_14c = 0;
      uStack_148 = 0;
      ppcStack_144 = (char **)0x0;
      local_18 = 0xa5;
      FUN_1002218a();
      local_18 = 0xa8;
      local_180 = (char *)FUN_10013d2e("dataStates");
      local_f4 = 0;
      local_f8 = (char *)0x0;
      local_f0 = 0x80000000;
      cVar1 = *local_180;
      if (cVar1 == '\0') {
        local_f0 = 1;
      }
      else if (cVar1 == '\x02') {
        local_f4 = **(undefined4 **)(local_180 + 8);
      }
      else if (cVar1 == '\x01') {
        local_f8 = *(char **)**(undefined4 **)(local_180 + 8);
      }
      else {
        local_f0 = 0;
      }
      local_178 = 0;
      local_17c = 0;
      local_174 = 0x80000000;
      local_fc = local_180;
      if (*local_180 == '\x02') {
        local_178 = *(undefined4 *)(*(int *)(local_180 + 8) + 4);
      }
      else if (*local_180 == '\x01') {
        local_17c = **(undefined4 **)(local_180 + 8);
      }
      else {
        local_174 = 1;
      }
      while (cVar1 = FUN_10051c02(&local_180), cVar1 == '\0') {
        local_184 = (char *)FUN_100dc366();
        local_118 = "name";
        local_114 = (char *)0x4;
        FUN_100db8d0(&local_118);
        local_18 = 0xa9;
        FUN_1015d38a();
        local_18 = 0xffffffff;
        FUN_10001fee();
        local_118 = "message1";
        local_114 = (char *)0x8;
        local_18 = 0xa8;
        FUN_100db8d0(&local_118);
        local_18 = 0xaa;
        FUN_1015d38a();
        local_18 = 0xffffffff;
        FUN_10001fee();
        local_118 = "message2";
        local_114 = (char *)0x8;
        local_18 = 0xa8;
        FUN_100db8d0(&local_118);
        local_18 = 0xab;
        FUN_1015d38a();
        local_18 = 0xffffffff;
        FUN_10001fee();
        local_118 = "message3";
        local_114 = (char *)0x8;
        local_18 = 0xa8;
        FUN_100db8d0(&local_118);
        local_18 = 0xac;
        FUN_1015d38a();
        local_18 = 0xffffffff;
        FUN_10001fee();
        local_118 = "message4";
        local_114 = (char *)0x8;
        local_18 = 0xa8;
        FUN_100db8d0(&local_118);
        local_18 = 0xad;
        FUN_1015d38a();
        local_18 = 0xffffffff;
        FUN_10001fee();
        local_18 = 0xa8;
        FUN_10051ba0();
      }
      FUN_1006b168(&local_168);
      local_18 = 0xffffffff;
      FUN_1006ae4c();
      FUN_10001fee();
    }
    DAT_1039d2f0 = 0x3e428f5c;
    local_18 = 0x30;
    pcVar2 = (char *)FUN_10013d2e("dataAnimations");
    if (*pcVar2 == '\x02') {
      FUN_10001f66("dataAnimations");
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_128 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_138 = 0;
      local_134 = 0;
      local_150 = 0;
      uStack_14c = 0;
      uStack_148 = 0;
      ppcStack_144 = (char **)0x0;
      local_18 = 0x9f;
      FUN_1002218a();
      local_18 = 0xa2;
      local_180 = (char *)FUN_10013d2e("dataAnimations");
      local_f4 = 0;
      local_f8 = (char *)0x0;
      local_f0 = 0x80000000;
      cVar1 = *local_180;
      if (cVar1 == '\0') {
        local_f0 = 1;
      }
      else if (cVar1 == '\x02') {
        local_f4 = **(undefined4 **)(local_180 + 8);
      }
      else if (cVar1 == '\x01') {
        local_f8 = *(char **)**(undefined4 **)(local_180 + 8);
      }
      else {
        local_f0 = 0;
      }
      local_178 = 0;
      local_17c = 0;
      local_174 = 0x80000000;
      local_fc = local_180;
      if (*local_180 == '\x02') {
        local_178 = *(undefined4 *)(*(int *)(local_180 + 8) + 4);
      }
      else if (*local_180 == '\x01') {
        local_17c = **(undefined4 **)(local_180 + 8);
      }
      else {
        local_174 = 1;
      }
      while (cVar1 = FUN_10051c02(&local_180), cVar1 == '\0') {
        FUN_100dc366();
        local_118 = "name";
        local_114 = (char *)0x4;
        FUN_100db8d0(&local_118);
        local_18 = 0xa3;
        FUN_1015d38a();
        local_18 = 0xffffffff;
        FUN_10001fee();
        local_18 = 0xa2;
        FUN_10051ba0();
      }
      FUN_1006b168(&local_168);
      local_18 = 0xffffffff;
      FUN_1006ae4c();
      FUN_10001fee();
    }
    DAT_1039d2f0 = 0x3e4ccccd;
    local_18 = 0x30;
    pcVar2 = (char *)FUN_10013d2e("dataTilesets");
    if (*pcVar2 == '\x02') {
      FUN_10001f66("dataTilesets");
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_128 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_138 = 0;
      local_134 = 0;
      local_150 = 0;
      uStack_14c = 0;
      uStack_148 = 0;
      ppcStack_144 = (char **)0x0;
      local_18 = 0x99;
      FUN_1002218a();
      local_18 = 0x9c;
      local_180 = (char *)FUN_10013d2e("dataTilesets");
      local_f4 = 0;
      local_f8 = (char *)0x0;
      local_f0 = 0x80000000;
      cVar1 = *local_180;
      if (cVar1 == '\0') {
        local_f0 = 1;
      }
      else if (cVar1 == '\x02') {
        local_f4 = **(undefined4 **)(local_180 + 8);
      }
      else if (cVar1 == '\x01') {
        local_f8 = *(char **)**(undefined4 **)(local_180 + 8);
      }
      else {
        local_f0 = 0;
      }
      local_178 = 0;
      local_17c = 0;
      local_174 = 0x80000000;
      local_fc = local_180;
      if (*local_180 == '\x02') {
        local_178 = *(undefined4 *)(*(int *)(local_180 + 8) + 4);
      }
      else if (*local_180 == '\x01') {
        local_17c = **(undefined4 **)(local_180 + 8);
      }
      else {
        local_174 = 1;
      }
      while (cVar1 = FUN_10051c02(&local_180), cVar1 == '\0') {
        FUN_100dc366();
        local_118 = "name";
        local_114 = (char *)0x4;
        FUN_100db8d0(&local_118);
        local_18 = 0x9d;
        FUN_1015d38a();
        local_18 = 0xffffffff;
        FUN_10001fee();
        local_18 = 0x9c;
        FUN_10051ba0();
      }
      FUN_1006b168(&local_168);
      local_18 = 0xffffffff;
      FUN_1006ae4c();
      FUN_10001fee();
    }
    DAT_1039d2f0 = 0x3e570a3d;
    local_18 = 0x30;
    pcVar2 = (char *)FUN_10013d2e("dataCommonEvents");
    if (*pcVar2 == '\x02') {
      FUN_10001f66("dataCommonEvents");
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_128 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_138 = 0;
      local_134 = 0;
      local_150 = 0;
      uStack_14c = 0;
      uStack_148 = 0;
      ppcStack_144 = (char **)0x0;
      local_18 = 0x8e;
      FUN_1002218a();
      local_18 = 0x91;
      local_180 = (char *)FUN_10013d2e("dataCommonEvents");
      local_f4 = 0;
      local_f8 = (char *)0x0;
      local_f0 = 0x80000000;
      cVar1 = *local_180;
      if (cVar1 == '\0') {
        local_f0 = 1;
      }
      else if (cVar1 == '\x02') {
        local_f4 = **(undefined4 **)(local_180 + 8);
      }
      else if (cVar1 == '\x01') {
        local_f8 = *(char **)**(undefined4 **)(local_180 + 8);
      }
      else {
        local_f0 = 0;
      }
      local_178 = 0;
      local_17c = 0;
      local_174 = 0x80000000;
      local_fc = local_180;
      if (*local_180 == '\x02') {
        local_178 = *(undefined4 *)(*(int *)(local_180 + 8) + 4);
      }
      else if (*local_180 == '\x01') {
        local_17c = **(undefined4 **)(local_180 + 8);
      }
      else {
        local_174 = 1;
      }
      while (cVar1 = FUN_10051c02(&local_180), cVar1 == '\0') {
        local_184 = (char *)FUN_100dc366();
        local_118 = "name";
        local_114 = (char *)0x4;
        FUN_100db8d0(&local_118);
        local_18 = 0x97;
        FUN_1015d38a();
        local_18 = 0xffffffff;
        FUN_10001fee();
        local_b8 = "list";
        local_b4 = 4;
        local_18 = 0x91;
        FUN_100d8f98(&local_b8);
        local_40 = local_114;
        pcVar2 = local_118;
        while (pcVar2 != local_40) {
          local_b8 = "parameters";
          local_b4 = 10;
          local_18 = 0x93;
          local_100 = pcVar2;
          FUN_100d8f98(&local_b8);
          local_11c = local_68;
          pcVar2 = local_6c;
          while (pcVar2 != local_11c) {
            local_4c = (char *)0x0;
            local_48 = (char *)0x0;
            local_18 = 0x95;
            local_184 = pcVar2;
            FUN_100db8d0(&local_4c);
            local_18 = 0x96;
            FUN_1015d38a();
            local_18 = 0xffffffff;
            FUN_10001fee();
            pcVar2 = local_184 + 0x10;
          }
          local_18 = 0xffffffff;
          FUN_100171ce();
          pcVar2 = local_100 + 0x10;
        }
        local_18 = 0xffffffff;
        FUN_100171ce();
        local_18 = 0x91;
        FUN_10051ba0();
      }
      FUN_1006b168(&local_168);
      local_18 = 0xffffffff;
      FUN_1006ae4c();
      FUN_10001fee();
    }
    DAT_1039d2f0 = 0x3e800000;
    local_18 = 0x30;
    pcVar2 = (char *)FUN_10013d2e("dataSystem");
    if (*pcVar2 == '\x01') {
      local_100 = (char *)FUN_10013d2e("dataSystem");
      FUN_10001f66("dataSystem/armorTypes");
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_128 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_138 = 0;
      local_134 = 0;
      local_150 = 0;
      uStack_14c = 0;
      uStack_148 = 0;
      ppcStack_144 = (char **)0x0;
      local_18 = 0x4a;
      FUN_1002218a();
      local_18 = 0x45;
      local_b8 = "armorTypes";
      local_b4 = 10;
      FUN_100d8f98(&local_b8);
      local_11c = local_f8;
      pcVar2 = local_fc;
      while (pcVar2 != local_11c) {
        local_180 = (char *)0x0;
        local_17c = 0;
        local_18 = 0x47;
        local_184 = pcVar2;
        FUN_100db8d0(&local_180);
        local_18 = 0x48;
        FUN_1015d38a();
        local_18 = 0xffffffff;
        FUN_10001fee();
        pcVar2 = local_184 + 0x10;
      }
      local_18 = 0xffffffff;
      FUN_100171ce();
      local_18 = 0x45;
      FUN_1006b168(&local_168);
      local_18 = 0xffffffff;
      FUN_1006ae4c();
      FUN_10001fee();
      local_18 = 0x30;
      FUN_10001f66("dataSystem/equipTypes");
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_128 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_138 = 0;
      local_134 = 0;
      local_150 = 0;
      uStack_14c = 0;
      uStack_148 = 0;
      ppcStack_144 = (char **)0x0;
      local_18 = 0x52;
      FUN_1002218a();
      local_18 = 0x4d;
      local_b8 = "equipTypes";
      local_b4 = 10;
      FUN_100d8f98(&local_b8);
      local_11c = local_f8;
      pcVar2 = local_fc;
      while (pcVar2 != local_11c) {
        local_180 = (char *)0x0;
        local_17c = 0;
        local_18 = 0x4f;
        local_184 = pcVar2;
        FUN_100db8d0(&local_180);
        local_18 = 0x50;
        FUN_1015d38a();
        local_18 = 0xffffffff;
        FUN_10001fee();
        pcVar2 = local_184 + 0x10;
      }
      local_18 = 0xffffffff;
      FUN_100171ce();
      local_18 = 0x4d;
      FUN_1006b168(&local_168);
      local_18 = 0xffffffff;
      FUN_1006ae4c();
      FUN_10001fee();
      local_18 = 0x30;
      FUN_10001f66("dataSystem/skillTypes");
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_128 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_138 = 0;
      local_134 = 0;
      local_150 = 0;
      uStack_14c = 0;
      uStack_148 = 0;
      ppcStack_144 = (char **)0x0;
      local_18 = 0x5a;
      FUN_1002218a();
      local_18 = 0x55;
      local_b8 = "skillTypes";
      local_b4 = 10;
      FUN_100d8f98(&local_b8);
      local_11c = local_f8;
      pcVar2 = local_fc;
      while (pcVar2 != local_11c) {
        local_180 = (char *)0x0;
        local_17c = 0;
        local_18 = 0x57;
        local_184 = pcVar2;
        FUN_100db8d0(&local_180);
        local_18 = 0x58;
        FUN_1015d38a();
        local_18 = 0xffffffff;
        FUN_10001fee();
        pcVar2 = local_184 + 0x10;
      }
      local_18 = 0xffffffff;
      FUN_100171ce();
      local_18 = 0x55;
      FUN_1006b168(&local_168);
      local_18 = 0xffffffff;
      FUN_1006ae4c();
      FUN_10001fee();
      local_18 = 0x30;
      FUN_10001f66("dataSystem/weaponTypes");
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_128 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_138 = 0;
      local_134 = 0;
      local_150 = 0;
      uStack_14c = 0;
      uStack_148 = 0;
      ppcStack_144 = (char **)0x0;
      local_18 = 0x62;
      FUN_1002218a();
      local_18 = 0x5d;
      local_b8 = "weaponTypes";
      local_b4 = 0xb;
      FUN_100d8f98(&local_b8);
      local_11c = local_f8;
      pcVar2 = local_fc;
      while (pcVar2 != local_11c) {
        local_180 = (char *)0x0;
        local_17c = 0;
        local_18 = 0x5f;
        local_184 = pcVar2;
        FUN_100db8d0(&local_180);
        local_18 = 0x60;
        FUN_1015d38a();
        local_18 = 0xffffffff;
        FUN_10001fee();
        pcVar2 = local_184 + 0x10;
      }
      local_18 = 0xffffffff;
      FUN_100171ce();
      local_18 = 0x5d;
      FUN_1006b168(&local_168);
      local_18 = 0xffffffff;
      FUN_1006ae4c();
      FUN_10001fee();
      local_18 = 0x30;
      FUN_10001f66("dataSystem/switches");
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_128 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_138 = 0;
      local_134 = 0;
      local_150 = 0;
      uStack_14c = 0;
      uStack_148 = 0;
      ppcStack_144 = (char **)0x0;
      local_18 = 0x6a;
      FUN_1002218a();
      local_18 = 0x65;
      local_b8 = "switches";
      local_b4 = 8;
      FUN_100d8f98(&local_b8);
      local_11c = local_f8;
      pcVar2 = local_fc;
      while (pcVar2 != local_11c) {
        local_180 = (char *)0x0;
        local_17c = 0;
        local_18 = 0x67;
        local_184 = pcVar2;
        FUN_100db8d0(&local_180);
        local_18 = 0x68;
        FUN_1015d38a();
        local_18 = 0xffffffff;
        FUN_10001fee();
        pcVar2 = local_184 + 0x10;
      }
      local_18 = 0xffffffff;
      FUN_100171ce();
      local_18 = 0x65;
      FUN_1006b168(&local_168);
      local_18 = 0xffffffff;
      FUN_1006ae4c();
      FUN_10001fee();
      local_18 = 0x30;
      FUN_10001f66("dataSystem/variables");
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_128 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_138 = 0;
      local_134 = 0;
      local_150 = 0;
      uStack_14c = 0;
      uStack_148 = 0;
      ppcStack_144 = (char **)0x0;
      local_18 = 0x72;
      FUN_1002218a();
      local_18 = 0x6d;
      local_b8 = "variables";
      local_b4 = 9;
      FUN_100d8f98(&local_b8);
      local_11c = local_f8;
      pcVar2 = local_fc;
      while (pcVar2 != local_11c) {
        local_180 = (char *)0x0;
        local_17c = 0;
        local_18 = 0x6f;
        local_184 = pcVar2;
        FUN_100db8d0(&local_180);
        local_18 = 0x70;
        FUN_1015d38a();
        local_18 = 0xffffffff;
        FUN_10001fee();
        pcVar2 = local_184 + 0x10;
      }
      local_18 = 0xffffffff;
      FUN_100171ce();
      local_18 = 0x6d;
      FUN_1006b168(&local_168);
      local_18 = 0xffffffff;
      FUN_1006ae4c();
      FUN_10001fee();
      local_18 = 0x30;
      FUN_10001f66("dataSystem/gameTitle");
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_128 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_138 = 0;
      local_134 = 0;
      local_150 = 0;
      uStack_14c = 0;
      uStack_148 = 0;
      ppcStack_144 = (char **)0x0;
      local_18 = 0x78;
      FUN_1002218a();
      local_18 = 0x75;
      local_fc = "gameTitle";
      local_f8 = (char *)0x9;
      FUN_100db8d0(&local_fc);
      local_18 = 0x76;
      FUN_1015d38a();
      local_18 = 0xffffffff;
      FUN_10001fee();
      local_18 = 0x75;
      FUN_1006b168(&local_168);
      local_18 = 0xffffffff;
      FUN_1006ae4c();
      FUN_10001fee();
      local_18 = 0x30;
      FUN_10001f66("dataSystem/currencyUnit");
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_128 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_138 = 0;
      local_134 = 0;
      local_150 = 0;
      uStack_14c = 0;
      uStack_148 = 0;
      ppcStack_144 = (char **)0x0;
      local_18 = 0x7e;
      FUN_1002218a();
      local_18 = 0x7b;
      local_fc = "currencyUnit";
      local_f8 = (char *)0xc;
      FUN_100db8d0(&local_fc);
      local_18 = 0x7c;
      FUN_1015d38a();
      local_18 = 0xffffffff;
      FUN_10001fee();
      local_18 = 0x7b;
      FUN_1006b168(&local_168);
      local_18 = 0xffffffff;
      FUN_1006ae4c();
      FUN_10001fee();
      local_18 = 0x30;
      FUN_10001f66("dataSystem/terms/");
      local_18 = 0x81;
      local_168 = "terms";
      local_164 = 5;
      FUN_1015d555(&local_168);
      local_11c = local_6c;
      local_38 = *(char **)local_6c;
      while (local_38 != local_11c) {
        local_18 = 0x83;
        local_184 = local_38;
        FUN_1015d68d(&local_fc,&local_180,local_38 + 0x10);
        uStack_c4 = 0;
        uStack_c0 = 0;
        uStack_bc = 0;
        uStack_d4 = 0;
        uStack_d0 = 0;
        uStack_cc = 0;
        local_c8 = 0;
        local_e4 = 0;
        uStack_e0 = 0;
        uStack_dc = 0;
        uStack_d8 = 0;
        local_18 = 0x85;
        FUN_1002218a();
        local_18 = 0x88;
        pcVar2 = local_184 + 0x28;
        if (*pcVar2 == '\x01') {
          local_3c = pcVar2;
          FUN_100dba9a(&local_168);
          local_18 = 0x89;
          FUN_100dbb2e(&local_b8);
          local_18 = 0x8a;
          while (cVar1 = FUN_10051c02(&local_b8), cVar1 == '\0') {
            local_4c = (char *)0x0;
            local_48 = (char *)0x0;
            FUN_100dc366();
            FUN_100db8d0(&local_4c);
            local_18 = 0x8b;
            FUN_1015d38a();
            local_18 = 0xffffffff;
            FUN_10001fee();
            local_18 = 0x8a;
            FUN_10051ba0();
            local_158 = local_158 + 1;
          }
          local_18 = 0xffffffff;
          FUN_100dbbc6();
          FUN_100dbbc6();
        }
        else if (*pcVar2 == '\x02') {
          local_b4 = 0;
          local_ac = 0x80000000;
          local_b0 = **(undefined4 **)(local_184 + 0x30);
          local_114 = (char *)0x0;
          local_10c = 0x80000000;
          local_110 = (*(undefined4 **)(local_184 + 0x30))[1];
          local_118 = pcVar2;
          local_b8 = pcVar2;
          while (cVar1 = FUN_10051c02(&local_118), cVar1 == '\0') {
            FUN_100dc366();
            local_4c = (char *)0x0;
            local_48 = (char *)0x0;
            FUN_100db8d0(&local_4c);
            local_18 = 0x8c;
            FUN_1015d38a();
            local_18 = 0xffffffff;
            FUN_10001fee();
            local_18 = 0x88;
            FUN_10051ba0();
          }
        }
        local_18 = 0x88;
        FUN_1006b168(&local_fc);
        local_18 = 0xffffffff;
        FUN_1006ae4c();
        FUN_10001fee();
        FUN_10016fb8();
      }
      local_18 = 0xffffffff;
      FUN_10016fee(&local_6c,*(undefined4 *)(local_6c + 4));
      FUN_102283a0(local_6c,0x38);
      FUN_10001fee();
    }
    DAT_1039d2f0 = 0x3e8a3d71;
    local_18 = 0x30;
    pcVar2 = (char *)FUN_10013d2e("plugins");
    if (*pcVar2 == '\x02') {
      FUN_10001f66("plugins");
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_128 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_138 = 0;
      local_134 = 0;
      local_150 = 0;
      uStack_14c = 0;
      uStack_148 = 0;
      ppcStack_144 = (char **)0x0;
      local_18 = 0x3e;
      FUN_1002218a();
      local_18 = 0x41;
      local_180 = (char *)FUN_10013d2e("plugins");
      local_f4 = 0;
      local_f8 = (char *)0x0;
      local_f0 = 0x80000000;
      cVar1 = *local_180;
      if (cVar1 == '\0') {
        local_f0 = 1;
      }
      else if (cVar1 == '\x02') {
        local_f4 = **(undefined4 **)(local_180 + 8);
      }
      else if (cVar1 == '\x01') {
        local_f8 = *(char **)**(undefined4 **)(local_180 + 8);
      }
      else {
        local_f0 = 0;
      }
      local_178 = 0;
      local_17c = 0;
      local_174 = 0x80000000;
      local_fc = local_180;
      if (*local_180 == '\x02') {
        local_178 = *(undefined4 *)(*(int *)(local_180 + 8) + 4);
      }
      else if (*local_180 == '\x01') {
        local_17c = **(undefined4 **)(local_180 + 8);
      }
      else {
        local_174 = 1;
      }
      while (cVar1 = FUN_10051c02(&local_180), cVar1 == '\0') {
        FUN_100dc366();
        local_b8 = "parameters";
        local_b4 = 10;
        FUN_1015d555(&local_b8);
        local_184 = local_118;
        local_4c = *(char **)local_118;
        while (local_4c != local_184) {
          local_6c = (char *)0x0;
          local_68 = (char *)0x0;
          local_18 = 0x43;
          FUN_100db8d0(&local_6c);
          local_18 = 0x44;
          FUN_1015d38a();
          local_18 = 0xffffffff;
          FUN_10001fee();
          FUN_10016fb8();
        }
        local_18 = 0xffffffff;
        FUN_10016fee(&local_118,*(undefined4 *)(local_118 + 4));
        FUN_102283a0(local_118,0x38);
        local_18 = 0x41;
        FUN_10051ba0();
      }
      FUN_1006b168(&local_168);
      local_18 = 0xffffffff;
      FUN_1006ae4c();
      FUN_10001fee();
    }
    DAT_1039d2f0 = 0x3e99999a;
    local_118 = (char *)0x0;
    local_114 = (char *)0x0;
    local_110 = 0;
    local_18 = 0x31;
    pcVar2 = (char *)FUN_10013d2e("dataMapInfos");
    if (*pcVar2 == '\x02') {
      FUN_10001f66("dataMapInfos");
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_128 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_138 = 0;
      local_134 = 0;
      local_150 = 0;
      uStack_14c = 0;
      uStack_148 = 0;
      ppcStack_144 = (char **)0x0;
      local_18 = 0x37;
      FUN_1002218a();
      local_18 = 0x3a;
      local_180 = (char *)FUN_10013d2e("dataMapInfos");
      local_f4 = 0;
      local_f8 = (char *)0x0;
      local_f0 = 0x80000000;
      cVar1 = *local_180;
      if (cVar1 == '\0') {
        local_f0 = 1;
      }
      else if (cVar1 == '\x02') {
        local_f4 = **(undefined4 **)(local_180 + 8);
      }
      else if (cVar1 == '\x01') {
        local_f8 = *(char **)**(undefined4 **)(local_180 + 8);
      }
      else {
        local_f0 = 0;
      }
      local_178 = 0;
      local_17c = 0;
      local_174 = 0x80000000;
      local_fc = local_180;
      if (*local_180 == '\x02') {
        local_178 = *(undefined4 *)(*(int *)(local_180 + 8) + 4);
      }
      else if (*local_180 == '\x01') {
        local_17c = **(undefined4 **)(local_180 + 8);
      }
      else {
        local_174 = 1;
      }
      while (cVar1 = FUN_10051c02(&local_180), cVar1 == '\0') {
        pcVar2 = (char *)FUN_100dc366();
        if (*pcVar2 == '\x01') {
          local_6c = "id";
          local_68 = (char *)0x2;
          local_184 = pcVar2;
          FUN_100dafc2(&local_6c);
          local_18 = 0x3b;
          FUN_1015e442(&local_b8);
          local_18 = 0xffffffff;
          FUN_10013efc();
          local_6c = "name";
          local_68 = (char *)0x4;
          local_18 = 0x3a;
          FUN_100db8d0(&local_6c);
          local_18 = 0x3c;
          FUN_1015d38a();
          local_18 = 0xffffffff;
          FUN_10001fee();
        }
        local_18 = 0x3a;
        FUN_10051ba0();
      }
      FUN_1006b168(&local_168);
      local_18 = 0xffffffff;
      FUN_1006ae4c();
      FUN_10001fee();
    }
    DAT_1039d2f0 = 0x3eb33333;
    local_b8 = (char *)0x0;
    local_b4 = 0;
    local_b0 = 0;
    local_18 = 0x31;
    FUN_10061af0((int)local_114 - (int)local_118 >> 2,&local_118,&local_114);
    ppcStack_144 = (char **)0x0;
    local_18 = 0x34;
    FUN_1015e628();
    ppcStack_144 = &local_168;
    local_18 = 0x35;
    FUN_100148b1(&local_168);
    local_18 = 0xffffffff;
    if (ppcStack_144 != (char **)0x0) {
      (**(code **)(*ppcStack_144 + 0x10))(ppcStack_144 != &local_168);
      ppcStack_144 = (char **)0x0;
    }
    local_18 = 0xffffffff;
    FUN_10004eae();
    FUN_10004eae();
  }
  else {
    FUN_1015d782();
  }
  local_18 = 0xffffffff;
  FUN_10013efc();
  ExceptionList = local_20;
  return;
}

