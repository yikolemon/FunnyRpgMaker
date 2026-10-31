/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10157f2c */

void thunk_FUN_10157f38(void)

{
  char cVar1;
  char *pcVar2;
  undefined1 auStack_188 [4];
  char *pcStack_184;
  char *pcStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  char *pcStack_168;
  undefined4 uStack_164;
  int iStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  char **ppcStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  char *pcStack_11c;
  char *pcStack_118;
  char *pcStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  char *pcStack_100;
  char *pcStack_fc;
  char *pcStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  char *pcStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  char *pcStack_6c;
  char *pcStack_68;
  char acStack_60 [20];
  char *pcStack_4c;
  char *pcStack_48;
  char *pcStack_40;
  char *pcStack_3c;
  char *pcStack_38;
  undefined4 uStack_34;
  char *pcStack_30;
  char *pcStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined4 uStack_18;
  
  puStack_28 = &stack0xfffffffc;
  puStack_24 = auStack_188;
  uStack_18 = 0xffffffff;
  puStack_1c = &LAB_1015f540;
  pvStack_20 = ExceptionList;
  ExceptionList = &pvStack_20;
  FUN_10001f66(
              "\n({\n    dataActors: $dataActors,\n    dataClasses: $dataClasses,\n    dataSkills: $dataSkills,\n    dataItems: $dataItems,\n    dataWeapons: $dataWeapons,\n    dataArmors: $dataArmors,\n    dataEnemies: $dataEnemies,\n    dataTroops: $dataTroops,\n    dataStates: $dataStates,\n    dataAnimations: $dataAnimations,\n    dataTilesets: $dataTilesets,\n    dataCommonEvents: $dataCommonEvents,\n    dataSystem: $dataSystem,\n    plugins: $plugins,\n    dataMapInfos: $dataMapInfos,\n})\n"
              );
  uStack_18 = 0;
  FUN_100145e4(acStack_60,&pcStack_168);
  uStack_18 = 0xffffffff;
  FUN_10001fee();
  uStack_18 = 0x30;
  if (acStack_60[0] == '\x01') {
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
      uStack_134 = 0;
      uStack_150 = 0;
      uStack_14c = 0;
      uStack_148 = 0;
      ppcStack_144 = (char **)0x0;
      uStack_18 = 0xe5;
      FUN_1002218a();
      uStack_18 = 0xe8;
      pcStack_180 = (char *)FUN_10013d2e("dataActors");
      uStack_f4 = 0;
      pcStack_f8 = (char *)0x0;
      uStack_f0 = 0x80000000;
      cVar1 = *pcStack_180;
      if (cVar1 == '\0') {
        uStack_f0 = 1;
      }
      else if (cVar1 == '\x02') {
        uStack_f4 = **(undefined4 **)(pcStack_180 + 8);
      }
      else if (cVar1 == '\x01') {
        pcStack_f8 = *(char **)**(undefined4 **)(pcStack_180 + 8);
      }
      else {
        uStack_f0 = 0;
      }
      uStack_178 = 0;
      uStack_17c = 0;
      uStack_174 = 0x80000000;
      pcStack_fc = pcStack_180;
      if (*pcStack_180 == '\x02') {
        uStack_178 = *(undefined4 *)(*(int *)(pcStack_180 + 8) + 4);
      }
      else if (*pcStack_180 == '\x01') {
        uStack_17c = **(undefined4 **)(pcStack_180 + 8);
      }
      else {
        uStack_174 = 1;
      }
      while (cVar1 = FUN_10051c02(&pcStack_180), cVar1 == '\0') {
        FUN_100dc366();
        pcStack_118 = "name";
        pcStack_114 = (char *)0x4;
        FUN_100db8d0(&pcStack_118);
        uStack_18 = 0xe9;
        FUN_1015d38a();
        uStack_18 = 0xffffffff;
        FUN_10001fee();
        uStack_18 = 0xe8;
        FUN_10051ba0();
      }
      FUN_1006b168(&pcStack_168);
      uStack_18 = 0xffffffff;
      FUN_1006ae4c();
      FUN_10001fee();
    }
    DAT_1039d2f0 = 0x3de147ae;
    uStack_18 = 0x30;
    pcVar2 = (char *)FUN_10013d2e("dataClasses");
    if (*pcVar2 == '\x02') {
      FUN_10001f66("dataClasses");
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_128 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_138 = 0;
      uStack_134 = 0;
      uStack_150 = 0;
      uStack_14c = 0;
      uStack_148 = 0;
      ppcStack_144 = (char **)0x0;
      uStack_18 = 0xdf;
      FUN_1002218a();
      uStack_18 = 0xe2;
      pcStack_180 = (char *)FUN_10013d2e("dataClasses");
      uStack_f4 = 0;
      pcStack_f8 = (char *)0x0;
      uStack_f0 = 0x80000000;
      cVar1 = *pcStack_180;
      if (cVar1 == '\0') {
        uStack_f0 = 1;
      }
      else if (cVar1 == '\x02') {
        uStack_f4 = **(undefined4 **)(pcStack_180 + 8);
      }
      else if (cVar1 == '\x01') {
        pcStack_f8 = *(char **)**(undefined4 **)(pcStack_180 + 8);
      }
      else {
        uStack_f0 = 0;
      }
      uStack_178 = 0;
      uStack_17c = 0;
      uStack_174 = 0x80000000;
      pcStack_fc = pcStack_180;
      if (*pcStack_180 == '\x02') {
        uStack_178 = *(undefined4 *)(*(int *)(pcStack_180 + 8) + 4);
      }
      else if (*pcStack_180 == '\x01') {
        uStack_17c = **(undefined4 **)(pcStack_180 + 8);
      }
      else {
        uStack_174 = 1;
      }
      while (cVar1 = FUN_10051c02(&pcStack_180), cVar1 == '\0') {
        FUN_100dc366();
        pcStack_118 = "name";
        pcStack_114 = (char *)0x4;
        FUN_100db8d0(&pcStack_118);
        uStack_18 = 0xe3;
        FUN_1015d38a();
        uStack_18 = 0xffffffff;
        FUN_10001fee();
        uStack_18 = 0xe2;
        FUN_10051ba0();
      }
      FUN_1006b168(&pcStack_168);
      uStack_18 = 0xffffffff;
      FUN_1006ae4c();
      FUN_10001fee();
    }
    DAT_1039d2f0 = 0x3df5c28f;
    uStack_18 = 0x30;
    pcVar2 = (char *)FUN_10013d2e("dataSkills");
    if (*pcVar2 == '\x02') {
      FUN_10001f66("dataSkills");
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_128 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_138 = 0;
      uStack_134 = 0;
      uStack_150 = 0;
      uStack_14c = 0;
      uStack_148 = 0;
      ppcStack_144 = (char **)0x0;
      uStack_18 = 0xd7;
      FUN_1002218a();
      uStack_18 = 0xda;
      pcStack_180 = (char *)FUN_10013d2e("dataSkills");
      uStack_f4 = 0;
      pcStack_f8 = (char *)0x0;
      uStack_f0 = 0x80000000;
      cVar1 = *pcStack_180;
      if (cVar1 == '\0') {
        uStack_f0 = 1;
      }
      else if (cVar1 == '\x02') {
        uStack_f4 = **(undefined4 **)(pcStack_180 + 8);
      }
      else if (cVar1 == '\x01') {
        pcStack_f8 = *(char **)**(undefined4 **)(pcStack_180 + 8);
      }
      else {
        uStack_f0 = 0;
      }
      uStack_178 = 0;
      uStack_17c = 0;
      uStack_174 = 0x80000000;
      pcStack_fc = pcStack_180;
      if (*pcStack_180 == '\x02') {
        uStack_178 = *(undefined4 *)(*(int *)(pcStack_180 + 8) + 4);
      }
      else if (*pcStack_180 == '\x01') {
        uStack_17c = **(undefined4 **)(pcStack_180 + 8);
      }
      else {
        uStack_174 = 1;
      }
      while (cVar1 = FUN_10051c02(&pcStack_180), cVar1 == '\0') {
        pcStack_184 = (char *)FUN_100dc366();
        pcStack_118 = "name";
        pcStack_114 = (char *)0x4;
        FUN_100db8d0(&pcStack_118);
        uStack_18 = 0xdb;
        FUN_1015d38a();
        uStack_18 = 0xffffffff;
        FUN_10001fee();
        pcStack_118 = "message1";
        pcStack_114 = (char *)0x8;
        uStack_18 = 0xda;
        FUN_100db8d0(&pcStack_118);
        uStack_18 = 0xdc;
        FUN_1015d38a();
        uStack_18 = 0xffffffff;
        FUN_10001fee();
        pcStack_118 = "message2";
        pcStack_114 = (char *)0x8;
        uStack_18 = 0xda;
        FUN_100db8d0(&pcStack_118);
        uStack_18 = 0xdd;
        FUN_1015d38a();
        uStack_18 = 0xffffffff;
        FUN_10001fee();
        uStack_18 = 0xda;
        FUN_10051ba0();
      }
      FUN_1006b168(&pcStack_168);
      uStack_18 = 0xffffffff;
      FUN_1006ae4c();
      FUN_10001fee();
    }
    DAT_1039d2f0 = 0x3e051eb8;
    uStack_18 = 0x30;
    pcVar2 = (char *)FUN_10013d2e("dataItems");
    if (*pcVar2 == '\x02') {
      FUN_10001f66("dataItems");
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_128 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_138 = 0;
      uStack_134 = 0;
      uStack_150 = 0;
      uStack_14c = 0;
      uStack_148 = 0;
      ppcStack_144 = (char **)0x0;
      uStack_18 = 0xd0;
      FUN_1002218a();
      uStack_18 = 0xd3;
      pcStack_180 = (char *)FUN_10013d2e("dataItems");
      uStack_f4 = 0;
      pcStack_f8 = (char *)0x0;
      uStack_f0 = 0x80000000;
      cVar1 = *pcStack_180;
      if (cVar1 == '\0') {
        uStack_f0 = 1;
      }
      else if (cVar1 == '\x02') {
        uStack_f4 = **(undefined4 **)(pcStack_180 + 8);
      }
      else if (cVar1 == '\x01') {
        pcStack_f8 = *(char **)**(undefined4 **)(pcStack_180 + 8);
      }
      else {
        uStack_f0 = 0;
      }
      uStack_178 = 0;
      uStack_17c = 0;
      uStack_174 = 0x80000000;
      pcStack_fc = pcStack_180;
      if (*pcStack_180 == '\x02') {
        uStack_178 = *(undefined4 *)(*(int *)(pcStack_180 + 8) + 4);
      }
      else if (*pcStack_180 == '\x01') {
        uStack_17c = **(undefined4 **)(pcStack_180 + 8);
      }
      else {
        uStack_174 = 1;
      }
      while (cVar1 = FUN_10051c02(&pcStack_180), cVar1 == '\0') {
        pcStack_184 = (char *)FUN_100dc366();
        pcStack_118 = "name";
        pcStack_114 = (char *)0x4;
        FUN_100db8d0(&pcStack_118);
        uStack_18 = 0xd4;
        FUN_1015d38a();
        uStack_18 = 0xffffffff;
        FUN_10001fee();
        pcStack_118 = "description";
        pcStack_114 = (char *)0xb;
        uStack_18 = 0xd3;
        FUN_100db8d0(&pcStack_118);
        uStack_18 = 0xd5;
        FUN_1015d38a();
        uStack_18 = 0xffffffff;
        FUN_10001fee();
        uStack_18 = 0xd3;
        FUN_10051ba0();
      }
      FUN_1006b168(&pcStack_168);
      uStack_18 = 0xffffffff;
      FUN_1006ae4c();
      FUN_10001fee();
    }
    DAT_1039d2f0 = 0x3e0f5c29;
    uStack_18 = 0x30;
    pcVar2 = (char *)FUN_10013d2e("dataWeapons");
    if (*pcVar2 == '\x02') {
      FUN_10001f66("dataWeapons");
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_128 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_138 = 0;
      uStack_134 = 0;
      uStack_150 = 0;
      uStack_14c = 0;
      uStack_148 = 0;
      ppcStack_144 = (char **)0x0;
      uStack_18 = 0xc9;
      FUN_1002218a();
      uStack_18 = 0xcc;
      pcStack_180 = (char *)FUN_10013d2e("dataWeapons");
      uStack_f4 = 0;
      pcStack_f8 = (char *)0x0;
      uStack_f0 = 0x80000000;
      cVar1 = *pcStack_180;
      if (cVar1 == '\0') {
        uStack_f0 = 1;
      }
      else if (cVar1 == '\x02') {
        uStack_f4 = **(undefined4 **)(pcStack_180 + 8);
      }
      else if (cVar1 == '\x01') {
        pcStack_f8 = *(char **)**(undefined4 **)(pcStack_180 + 8);
      }
      else {
        uStack_f0 = 0;
      }
      uStack_178 = 0;
      uStack_17c = 0;
      uStack_174 = 0x80000000;
      pcStack_fc = pcStack_180;
      if (*pcStack_180 == '\x02') {
        uStack_178 = *(undefined4 *)(*(int *)(pcStack_180 + 8) + 4);
      }
      else if (*pcStack_180 == '\x01') {
        uStack_17c = **(undefined4 **)(pcStack_180 + 8);
      }
      else {
        uStack_174 = 1;
      }
      while (cVar1 = FUN_10051c02(&pcStack_180), cVar1 == '\0') {
        pcStack_184 = (char *)FUN_100dc366();
        pcStack_118 = "name";
        pcStack_114 = (char *)0x4;
        FUN_100db8d0(&pcStack_118);
        uStack_18 = 0xcd;
        FUN_1015d38a();
        uStack_18 = 0xffffffff;
        FUN_10001fee();
        pcStack_118 = "description";
        pcStack_114 = (char *)0xb;
        uStack_18 = 0xcc;
        FUN_100db8d0(&pcStack_118);
        uStack_18 = 0xce;
        FUN_1015d38a();
        uStack_18 = 0xffffffff;
        FUN_10001fee();
        uStack_18 = 0xcc;
        FUN_10051ba0();
      }
      FUN_1006b168(&pcStack_168);
      uStack_18 = 0xffffffff;
      FUN_1006ae4c();
      FUN_10001fee();
    }
    DAT_1039d2f0 = 0x3e19999a;
    uStack_18 = 0x30;
    pcVar2 = (char *)FUN_10013d2e("dataArmors");
    if (*pcVar2 == '\x02') {
      FUN_10001f66("dataArmors");
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_128 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_138 = 0;
      uStack_134 = 0;
      uStack_150 = 0;
      uStack_14c = 0;
      uStack_148 = 0;
      ppcStack_144 = (char **)0x0;
      uStack_18 = 0xc2;
      FUN_1002218a();
      uStack_18 = 0xc5;
      pcStack_180 = (char *)FUN_10013d2e("dataArmors");
      uStack_f4 = 0;
      pcStack_f8 = (char *)0x0;
      uStack_f0 = 0x80000000;
      cVar1 = *pcStack_180;
      if (cVar1 == '\0') {
        uStack_f0 = 1;
      }
      else if (cVar1 == '\x02') {
        uStack_f4 = **(undefined4 **)(pcStack_180 + 8);
      }
      else if (cVar1 == '\x01') {
        pcStack_f8 = *(char **)**(undefined4 **)(pcStack_180 + 8);
      }
      else {
        uStack_f0 = 0;
      }
      uStack_178 = 0;
      uStack_17c = 0;
      uStack_174 = 0x80000000;
      pcStack_fc = pcStack_180;
      if (*pcStack_180 == '\x02') {
        uStack_178 = *(undefined4 *)(*(int *)(pcStack_180 + 8) + 4);
      }
      else if (*pcStack_180 == '\x01') {
        uStack_17c = **(undefined4 **)(pcStack_180 + 8);
      }
      else {
        uStack_174 = 1;
      }
      while (cVar1 = FUN_10051c02(&pcStack_180), cVar1 == '\0') {
        pcStack_184 = (char *)FUN_100dc366();
        pcStack_118 = "name";
        pcStack_114 = (char *)0x4;
        FUN_100db8d0(&pcStack_118);
        uStack_18 = 0xc6;
        FUN_1015d38a();
        uStack_18 = 0xffffffff;
        FUN_10001fee();
        pcStack_118 = "description";
        pcStack_114 = (char *)0xb;
        uStack_18 = 0xc5;
        FUN_100db8d0(&pcStack_118);
        uStack_18 = 199;
        FUN_1015d38a();
        uStack_18 = 0xffffffff;
        FUN_10001fee();
        uStack_18 = 0xc5;
        FUN_10051ba0();
      }
      FUN_1006b168(&pcStack_168);
      uStack_18 = 0xffffffff;
      FUN_1006ae4c();
      FUN_10001fee();
    }
    DAT_1039d2f0 = 0x3e23d70a;
    uStack_18 = 0x30;
    pcVar2 = (char *)FUN_10013d2e("dataEnemies");
    if (*pcVar2 == '\x02') {
      FUN_10001f66("dataEnemies");
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_128 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_138 = 0;
      uStack_134 = 0;
      uStack_150 = 0;
      uStack_14c = 0;
      uStack_148 = 0;
      ppcStack_144 = (char **)0x0;
      uStack_18 = 0xbc;
      FUN_1002218a();
      uStack_18 = 0xbf;
      pcStack_180 = (char *)FUN_10013d2e("dataEnemies");
      uStack_f4 = 0;
      pcStack_f8 = (char *)0x0;
      uStack_f0 = 0x80000000;
      cVar1 = *pcStack_180;
      if (cVar1 == '\0') {
        uStack_f0 = 1;
      }
      else if (cVar1 == '\x02') {
        uStack_f4 = **(undefined4 **)(pcStack_180 + 8);
      }
      else if (cVar1 == '\x01') {
        pcStack_f8 = *(char **)**(undefined4 **)(pcStack_180 + 8);
      }
      else {
        uStack_f0 = 0;
      }
      uStack_178 = 0;
      uStack_17c = 0;
      uStack_174 = 0x80000000;
      pcStack_fc = pcStack_180;
      if (*pcStack_180 == '\x02') {
        uStack_178 = *(undefined4 *)(*(int *)(pcStack_180 + 8) + 4);
      }
      else if (*pcStack_180 == '\x01') {
        uStack_17c = **(undefined4 **)(pcStack_180 + 8);
      }
      else {
        uStack_174 = 1;
      }
      while (cVar1 = FUN_10051c02(&pcStack_180), cVar1 == '\0') {
        FUN_100dc366();
        pcStack_118 = "name";
        pcStack_114 = (char *)0x4;
        FUN_100db8d0(&pcStack_118);
        uStack_18 = 0xc0;
        FUN_1015d38a();
        uStack_18 = 0xffffffff;
        FUN_10001fee();
        uStack_18 = 0xbf;
        FUN_10051ba0();
      }
      FUN_1006b168(&pcStack_168);
      uStack_18 = 0xffffffff;
      FUN_1006ae4c();
      FUN_10001fee();
    }
    DAT_1039d2f0 = 0x3e2e147b;
    uStack_18 = 0x30;
    pcVar2 = (char *)FUN_10013d2e("dataTroops");
    if (*pcVar2 == '\x02') {
      FUN_10001f66("dataTroops");
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_128 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_138 = 0;
      uStack_134 = 0;
      uStack_150 = 0;
      uStack_14c = 0;
      uStack_148 = 0;
      ppcStack_144 = (char **)0x0;
      uStack_18 = 0xaf;
      FUN_1002218a();
      uStack_18 = 0xb2;
      pcStack_180 = (char *)FUN_10013d2e("dataTroops");
      uStack_f4 = 0;
      pcStack_f8 = (char *)0x0;
      uStack_f0 = 0x80000000;
      cVar1 = *pcStack_180;
      if (cVar1 == '\0') {
        uStack_f0 = 1;
      }
      else if (cVar1 == '\x02') {
        uStack_f4 = **(undefined4 **)(pcStack_180 + 8);
      }
      else if (cVar1 == '\x01') {
        pcStack_f8 = *(char **)**(undefined4 **)(pcStack_180 + 8);
      }
      else {
        uStack_f0 = 0;
      }
      uStack_178 = 0;
      uStack_17c = 0;
      uStack_174 = 0x80000000;
      pcStack_fc = pcStack_180;
      if (*pcStack_180 == '\x02') {
        uStack_178 = *(undefined4 *)(*(int *)(pcStack_180 + 8) + 4);
      }
      else if (*pcStack_180 == '\x01') {
        uStack_17c = **(undefined4 **)(pcStack_180 + 8);
      }
      else {
        uStack_174 = 1;
      }
      while (cVar1 = FUN_10051c02(&pcStack_180), cVar1 == '\0') {
        pcStack_184 = (char *)FUN_100dc366();
        pcStack_118 = "name";
        pcStack_114 = (char *)0x4;
        FUN_100db8d0(&pcStack_118);
        uStack_18 = 0xba;
        FUN_1015d38a();
        uStack_18 = 0xffffffff;
        FUN_10001fee();
        pcStack_b8 = "pages";
        uStack_b4 = 5;
        uStack_18 = 0xb2;
        FUN_100d8f98(&pcStack_b8);
        pcStack_30 = pcStack_114;
        pcVar2 = pcStack_118;
        while (pcVar2 != pcStack_30) {
          pcStack_b8 = "list";
          uStack_b4 = 4;
          uStack_18 = 0xb4;
          pcStack_2c = pcVar2;
          FUN_100d8f98(&pcStack_b8);
          pcStack_40 = pcStack_68;
          pcVar2 = pcStack_6c;
          while (pcVar2 != pcStack_40) {
            pcStack_b8 = "parameters";
            uStack_b4 = 10;
            uStack_18 = 0xb6;
            pcStack_100 = pcVar2;
            FUN_100d8f98(&pcStack_b8);
            pcStack_11c = pcStack_48;
            pcVar2 = pcStack_4c;
            while (pcVar2 != pcStack_11c) {
              pcStack_38 = (char *)0x0;
              uStack_34 = 0;
              uStack_18 = 0xb8;
              pcStack_184 = pcVar2;
              FUN_100db8d0(&pcStack_38);
              uStack_18 = 0xb9;
              FUN_1015d38a();
              uStack_18 = 0xffffffff;
              FUN_10001fee();
              pcVar2 = pcStack_184 + 0x10;
            }
            uStack_18 = 0xffffffff;
            FUN_100171ce();
            pcVar2 = pcStack_100 + 0x10;
          }
          uStack_18 = 0xffffffff;
          FUN_100171ce();
          pcVar2 = pcStack_2c + 0x10;
        }
        uStack_18 = 0xffffffff;
        FUN_100171ce();
        uStack_18 = 0xb2;
        FUN_10051ba0();
      }
      FUN_1006b168(&pcStack_168);
      uStack_18 = 0xffffffff;
      FUN_1006ae4c();
      FUN_10001fee();
    }
    DAT_1039d2f0 = 0x3e3851ec;
    uStack_18 = 0x30;
    pcVar2 = (char *)FUN_10013d2e("dataStates");
    if (*pcVar2 == '\x02') {
      FUN_10001f66("dataStates");
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_128 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_138 = 0;
      uStack_134 = 0;
      uStack_150 = 0;
      uStack_14c = 0;
      uStack_148 = 0;
      ppcStack_144 = (char **)0x0;
      uStack_18 = 0xa5;
      FUN_1002218a();
      uStack_18 = 0xa8;
      pcStack_180 = (char *)FUN_10013d2e("dataStates");
      uStack_f4 = 0;
      pcStack_f8 = (char *)0x0;
      uStack_f0 = 0x80000000;
      cVar1 = *pcStack_180;
      if (cVar1 == '\0') {
        uStack_f0 = 1;
      }
      else if (cVar1 == '\x02') {
        uStack_f4 = **(undefined4 **)(pcStack_180 + 8);
      }
      else if (cVar1 == '\x01') {
        pcStack_f8 = *(char **)**(undefined4 **)(pcStack_180 + 8);
      }
      else {
        uStack_f0 = 0;
      }
      uStack_178 = 0;
      uStack_17c = 0;
      uStack_174 = 0x80000000;
      pcStack_fc = pcStack_180;
      if (*pcStack_180 == '\x02') {
        uStack_178 = *(undefined4 *)(*(int *)(pcStack_180 + 8) + 4);
      }
      else if (*pcStack_180 == '\x01') {
        uStack_17c = **(undefined4 **)(pcStack_180 + 8);
      }
      else {
        uStack_174 = 1;
      }
      while (cVar1 = FUN_10051c02(&pcStack_180), cVar1 == '\0') {
        pcStack_184 = (char *)FUN_100dc366();
        pcStack_118 = "name";
        pcStack_114 = (char *)0x4;
        FUN_100db8d0(&pcStack_118);
        uStack_18 = 0xa9;
        FUN_1015d38a();
        uStack_18 = 0xffffffff;
        FUN_10001fee();
        pcStack_118 = "message1";
        pcStack_114 = (char *)0x8;
        uStack_18 = 0xa8;
        FUN_100db8d0(&pcStack_118);
        uStack_18 = 0xaa;
        FUN_1015d38a();
        uStack_18 = 0xffffffff;
        FUN_10001fee();
        pcStack_118 = "message2";
        pcStack_114 = (char *)0x8;
        uStack_18 = 0xa8;
        FUN_100db8d0(&pcStack_118);
        uStack_18 = 0xab;
        FUN_1015d38a();
        uStack_18 = 0xffffffff;
        FUN_10001fee();
        pcStack_118 = "message3";
        pcStack_114 = (char *)0x8;
        uStack_18 = 0xa8;
        FUN_100db8d0(&pcStack_118);
        uStack_18 = 0xac;
        FUN_1015d38a();
        uStack_18 = 0xffffffff;
        FUN_10001fee();
        pcStack_118 = "message4";
        pcStack_114 = (char *)0x8;
        uStack_18 = 0xa8;
        FUN_100db8d0(&pcStack_118);
        uStack_18 = 0xad;
        FUN_1015d38a();
        uStack_18 = 0xffffffff;
        FUN_10001fee();
        uStack_18 = 0xa8;
        FUN_10051ba0();
      }
      FUN_1006b168(&pcStack_168);
      uStack_18 = 0xffffffff;
      FUN_1006ae4c();
      FUN_10001fee();
    }
    DAT_1039d2f0 = 0x3e428f5c;
    uStack_18 = 0x30;
    pcVar2 = (char *)FUN_10013d2e("dataAnimations");
    if (*pcVar2 == '\x02') {
      FUN_10001f66("dataAnimations");
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_128 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_138 = 0;
      uStack_134 = 0;
      uStack_150 = 0;
      uStack_14c = 0;
      uStack_148 = 0;
      ppcStack_144 = (char **)0x0;
      uStack_18 = 0x9f;
      FUN_1002218a();
      uStack_18 = 0xa2;
      pcStack_180 = (char *)FUN_10013d2e("dataAnimations");
      uStack_f4 = 0;
      pcStack_f8 = (char *)0x0;
      uStack_f0 = 0x80000000;
      cVar1 = *pcStack_180;
      if (cVar1 == '\0') {
        uStack_f0 = 1;
      }
      else if (cVar1 == '\x02') {
        uStack_f4 = **(undefined4 **)(pcStack_180 + 8);
      }
      else if (cVar1 == '\x01') {
        pcStack_f8 = *(char **)**(undefined4 **)(pcStack_180 + 8);
      }
      else {
        uStack_f0 = 0;
      }
      uStack_178 = 0;
      uStack_17c = 0;
      uStack_174 = 0x80000000;
      pcStack_fc = pcStack_180;
      if (*pcStack_180 == '\x02') {
        uStack_178 = *(undefined4 *)(*(int *)(pcStack_180 + 8) + 4);
      }
      else if (*pcStack_180 == '\x01') {
        uStack_17c = **(undefined4 **)(pcStack_180 + 8);
      }
      else {
        uStack_174 = 1;
      }
      while (cVar1 = FUN_10051c02(&pcStack_180), cVar1 == '\0') {
        FUN_100dc366();
        pcStack_118 = "name";
        pcStack_114 = (char *)0x4;
        FUN_100db8d0(&pcStack_118);
        uStack_18 = 0xa3;
        FUN_1015d38a();
        uStack_18 = 0xffffffff;
        FUN_10001fee();
        uStack_18 = 0xa2;
        FUN_10051ba0();
      }
      FUN_1006b168(&pcStack_168);
      uStack_18 = 0xffffffff;
      FUN_1006ae4c();
      FUN_10001fee();
    }
    DAT_1039d2f0 = 0x3e4ccccd;
    uStack_18 = 0x30;
    pcVar2 = (char *)FUN_10013d2e("dataTilesets");
    if (*pcVar2 == '\x02') {
      FUN_10001f66("dataTilesets");
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_128 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_138 = 0;
      uStack_134 = 0;
      uStack_150 = 0;
      uStack_14c = 0;
      uStack_148 = 0;
      ppcStack_144 = (char **)0x0;
      uStack_18 = 0x99;
      FUN_1002218a();
      uStack_18 = 0x9c;
      pcStack_180 = (char *)FUN_10013d2e("dataTilesets");
      uStack_f4 = 0;
      pcStack_f8 = (char *)0x0;
      uStack_f0 = 0x80000000;
      cVar1 = *pcStack_180;
      if (cVar1 == '\0') {
        uStack_f0 = 1;
      }
      else if (cVar1 == '\x02') {
        uStack_f4 = **(undefined4 **)(pcStack_180 + 8);
      }
      else if (cVar1 == '\x01') {
        pcStack_f8 = *(char **)**(undefined4 **)(pcStack_180 + 8);
      }
      else {
        uStack_f0 = 0;
      }
      uStack_178 = 0;
      uStack_17c = 0;
      uStack_174 = 0x80000000;
      pcStack_fc = pcStack_180;
      if (*pcStack_180 == '\x02') {
        uStack_178 = *(undefined4 *)(*(int *)(pcStack_180 + 8) + 4);
      }
      else if (*pcStack_180 == '\x01') {
        uStack_17c = **(undefined4 **)(pcStack_180 + 8);
      }
      else {
        uStack_174 = 1;
      }
      while (cVar1 = FUN_10051c02(&pcStack_180), cVar1 == '\0') {
        FUN_100dc366();
        pcStack_118 = "name";
        pcStack_114 = (char *)0x4;
        FUN_100db8d0(&pcStack_118);
        uStack_18 = 0x9d;
        FUN_1015d38a();
        uStack_18 = 0xffffffff;
        FUN_10001fee();
        uStack_18 = 0x9c;
        FUN_10051ba0();
      }
      FUN_1006b168(&pcStack_168);
      uStack_18 = 0xffffffff;
      FUN_1006ae4c();
      FUN_10001fee();
    }
    DAT_1039d2f0 = 0x3e570a3d;
    uStack_18 = 0x30;
    pcVar2 = (char *)FUN_10013d2e("dataCommonEvents");
    if (*pcVar2 == '\x02') {
      FUN_10001f66("dataCommonEvents");
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_128 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_138 = 0;
      uStack_134 = 0;
      uStack_150 = 0;
      uStack_14c = 0;
      uStack_148 = 0;
      ppcStack_144 = (char **)0x0;
      uStack_18 = 0x8e;
      FUN_1002218a();
      uStack_18 = 0x91;
      pcStack_180 = (char *)FUN_10013d2e("dataCommonEvents");
      uStack_f4 = 0;
      pcStack_f8 = (char *)0x0;
      uStack_f0 = 0x80000000;
      cVar1 = *pcStack_180;
      if (cVar1 == '\0') {
        uStack_f0 = 1;
      }
      else if (cVar1 == '\x02') {
        uStack_f4 = **(undefined4 **)(pcStack_180 + 8);
      }
      else if (cVar1 == '\x01') {
        pcStack_f8 = *(char **)**(undefined4 **)(pcStack_180 + 8);
      }
      else {
        uStack_f0 = 0;
      }
      uStack_178 = 0;
      uStack_17c = 0;
      uStack_174 = 0x80000000;
      pcStack_fc = pcStack_180;
      if (*pcStack_180 == '\x02') {
        uStack_178 = *(undefined4 *)(*(int *)(pcStack_180 + 8) + 4);
      }
      else if (*pcStack_180 == '\x01') {
        uStack_17c = **(undefined4 **)(pcStack_180 + 8);
      }
      else {
        uStack_174 = 1;
      }
      while (cVar1 = FUN_10051c02(&pcStack_180), cVar1 == '\0') {
        pcStack_184 = (char *)FUN_100dc366();
        pcStack_118 = "name";
        pcStack_114 = (char *)0x4;
        FUN_100db8d0(&pcStack_118);
        uStack_18 = 0x97;
        FUN_1015d38a();
        uStack_18 = 0xffffffff;
        FUN_10001fee();
        pcStack_b8 = "list";
        uStack_b4 = 4;
        uStack_18 = 0x91;
        FUN_100d8f98(&pcStack_b8);
        pcStack_40 = pcStack_114;
        pcVar2 = pcStack_118;
        while (pcVar2 != pcStack_40) {
          pcStack_b8 = "parameters";
          uStack_b4 = 10;
          uStack_18 = 0x93;
          pcStack_100 = pcVar2;
          FUN_100d8f98(&pcStack_b8);
          pcStack_11c = pcStack_68;
          pcVar2 = pcStack_6c;
          while (pcVar2 != pcStack_11c) {
            pcStack_4c = (char *)0x0;
            pcStack_48 = (char *)0x0;
            uStack_18 = 0x95;
            pcStack_184 = pcVar2;
            FUN_100db8d0(&pcStack_4c);
            uStack_18 = 0x96;
            FUN_1015d38a();
            uStack_18 = 0xffffffff;
            FUN_10001fee();
            pcVar2 = pcStack_184 + 0x10;
          }
          uStack_18 = 0xffffffff;
          FUN_100171ce();
          pcVar2 = pcStack_100 + 0x10;
        }
        uStack_18 = 0xffffffff;
        FUN_100171ce();
        uStack_18 = 0x91;
        FUN_10051ba0();
      }
      FUN_1006b168(&pcStack_168);
      uStack_18 = 0xffffffff;
      FUN_1006ae4c();
      FUN_10001fee();
    }
    DAT_1039d2f0 = 0x3e800000;
    uStack_18 = 0x30;
    pcVar2 = (char *)FUN_10013d2e("dataSystem");
    if (*pcVar2 == '\x01') {
      pcStack_100 = (char *)FUN_10013d2e("dataSystem");
      FUN_10001f66("dataSystem/armorTypes");
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_128 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_138 = 0;
      uStack_134 = 0;
      uStack_150 = 0;
      uStack_14c = 0;
      uStack_148 = 0;
      ppcStack_144 = (char **)0x0;
      uStack_18 = 0x4a;
      FUN_1002218a();
      uStack_18 = 0x45;
      pcStack_b8 = "armorTypes";
      uStack_b4 = 10;
      FUN_100d8f98(&pcStack_b8);
      pcStack_11c = pcStack_f8;
      pcVar2 = pcStack_fc;
      while (pcVar2 != pcStack_11c) {
        pcStack_180 = (char *)0x0;
        uStack_17c = 0;
        uStack_18 = 0x47;
        pcStack_184 = pcVar2;
        FUN_100db8d0(&pcStack_180);
        uStack_18 = 0x48;
        FUN_1015d38a();
        uStack_18 = 0xffffffff;
        FUN_10001fee();
        pcVar2 = pcStack_184 + 0x10;
      }
      uStack_18 = 0xffffffff;
      FUN_100171ce();
      uStack_18 = 0x45;
      FUN_1006b168(&pcStack_168);
      uStack_18 = 0xffffffff;
      FUN_1006ae4c();
      FUN_10001fee();
      uStack_18 = 0x30;
      FUN_10001f66("dataSystem/equipTypes");
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_128 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_138 = 0;
      uStack_134 = 0;
      uStack_150 = 0;
      uStack_14c = 0;
      uStack_148 = 0;
      ppcStack_144 = (char **)0x0;
      uStack_18 = 0x52;
      FUN_1002218a();
      uStack_18 = 0x4d;
      pcStack_b8 = "equipTypes";
      uStack_b4 = 10;
      FUN_100d8f98(&pcStack_b8);
      pcStack_11c = pcStack_f8;
      pcVar2 = pcStack_fc;
      while (pcVar2 != pcStack_11c) {
        pcStack_180 = (char *)0x0;
        uStack_17c = 0;
        uStack_18 = 0x4f;
        pcStack_184 = pcVar2;
        FUN_100db8d0(&pcStack_180);
        uStack_18 = 0x50;
        FUN_1015d38a();
        uStack_18 = 0xffffffff;
        FUN_10001fee();
        pcVar2 = pcStack_184 + 0x10;
      }
      uStack_18 = 0xffffffff;
      FUN_100171ce();
      uStack_18 = 0x4d;
      FUN_1006b168(&pcStack_168);
      uStack_18 = 0xffffffff;
      FUN_1006ae4c();
      FUN_10001fee();
      uStack_18 = 0x30;
      FUN_10001f66("dataSystem/skillTypes");
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_128 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_138 = 0;
      uStack_134 = 0;
      uStack_150 = 0;
      uStack_14c = 0;
      uStack_148 = 0;
      ppcStack_144 = (char **)0x0;
      uStack_18 = 0x5a;
      FUN_1002218a();
      uStack_18 = 0x55;
      pcStack_b8 = "skillTypes";
      uStack_b4 = 10;
      FUN_100d8f98(&pcStack_b8);
      pcStack_11c = pcStack_f8;
      pcVar2 = pcStack_fc;
      while (pcVar2 != pcStack_11c) {
        pcStack_180 = (char *)0x0;
        uStack_17c = 0;
        uStack_18 = 0x57;
        pcStack_184 = pcVar2;
        FUN_100db8d0(&pcStack_180);
        uStack_18 = 0x58;
        FUN_1015d38a();
        uStack_18 = 0xffffffff;
        FUN_10001fee();
        pcVar2 = pcStack_184 + 0x10;
      }
      uStack_18 = 0xffffffff;
      FUN_100171ce();
      uStack_18 = 0x55;
      FUN_1006b168(&pcStack_168);
      uStack_18 = 0xffffffff;
      FUN_1006ae4c();
      FUN_10001fee();
      uStack_18 = 0x30;
      FUN_10001f66("dataSystem/weaponTypes");
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_128 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_138 = 0;
      uStack_134 = 0;
      uStack_150 = 0;
      uStack_14c = 0;
      uStack_148 = 0;
      ppcStack_144 = (char **)0x0;
      uStack_18 = 0x62;
      FUN_1002218a();
      uStack_18 = 0x5d;
      pcStack_b8 = "weaponTypes";
      uStack_b4 = 0xb;
      FUN_100d8f98(&pcStack_b8);
      pcStack_11c = pcStack_f8;
      pcVar2 = pcStack_fc;
      while (pcVar2 != pcStack_11c) {
        pcStack_180 = (char *)0x0;
        uStack_17c = 0;
        uStack_18 = 0x5f;
        pcStack_184 = pcVar2;
        FUN_100db8d0(&pcStack_180);
        uStack_18 = 0x60;
        FUN_1015d38a();
        uStack_18 = 0xffffffff;
        FUN_10001fee();
        pcVar2 = pcStack_184 + 0x10;
      }
      uStack_18 = 0xffffffff;
      FUN_100171ce();
      uStack_18 = 0x5d;
      FUN_1006b168(&pcStack_168);
      uStack_18 = 0xffffffff;
      FUN_1006ae4c();
      FUN_10001fee();
      uStack_18 = 0x30;
      FUN_10001f66("dataSystem/switches");
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_128 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_138 = 0;
      uStack_134 = 0;
      uStack_150 = 0;
      uStack_14c = 0;
      uStack_148 = 0;
      ppcStack_144 = (char **)0x0;
      uStack_18 = 0x6a;
      FUN_1002218a();
      uStack_18 = 0x65;
      pcStack_b8 = "switches";
      uStack_b4 = 8;
      FUN_100d8f98(&pcStack_b8);
      pcStack_11c = pcStack_f8;
      pcVar2 = pcStack_fc;
      while (pcVar2 != pcStack_11c) {
        pcStack_180 = (char *)0x0;
        uStack_17c = 0;
        uStack_18 = 0x67;
        pcStack_184 = pcVar2;
        FUN_100db8d0(&pcStack_180);
        uStack_18 = 0x68;
        FUN_1015d38a();
        uStack_18 = 0xffffffff;
        FUN_10001fee();
        pcVar2 = pcStack_184 + 0x10;
      }
      uStack_18 = 0xffffffff;
      FUN_100171ce();
      uStack_18 = 0x65;
      FUN_1006b168(&pcStack_168);
      uStack_18 = 0xffffffff;
      FUN_1006ae4c();
      FUN_10001fee();
      uStack_18 = 0x30;
      FUN_10001f66("dataSystem/variables");
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_128 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_138 = 0;
      uStack_134 = 0;
      uStack_150 = 0;
      uStack_14c = 0;
      uStack_148 = 0;
      ppcStack_144 = (char **)0x0;
      uStack_18 = 0x72;
      FUN_1002218a();
      uStack_18 = 0x6d;
      pcStack_b8 = "variables";
      uStack_b4 = 9;
      FUN_100d8f98(&pcStack_b8);
      pcStack_11c = pcStack_f8;
      pcVar2 = pcStack_fc;
      while (pcVar2 != pcStack_11c) {
        pcStack_180 = (char *)0x0;
        uStack_17c = 0;
        uStack_18 = 0x6f;
        pcStack_184 = pcVar2;
        FUN_100db8d0(&pcStack_180);
        uStack_18 = 0x70;
        FUN_1015d38a();
        uStack_18 = 0xffffffff;
        FUN_10001fee();
        pcVar2 = pcStack_184 + 0x10;
      }
      uStack_18 = 0xffffffff;
      FUN_100171ce();
      uStack_18 = 0x6d;
      FUN_1006b168(&pcStack_168);
      uStack_18 = 0xffffffff;
      FUN_1006ae4c();
      FUN_10001fee();
      uStack_18 = 0x30;
      FUN_10001f66("dataSystem/gameTitle");
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_128 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_138 = 0;
      uStack_134 = 0;
      uStack_150 = 0;
      uStack_14c = 0;
      uStack_148 = 0;
      ppcStack_144 = (char **)0x0;
      uStack_18 = 0x78;
      FUN_1002218a();
      uStack_18 = 0x75;
      pcStack_fc = "gameTitle";
      pcStack_f8 = (char *)0x9;
      FUN_100db8d0(&pcStack_fc);
      uStack_18 = 0x76;
      FUN_1015d38a();
      uStack_18 = 0xffffffff;
      FUN_10001fee();
      uStack_18 = 0x75;
      FUN_1006b168(&pcStack_168);
      uStack_18 = 0xffffffff;
      FUN_1006ae4c();
      FUN_10001fee();
      uStack_18 = 0x30;
      FUN_10001f66("dataSystem/currencyUnit");
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_128 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_138 = 0;
      uStack_134 = 0;
      uStack_150 = 0;
      uStack_14c = 0;
      uStack_148 = 0;
      ppcStack_144 = (char **)0x0;
      uStack_18 = 0x7e;
      FUN_1002218a();
      uStack_18 = 0x7b;
      pcStack_fc = "currencyUnit";
      pcStack_f8 = (char *)0xc;
      FUN_100db8d0(&pcStack_fc);
      uStack_18 = 0x7c;
      FUN_1015d38a();
      uStack_18 = 0xffffffff;
      FUN_10001fee();
      uStack_18 = 0x7b;
      FUN_1006b168(&pcStack_168);
      uStack_18 = 0xffffffff;
      FUN_1006ae4c();
      FUN_10001fee();
      uStack_18 = 0x30;
      FUN_10001f66("dataSystem/terms/");
      uStack_18 = 0x81;
      pcStack_168 = "terms";
      uStack_164 = 5;
      FUN_1015d555(&pcStack_168);
      pcStack_11c = pcStack_6c;
      pcStack_38 = *(char **)pcStack_6c;
      while (pcStack_38 != pcStack_11c) {
        uStack_18 = 0x83;
        pcStack_184 = pcStack_38;
        FUN_1015d68d(&pcStack_fc,&pcStack_180,pcStack_38 + 0x10);
        uStack_c4 = 0;
        uStack_c0 = 0;
        uStack_bc = 0;
        uStack_d4 = 0;
        uStack_d0 = 0;
        uStack_cc = 0;
        uStack_c8 = 0;
        uStack_e4 = 0;
        uStack_e0 = 0;
        uStack_dc = 0;
        uStack_d8 = 0;
        uStack_18 = 0x85;
        FUN_1002218a();
        uStack_18 = 0x88;
        pcVar2 = pcStack_184 + 0x28;
        if (*pcVar2 == '\x01') {
          pcStack_3c = pcVar2;
          FUN_100dba9a(&pcStack_168);
          uStack_18 = 0x89;
          FUN_100dbb2e(&pcStack_b8);
          uStack_18 = 0x8a;
          while (cVar1 = FUN_10051c02(&pcStack_b8), cVar1 == '\0') {
            pcStack_4c = (char *)0x0;
            pcStack_48 = (char *)0x0;
            FUN_100dc366();
            FUN_100db8d0(&pcStack_4c);
            uStack_18 = 0x8b;
            FUN_1015d38a();
            uStack_18 = 0xffffffff;
            FUN_10001fee();
            uStack_18 = 0x8a;
            FUN_10051ba0();
            iStack_158 = iStack_158 + 1;
          }
          uStack_18 = 0xffffffff;
          FUN_100dbbc6();
          FUN_100dbbc6();
        }
        else if (*pcVar2 == '\x02') {
          uStack_b4 = 0;
          uStack_ac = 0x80000000;
          uStack_b0 = **(undefined4 **)(pcStack_184 + 0x30);
          pcStack_114 = (char *)0x0;
          uStack_10c = 0x80000000;
          uStack_110 = (*(undefined4 **)(pcStack_184 + 0x30))[1];
          pcStack_118 = pcVar2;
          pcStack_b8 = pcVar2;
          while (cVar1 = FUN_10051c02(&pcStack_118), cVar1 == '\0') {
            FUN_100dc366();
            pcStack_4c = (char *)0x0;
            pcStack_48 = (char *)0x0;
            FUN_100db8d0(&pcStack_4c);
            uStack_18 = 0x8c;
            FUN_1015d38a();
            uStack_18 = 0xffffffff;
            FUN_10001fee();
            uStack_18 = 0x88;
            FUN_10051ba0();
          }
        }
        uStack_18 = 0x88;
        FUN_1006b168(&pcStack_fc);
        uStack_18 = 0xffffffff;
        FUN_1006ae4c();
        FUN_10001fee();
        FUN_10016fb8();
      }
      uStack_18 = 0xffffffff;
      FUN_10016fee(&pcStack_6c,*(undefined4 *)(pcStack_6c + 4));
      FUN_102283a0(pcStack_6c,0x38);
      FUN_10001fee();
    }
    DAT_1039d2f0 = 0x3e8a3d71;
    uStack_18 = 0x30;
    pcVar2 = (char *)FUN_10013d2e("plugins");
    if (*pcVar2 == '\x02') {
      FUN_10001f66("plugins");
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_128 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_138 = 0;
      uStack_134 = 0;
      uStack_150 = 0;
      uStack_14c = 0;
      uStack_148 = 0;
      ppcStack_144 = (char **)0x0;
      uStack_18 = 0x3e;
      FUN_1002218a();
      uStack_18 = 0x41;
      pcStack_180 = (char *)FUN_10013d2e("plugins");
      uStack_f4 = 0;
      pcStack_f8 = (char *)0x0;
      uStack_f0 = 0x80000000;
      cVar1 = *pcStack_180;
      if (cVar1 == '\0') {
        uStack_f0 = 1;
      }
      else if (cVar1 == '\x02') {
        uStack_f4 = **(undefined4 **)(pcStack_180 + 8);
      }
      else if (cVar1 == '\x01') {
        pcStack_f8 = *(char **)**(undefined4 **)(pcStack_180 + 8);
      }
      else {
        uStack_f0 = 0;
      }
      uStack_178 = 0;
      uStack_17c = 0;
      uStack_174 = 0x80000000;
      pcStack_fc = pcStack_180;
      if (*pcStack_180 == '\x02') {
        uStack_178 = *(undefined4 *)(*(int *)(pcStack_180 + 8) + 4);
      }
      else if (*pcStack_180 == '\x01') {
        uStack_17c = **(undefined4 **)(pcStack_180 + 8);
      }
      else {
        uStack_174 = 1;
      }
      while (cVar1 = FUN_10051c02(&pcStack_180), cVar1 == '\0') {
        FUN_100dc366();
        pcStack_b8 = "parameters";
        uStack_b4 = 10;
        FUN_1015d555(&pcStack_b8);
        pcStack_184 = pcStack_118;
        pcStack_4c = *(char **)pcStack_118;
        while (pcStack_4c != pcStack_184) {
          pcStack_6c = (char *)0x0;
          pcStack_68 = (char *)0x0;
          uStack_18 = 0x43;
          FUN_100db8d0(&pcStack_6c);
          uStack_18 = 0x44;
          FUN_1015d38a();
          uStack_18 = 0xffffffff;
          FUN_10001fee();
          FUN_10016fb8();
        }
        uStack_18 = 0xffffffff;
        FUN_10016fee(&pcStack_118,*(undefined4 *)(pcStack_118 + 4));
        FUN_102283a0(pcStack_118,0x38);
        uStack_18 = 0x41;
        FUN_10051ba0();
      }
      FUN_1006b168(&pcStack_168);
      uStack_18 = 0xffffffff;
      FUN_1006ae4c();
      FUN_10001fee();
    }
    DAT_1039d2f0 = 0x3e99999a;
    pcStack_118 = (char *)0x0;
    pcStack_114 = (char *)0x0;
    uStack_110 = 0;
    uStack_18 = 0x31;
    pcVar2 = (char *)FUN_10013d2e("dataMapInfos");
    if (*pcVar2 == '\x02') {
      FUN_10001f66("dataMapInfos");
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_128 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_138 = 0;
      uStack_134 = 0;
      uStack_150 = 0;
      uStack_14c = 0;
      uStack_148 = 0;
      ppcStack_144 = (char **)0x0;
      uStack_18 = 0x37;
      FUN_1002218a();
      uStack_18 = 0x3a;
      pcStack_180 = (char *)FUN_10013d2e("dataMapInfos");
      uStack_f4 = 0;
      pcStack_f8 = (char *)0x0;
      uStack_f0 = 0x80000000;
      cVar1 = *pcStack_180;
      if (cVar1 == '\0') {
        uStack_f0 = 1;
      }
      else if (cVar1 == '\x02') {
        uStack_f4 = **(undefined4 **)(pcStack_180 + 8);
      }
      else if (cVar1 == '\x01') {
        pcStack_f8 = *(char **)**(undefined4 **)(pcStack_180 + 8);
      }
      else {
        uStack_f0 = 0;
      }
      uStack_178 = 0;
      uStack_17c = 0;
      uStack_174 = 0x80000000;
      pcStack_fc = pcStack_180;
      if (*pcStack_180 == '\x02') {
        uStack_178 = *(undefined4 *)(*(int *)(pcStack_180 + 8) + 4);
      }
      else if (*pcStack_180 == '\x01') {
        uStack_17c = **(undefined4 **)(pcStack_180 + 8);
      }
      else {
        uStack_174 = 1;
      }
      while (cVar1 = FUN_10051c02(&pcStack_180), cVar1 == '\0') {
        pcVar2 = (char *)FUN_100dc366();
        if (*pcVar2 == '\x01') {
          pcStack_6c = "id";
          pcStack_68 = (char *)0x2;
          pcStack_184 = pcVar2;
          FUN_100dafc2(&pcStack_6c);
          uStack_18 = 0x3b;
          FUN_1015e442(&pcStack_b8);
          uStack_18 = 0xffffffff;
          FUN_10013efc();
          pcStack_6c = "name";
          pcStack_68 = (char *)0x4;
          uStack_18 = 0x3a;
          FUN_100db8d0(&pcStack_6c);
          uStack_18 = 0x3c;
          FUN_1015d38a();
          uStack_18 = 0xffffffff;
          FUN_10001fee();
        }
        uStack_18 = 0x3a;
        FUN_10051ba0();
      }
      FUN_1006b168(&pcStack_168);
      uStack_18 = 0xffffffff;
      FUN_1006ae4c();
      FUN_10001fee();
    }
    DAT_1039d2f0 = 0x3eb33333;
    pcStack_b8 = (char *)0x0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_18 = 0x31;
    FUN_10061af0((int)pcStack_114 - (int)pcStack_118 >> 2,&pcStack_118,&pcStack_114);
    ppcStack_144 = (char **)0x0;
    uStack_18 = 0x34;
    FUN_1015e628();
    ppcStack_144 = &pcStack_168;
    uStack_18 = 0x35;
    FUN_100148b1(&pcStack_168);
    uStack_18 = 0xffffffff;
    if (ppcStack_144 != (char **)0x0) {
      (**(code **)(*ppcStack_144 + 0x10))(ppcStack_144 != &pcStack_168);
      ppcStack_144 = (char **)0x0;
    }
    uStack_18 = 0xffffffff;
    FUN_10004eae();
    FUN_10004eae();
  }
  else {
    FUN_1015d782();
  }
  uStack_18 = 0xffffffff;
  FUN_10013efc();
  ExceptionList = pvStack_20;
  return;
}

