/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18015b77e */

void thunk_FUN_18015b78c(void)

{
  char *pcVar1;
  undefined8 *puVar2;
  char *pcVar3;
  char cVar4;
  char *pcVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcStack_268;
  undefined8 uStack_260;
  char *pcStack_250;
  char *pcStack_248;
  char *pcStack_240;
  char *pcStack_228;
  char *pcStack_220;
  char *pcStack_208;
  char *pcStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  char *pcStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  longlong lStack_178;
  char acStack_128 [16];
  char *pcStack_118;
  undefined8 uStack_110;
  char *pcStack_f8;
  char *pcStack_f0;
  undefined8 uStack_e8;
  char *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  char **ppcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  FUN_180001e92(&pcStack_d8,
                "\n({\n    dataActors: $dataActors,\n    dataClasses: $dataClasses,\n    dataSkills: $dataSkills,\n    dataItems: $dataItems,\n    dataWeapons: $dataWeapons,\n    dataArmors: $dataArmors,\n    dataEnemies: $dataEnemies,\n    dataTroops: $dataTroops,\n    dataStates: $dataStates,\n    dataAnimations: $dataAnimations,\n    dataTilesets: $dataTilesets,\n    dataCommonEvents: $dataCommonEvents,\n    dataSystem: $dataSystem,\n    plugins: $plugins,\n    dataMapInfos: $dataMapInfos,\n})\n"
               );
  FUN_180013de7(acStack_128,&pcStack_d8);
  FUN_180001ef2(&pcStack_d8);
  if (acStack_128[0] == '\x01') {
    DAT_1804189ac = 0x3dcccccd;
    pcVar5 = (char *)FUN_1800136a6(acStack_128,"dataActors");
    if (*pcVar5 == '\x02') {
      FUN_180001e92(&pcStack_d8,"dataActors");
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_a8 = 0;
      ppcStack_a0 = (char **)0x0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_68 = 0;
      FUN_18002266a(&ppcStack_a0);
      pcStack_208 = (char *)FUN_1800136a6(acStack_128,"dataActors");
      uStack_190 = 0;
      uStack_188 = 0;
      uStack_180 = 0x8000000000000000;
      cVar4 = *pcStack_208;
      if (cVar4 == '\0') {
        uStack_180 = 1;
      }
      else if (cVar4 == '\x02') {
        uStack_188 = **(undefined8 **)(pcStack_208 + 8);
      }
      else if (cVar4 == '\x01') {
        uStack_190 = *(undefined8 *)**(undefined8 **)(pcStack_208 + 8);
      }
      else {
        uStack_180 = 0;
      }
      pcStack_200 = (char *)0x0;
      uStack_1f8 = 0;
      uStack_1f0 = 0x8000000000000000;
      if (*pcStack_208 == '\x02') {
        uStack_1f8 = *(undefined8 *)(*(longlong *)(pcStack_208 + 8) + 8);
      }
      else if (*pcStack_208 == '\x01') {
        pcStack_200 = (char *)**(undefined8 **)(pcStack_208 + 8);
      }
      else {
        uStack_1f0 = 1;
      }
      pcStack_198 = pcStack_208;
      while (cVar4 = FUN_18005324c(&pcStack_198,&pcStack_208), cVar4 == '\0') {
        uVar6 = FUN_1800e04aa(&pcStack_198);
        pcStack_f8 = "name";
        pcStack_f0 = (char *)0x4;
        FUN_1800dfa68(&pcStack_118,uVar6,&pcStack_f8);
        FUN_180162253(&pcStack_d8,&pcStack_118);
        FUN_180001ef2(&pcStack_118);
        FUN_1800531d0(&pcStack_198);
      }
      FUN_18006b10c(&DAT_1804188a0,&pcStack_d8);
      FUN_18006ae42(&uStack_b8);
      FUN_180001ef2(&pcStack_d8);
    }
    DAT_1804189ac = 0x3de147ae;
    pcVar5 = (char *)FUN_1800136a6(acStack_128,"dataClasses");
    if (*pcVar5 == '\x02') {
      FUN_180001e92(&pcStack_d8,"dataClasses");
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_a8 = 0;
      ppcStack_a0 = (char **)0x0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_68 = 0;
      FUN_18002266a(&ppcStack_a0);
      pcStack_208 = (char *)FUN_1800136a6(acStack_128,"dataClasses");
      uStack_190 = 0;
      uStack_188 = 0;
      uStack_180 = 0x8000000000000000;
      cVar4 = *pcStack_208;
      if (cVar4 == '\0') {
        uStack_180 = 1;
      }
      else if (cVar4 == '\x02') {
        uStack_188 = **(undefined8 **)(pcStack_208 + 8);
      }
      else if (cVar4 == '\x01') {
        uStack_190 = *(undefined8 *)**(undefined8 **)(pcStack_208 + 8);
      }
      else {
        uStack_180 = 0;
      }
      pcStack_200 = (char *)0x0;
      uStack_1f8 = 0;
      uStack_1f0 = 0x8000000000000000;
      if (*pcStack_208 == '\x02') {
        uStack_1f8 = *(undefined8 *)(*(longlong *)(pcStack_208 + 8) + 8);
      }
      else if (*pcStack_208 == '\x01') {
        pcStack_200 = (char *)**(undefined8 **)(pcStack_208 + 8);
      }
      else {
        uStack_1f0 = 1;
      }
      pcStack_198 = pcStack_208;
      while (cVar4 = FUN_18005324c(&pcStack_198,&pcStack_208), cVar4 == '\0') {
        uVar6 = FUN_1800e04aa(&pcStack_198);
        pcStack_f8 = "name";
        pcStack_f0 = (char *)0x4;
        FUN_1800dfa68(&pcStack_118,uVar6,&pcStack_f8);
        FUN_180162253(&pcStack_d8,&pcStack_118);
        FUN_180001ef2(&pcStack_118);
        FUN_1800531d0(&pcStack_198);
      }
      FUN_18006b10c(&DAT_1804188a0,&pcStack_d8);
      FUN_18006ae42(&uStack_b8);
      FUN_180001ef2(&pcStack_d8);
    }
    DAT_1804189ac = 0x3df5c28f;
    pcVar5 = (char *)FUN_1800136a6(acStack_128,"dataSkills");
    if (*pcVar5 == '\x02') {
      FUN_180001e92(&pcStack_d8,"dataSkills");
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_a8 = 0;
      ppcStack_a0 = (char **)0x0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_68 = 0;
      FUN_18002266a(&ppcStack_a0);
      pcStack_208 = (char *)FUN_1800136a6(acStack_128,"dataSkills");
      uStack_190 = 0;
      uStack_188 = 0;
      uStack_180 = 0x8000000000000000;
      cVar4 = *pcStack_208;
      if (cVar4 == '\0') {
        uStack_180 = 1;
      }
      else if (cVar4 == '\x02') {
        uStack_188 = **(undefined8 **)(pcStack_208 + 8);
      }
      else if (cVar4 == '\x01') {
        uStack_190 = *(undefined8 *)**(undefined8 **)(pcStack_208 + 8);
      }
      else {
        uStack_180 = 0;
      }
      pcStack_200 = (char *)0x0;
      uStack_1f8 = 0;
      uStack_1f0 = 0x8000000000000000;
      if (*pcStack_208 == '\x02') {
        uStack_1f8 = *(undefined8 *)(*(longlong *)(pcStack_208 + 8) + 8);
      }
      else if (*pcStack_208 == '\x01') {
        pcStack_200 = (char *)**(undefined8 **)(pcStack_208 + 8);
      }
      else {
        uStack_1f0 = 1;
      }
      pcStack_198 = pcStack_208;
      while (cVar4 = FUN_18005324c(&pcStack_198,&pcStack_208), cVar4 == '\0') {
        uVar6 = FUN_1800e04aa(&pcStack_198);
        pcStack_f8 = "name";
        pcStack_f0 = (char *)0x4;
        FUN_1800dfa68(&pcStack_118,uVar6,&pcStack_f8);
        FUN_180162253(&pcStack_d8,&pcStack_118);
        FUN_180001ef2(&pcStack_118);
        pcStack_f8 = "message1";
        pcStack_f0 = (char *)0x8;
        FUN_1800dfa68(&pcStack_118,uVar6,&pcStack_f8);
        FUN_180162253(&pcStack_d8,&pcStack_118);
        FUN_180001ef2(&pcStack_118);
        pcStack_f8 = "message2";
        pcStack_f0 = (char *)0x8;
        FUN_1800dfa68(&pcStack_118,uVar6,&pcStack_f8);
        FUN_180162253(&pcStack_d8,&pcStack_118);
        FUN_180001ef2(&pcStack_118);
        FUN_1800531d0(&pcStack_198);
      }
      FUN_18006b10c(&DAT_1804188a0,&pcStack_d8);
      FUN_18006ae42(&uStack_b8);
      FUN_180001ef2(&pcStack_d8);
    }
    DAT_1804189ac = 0x3e051eb8;
    pcVar5 = (char *)FUN_1800136a6(acStack_128,"dataItems");
    if (*pcVar5 == '\x02') {
      FUN_180001e92(&pcStack_d8,"dataItems");
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_a8 = 0;
      ppcStack_a0 = (char **)0x0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_68 = 0;
      FUN_18002266a(&ppcStack_a0);
      pcStack_208 = (char *)FUN_1800136a6(acStack_128,"dataItems");
      uStack_190 = 0;
      uStack_188 = 0;
      uStack_180 = 0x8000000000000000;
      cVar4 = *pcStack_208;
      if (cVar4 == '\0') {
        uStack_180 = 1;
      }
      else if (cVar4 == '\x02') {
        uStack_188 = **(undefined8 **)(pcStack_208 + 8);
      }
      else if (cVar4 == '\x01') {
        uStack_190 = *(undefined8 *)**(undefined8 **)(pcStack_208 + 8);
      }
      else {
        uStack_180 = 0;
      }
      pcStack_200 = (char *)0x0;
      uStack_1f8 = 0;
      uStack_1f0 = 0x8000000000000000;
      if (*pcStack_208 == '\x02') {
        uStack_1f8 = *(undefined8 *)(*(longlong *)(pcStack_208 + 8) + 8);
      }
      else if (*pcStack_208 == '\x01') {
        pcStack_200 = (char *)**(undefined8 **)(pcStack_208 + 8);
      }
      else {
        uStack_1f0 = 1;
      }
      pcStack_198 = pcStack_208;
      while (cVar4 = FUN_18005324c(&pcStack_198,&pcStack_208), cVar4 == '\0') {
        uVar6 = FUN_1800e04aa(&pcStack_198);
        pcStack_f8 = "name";
        pcStack_f0 = (char *)0x4;
        FUN_1800dfa68(&pcStack_118,uVar6,&pcStack_f8);
        FUN_180162253(&pcStack_d8,&pcStack_118);
        FUN_180001ef2(&pcStack_118);
        pcStack_f8 = "description";
        pcStack_f0 = (char *)0xb;
        FUN_1800dfa68(&pcStack_118,uVar6,&pcStack_f8);
        FUN_180162253(&pcStack_d8,&pcStack_118);
        FUN_180001ef2(&pcStack_118);
        FUN_1800531d0(&pcStack_198);
      }
      FUN_18006b10c(&DAT_1804188a0,&pcStack_d8);
      FUN_18006ae42(&uStack_b8);
      FUN_180001ef2(&pcStack_d8);
    }
    DAT_1804189ac = 0x3e0f5c29;
    pcVar5 = (char *)FUN_1800136a6(acStack_128,"dataWeapons");
    if (*pcVar5 == '\x02') {
      FUN_180001e92(&pcStack_d8,"dataWeapons");
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_a8 = 0;
      ppcStack_a0 = (char **)0x0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_68 = 0;
      FUN_18002266a(&ppcStack_a0);
      pcStack_208 = (char *)FUN_1800136a6(acStack_128,"dataWeapons");
      uStack_190 = 0;
      uStack_188 = 0;
      uStack_180 = 0x8000000000000000;
      cVar4 = *pcStack_208;
      if (cVar4 == '\0') {
        uStack_180 = 1;
      }
      else if (cVar4 == '\x02') {
        uStack_188 = **(undefined8 **)(pcStack_208 + 8);
      }
      else if (cVar4 == '\x01') {
        uStack_190 = *(undefined8 *)**(undefined8 **)(pcStack_208 + 8);
      }
      else {
        uStack_180 = 0;
      }
      pcStack_200 = (char *)0x0;
      uStack_1f8 = 0;
      uStack_1f0 = 0x8000000000000000;
      if (*pcStack_208 == '\x02') {
        uStack_1f8 = *(undefined8 *)(*(longlong *)(pcStack_208 + 8) + 8);
      }
      else if (*pcStack_208 == '\x01') {
        pcStack_200 = (char *)**(undefined8 **)(pcStack_208 + 8);
      }
      else {
        uStack_1f0 = 1;
      }
      pcStack_198 = pcStack_208;
      while (cVar4 = FUN_18005324c(&pcStack_198,&pcStack_208), cVar4 == '\0') {
        uVar6 = FUN_1800e04aa(&pcStack_198);
        pcStack_f8 = "name";
        pcStack_f0 = (char *)0x4;
        FUN_1800dfa68(&pcStack_118,uVar6,&pcStack_f8);
        FUN_180162253(&pcStack_d8,&pcStack_118);
        FUN_180001ef2(&pcStack_118);
        pcStack_f8 = "description";
        pcStack_f0 = (char *)0xb;
        FUN_1800dfa68(&pcStack_118,uVar6,&pcStack_f8);
        FUN_180162253(&pcStack_d8,&pcStack_118);
        FUN_180001ef2(&pcStack_118);
        FUN_1800531d0(&pcStack_198);
      }
      FUN_18006b10c(&DAT_1804188a0,&pcStack_d8);
      FUN_18006ae42(&uStack_b8);
      FUN_180001ef2(&pcStack_d8);
    }
    DAT_1804189ac = 0x3e19999a;
    pcVar5 = (char *)FUN_1800136a6(acStack_128,"dataArmors");
    if (*pcVar5 == '\x02') {
      FUN_180001e92(&pcStack_d8,"dataArmors");
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_a8 = 0;
      ppcStack_a0 = (char **)0x0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_68 = 0;
      FUN_18002266a(&ppcStack_a0);
      pcStack_208 = (char *)FUN_1800136a6(acStack_128,"dataArmors");
      uStack_190 = 0;
      uStack_188 = 0;
      uStack_180 = 0x8000000000000000;
      cVar4 = *pcStack_208;
      if (cVar4 == '\0') {
        uStack_180 = 1;
      }
      else if (cVar4 == '\x02') {
        uStack_188 = **(undefined8 **)(pcStack_208 + 8);
      }
      else if (cVar4 == '\x01') {
        uStack_190 = *(undefined8 *)**(undefined8 **)(pcStack_208 + 8);
      }
      else {
        uStack_180 = 0;
      }
      pcStack_200 = (char *)0x0;
      uStack_1f8 = 0;
      uStack_1f0 = 0x8000000000000000;
      if (*pcStack_208 == '\x02') {
        uStack_1f8 = *(undefined8 *)(*(longlong *)(pcStack_208 + 8) + 8);
      }
      else if (*pcStack_208 == '\x01') {
        pcStack_200 = (char *)**(undefined8 **)(pcStack_208 + 8);
      }
      else {
        uStack_1f0 = 1;
      }
      pcStack_198 = pcStack_208;
      while (cVar4 = FUN_18005324c(&pcStack_198,&pcStack_208), cVar4 == '\0') {
        uVar6 = FUN_1800e04aa(&pcStack_198);
        pcStack_f8 = "name";
        pcStack_f0 = (char *)0x4;
        FUN_1800dfa68(&pcStack_118,uVar6,&pcStack_f8);
        FUN_180162253(&pcStack_d8,&pcStack_118);
        FUN_180001ef2(&pcStack_118);
        pcStack_f8 = "description";
        pcStack_f0 = (char *)0xb;
        FUN_1800dfa68(&pcStack_118,uVar6,&pcStack_f8);
        FUN_180162253(&pcStack_d8,&pcStack_118);
        FUN_180001ef2(&pcStack_118);
        FUN_1800531d0(&pcStack_198);
      }
      FUN_18006b10c(&DAT_1804188a0,&pcStack_d8);
      FUN_18006ae42(&uStack_b8);
      FUN_180001ef2(&pcStack_d8);
    }
    DAT_1804189ac = 0x3e23d70a;
    pcVar5 = (char *)FUN_1800136a6(acStack_128,"dataEnemies");
    if (*pcVar5 == '\x02') {
      FUN_180001e92(&pcStack_d8,"dataEnemies");
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_a8 = 0;
      ppcStack_a0 = (char **)0x0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_68 = 0;
      FUN_18002266a(&ppcStack_a0);
      pcStack_208 = (char *)FUN_1800136a6(acStack_128,"dataEnemies");
      uStack_190 = 0;
      uStack_188 = 0;
      uStack_180 = 0x8000000000000000;
      cVar4 = *pcStack_208;
      if (cVar4 == '\0') {
        uStack_180 = 1;
      }
      else if (cVar4 == '\x02') {
        uStack_188 = **(undefined8 **)(pcStack_208 + 8);
      }
      else if (cVar4 == '\x01') {
        uStack_190 = *(undefined8 *)**(undefined8 **)(pcStack_208 + 8);
      }
      else {
        uStack_180 = 0;
      }
      pcStack_200 = (char *)0x0;
      uStack_1f8 = 0;
      uStack_1f0 = 0x8000000000000000;
      if (*pcStack_208 == '\x02') {
        uStack_1f8 = *(undefined8 *)(*(longlong *)(pcStack_208 + 8) + 8);
      }
      else if (*pcStack_208 == '\x01') {
        pcStack_200 = (char *)**(undefined8 **)(pcStack_208 + 8);
      }
      else {
        uStack_1f0 = 1;
      }
      pcStack_198 = pcStack_208;
      while (cVar4 = FUN_18005324c(&pcStack_198,&pcStack_208), cVar4 == '\0') {
        uVar6 = FUN_1800e04aa(&pcStack_198);
        pcStack_f8 = "name";
        pcStack_f0 = (char *)0x4;
        FUN_1800dfa68(&pcStack_118,uVar6,&pcStack_f8);
        FUN_180162253(&pcStack_d8,&pcStack_118);
        FUN_180001ef2(&pcStack_118);
        FUN_1800531d0(&pcStack_198);
      }
      FUN_18006b10c(&DAT_1804188a0,&pcStack_d8);
      FUN_18006ae42(&uStack_b8);
      FUN_180001ef2(&pcStack_d8);
    }
    DAT_1804189ac = 0x3e2e147b;
    pcVar5 = (char *)FUN_1800136a6(acStack_128,"dataTroops");
    if (*pcVar5 == '\x02') {
      FUN_180001e92(&pcStack_d8,"dataTroops");
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_a8 = 0;
      ppcStack_a0 = (char **)0x0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_68 = 0;
      FUN_18002266a(&ppcStack_a0);
      pcStack_208 = (char *)FUN_1800136a6(acStack_128,"dataTroops");
      uStack_190 = 0;
      uStack_188 = 0;
      uStack_180 = 0x8000000000000000;
      cVar4 = *pcStack_208;
      if (cVar4 == '\0') {
        uStack_180 = 1;
      }
      else if (cVar4 == '\x02') {
        uStack_188 = **(undefined8 **)(pcStack_208 + 8);
      }
      else if (cVar4 == '\x01') {
        uStack_190 = *(undefined8 *)**(undefined8 **)(pcStack_208 + 8);
      }
      else {
        uStack_180 = 0;
      }
      pcStack_200 = (char *)0x0;
      uStack_1f8 = 0;
      uStack_1f0 = 0x8000000000000000;
      if (*pcStack_208 == '\x02') {
        uStack_1f8 = *(undefined8 *)(*(longlong *)(pcStack_208 + 8) + 8);
      }
      else if (*pcStack_208 == '\x01') {
        pcStack_200 = (char *)**(undefined8 **)(pcStack_208 + 8);
      }
      else {
        uStack_1f0 = 1;
      }
      pcStack_198 = pcStack_208;
      while (cVar4 = FUN_18005324c(&pcStack_198,&pcStack_208), cVar4 == '\0') {
        uVar6 = FUN_1800e04aa(&pcStack_198);
        pcStack_f8 = "name";
        pcStack_f0 = (char *)0x4;
        FUN_1800dfa68(&pcStack_118,uVar6,&pcStack_f8);
        FUN_180162253(&pcStack_d8,&pcStack_118);
        FUN_180001ef2(&pcStack_118);
        pcStack_118 = "pages";
        uStack_110 = 5;
        FUN_1800dcf0b(&pcStack_f8,uVar6,&pcStack_118);
        pcVar5 = pcStack_f0;
        for (pcVar8 = pcStack_f8; pcVar8 != pcVar5; pcVar8 = pcVar8 + 0x10) {
          pcStack_118 = "list";
          uStack_110 = 4;
          FUN_1800dcf0b(&pcStack_228,pcVar8,&pcStack_118);
          pcVar1 = pcStack_220;
          for (pcVar7 = pcStack_228; pcVar7 != pcVar1; pcVar7 = pcVar7 + 0x10) {
            pcStack_118 = "parameters";
            uStack_110 = 10;
            FUN_1800dcf0b(&pcStack_248,pcVar7,&pcStack_118);
            pcVar3 = pcStack_240;
            for (pcVar9 = pcStack_248; pcVar9 != pcVar3; pcVar9 = pcVar9 + 0x10) {
              pcStack_268 = (char *)0x0;
              uStack_260 = 0;
              FUN_1800dfa68(&pcStack_118,pcVar9,&pcStack_268);
              FUN_180162253(&pcStack_d8,&pcStack_118);
              FUN_180001ef2(&pcStack_118);
            }
            FUN_180016e50(&pcStack_248);
          }
          FUN_180016e50(&pcStack_228);
        }
        FUN_180016e50(&pcStack_f8);
        FUN_1800531d0(&pcStack_198);
      }
      FUN_18006b10c(&DAT_1804188a0,&pcStack_d8);
      FUN_18006ae42(&uStack_b8);
      FUN_180001ef2(&pcStack_d8);
    }
    DAT_1804189ac = 0x3e3851ec;
    pcVar5 = (char *)FUN_1800136a6(acStack_128,"dataStates");
    if (*pcVar5 == '\x02') {
      FUN_180001e92(&pcStack_d8,"dataStates");
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_a8 = 0;
      ppcStack_a0 = (char **)0x0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_68 = 0;
      FUN_18002266a(&ppcStack_a0);
      pcStack_208 = (char *)FUN_1800136a6(acStack_128,"dataStates");
      uStack_190 = 0;
      uStack_188 = 0;
      uStack_180 = 0x8000000000000000;
      cVar4 = *pcStack_208;
      if (cVar4 == '\0') {
        uStack_180 = 1;
      }
      else if (cVar4 == '\x02') {
        uStack_188 = **(undefined8 **)(pcStack_208 + 8);
      }
      else if (cVar4 == '\x01') {
        uStack_190 = *(undefined8 *)**(undefined8 **)(pcStack_208 + 8);
      }
      else {
        uStack_180 = 0;
      }
      pcStack_200 = (char *)0x0;
      uStack_1f8 = 0;
      uStack_1f0 = 0x8000000000000000;
      if (*pcStack_208 == '\x02') {
        uStack_1f8 = *(undefined8 *)(*(longlong *)(pcStack_208 + 8) + 8);
      }
      else if (*pcStack_208 == '\x01') {
        pcStack_200 = (char *)**(undefined8 **)(pcStack_208 + 8);
      }
      else {
        uStack_1f0 = 1;
      }
      pcStack_198 = pcStack_208;
      while (cVar4 = FUN_18005324c(&pcStack_198,&pcStack_208), cVar4 == '\0') {
        uVar6 = FUN_1800e04aa(&pcStack_198);
        pcStack_f8 = "name";
        pcStack_f0 = (char *)0x4;
        FUN_1800dfa68(&pcStack_118,uVar6,&pcStack_f8);
        FUN_180162253(&pcStack_d8,&pcStack_118);
        FUN_180001ef2(&pcStack_118);
        pcStack_f8 = "message1";
        pcStack_f0 = (char *)0x8;
        FUN_1800dfa68(&pcStack_118,uVar6,&pcStack_f8);
        FUN_180162253(&pcStack_d8,&pcStack_118);
        FUN_180001ef2(&pcStack_118);
        pcStack_f8 = "message2";
        pcStack_f0 = (char *)0x8;
        FUN_1800dfa68(&pcStack_118,uVar6,&pcStack_f8);
        FUN_180162253(&pcStack_d8,&pcStack_118);
        FUN_180001ef2(&pcStack_118);
        pcStack_f8 = "message3";
        pcStack_f0 = (char *)0x8;
        FUN_1800dfa68(&pcStack_118,uVar6,&pcStack_f8);
        FUN_180162253(&pcStack_d8,&pcStack_118);
        FUN_180001ef2(&pcStack_118);
        pcStack_f8 = "message4";
        pcStack_f0 = (char *)0x8;
        FUN_1800dfa68(&pcStack_118,uVar6,&pcStack_f8);
        FUN_180162253(&pcStack_d8,&pcStack_118);
        FUN_180001ef2(&pcStack_118);
        FUN_1800531d0(&pcStack_198);
      }
      FUN_18006b10c(&DAT_1804188a0,&pcStack_d8);
      FUN_18006ae42(&uStack_b8);
      FUN_180001ef2(&pcStack_d8);
    }
    DAT_1804189ac = 0x3e428f5c;
    pcVar5 = (char *)FUN_1800136a6(acStack_128,"dataAnimations");
    if (*pcVar5 == '\x02') {
      FUN_180001e92(&pcStack_d8,"dataAnimations");
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_a8 = 0;
      ppcStack_a0 = (char **)0x0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_68 = 0;
      FUN_18002266a(&ppcStack_a0);
      pcStack_208 = (char *)FUN_1800136a6(acStack_128,"dataAnimations");
      uStack_190 = 0;
      uStack_188 = 0;
      uStack_180 = 0x8000000000000000;
      cVar4 = *pcStack_208;
      if (cVar4 == '\0') {
        uStack_180 = 1;
      }
      else if (cVar4 == '\x02') {
        uStack_188 = **(undefined8 **)(pcStack_208 + 8);
      }
      else if (cVar4 == '\x01') {
        uStack_190 = *(undefined8 *)**(undefined8 **)(pcStack_208 + 8);
      }
      else {
        uStack_180 = 0;
      }
      pcStack_200 = (char *)0x0;
      uStack_1f8 = 0;
      uStack_1f0 = 0x8000000000000000;
      if (*pcStack_208 == '\x02') {
        uStack_1f8 = *(undefined8 *)(*(longlong *)(pcStack_208 + 8) + 8);
      }
      else if (*pcStack_208 == '\x01') {
        pcStack_200 = (char *)**(undefined8 **)(pcStack_208 + 8);
      }
      else {
        uStack_1f0 = 1;
      }
      pcStack_198 = pcStack_208;
      while (cVar4 = FUN_18005324c(&pcStack_198,&pcStack_208), cVar4 == '\0') {
        uVar6 = FUN_1800e04aa(&pcStack_198);
        pcStack_f8 = "name";
        pcStack_f0 = (char *)0x4;
        FUN_1800dfa68(&pcStack_118,uVar6,&pcStack_f8);
        FUN_180162253(&pcStack_d8,&pcStack_118);
        FUN_180001ef2(&pcStack_118);
        FUN_1800531d0(&pcStack_198);
      }
      FUN_18006b10c(&DAT_1804188a0,&pcStack_d8);
      FUN_18006ae42(&uStack_b8);
      FUN_180001ef2(&pcStack_d8);
    }
    DAT_1804189ac = 0x3e4ccccd;
    pcVar5 = (char *)FUN_1800136a6(acStack_128,"dataTilesets");
    if (*pcVar5 == '\x02') {
      FUN_180001e92(&pcStack_d8,"dataTilesets");
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_a8 = 0;
      ppcStack_a0 = (char **)0x0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_68 = 0;
      FUN_18002266a(&ppcStack_a0);
      pcStack_208 = (char *)FUN_1800136a6(acStack_128,"dataTilesets");
      uStack_190 = 0;
      uStack_188 = 0;
      uStack_180 = 0x8000000000000000;
      cVar4 = *pcStack_208;
      if (cVar4 == '\0') {
        uStack_180 = 1;
      }
      else if (cVar4 == '\x02') {
        uStack_188 = **(undefined8 **)(pcStack_208 + 8);
      }
      else if (cVar4 == '\x01') {
        uStack_190 = *(undefined8 *)**(undefined8 **)(pcStack_208 + 8);
      }
      else {
        uStack_180 = 0;
      }
      pcStack_200 = (char *)0x0;
      uStack_1f8 = 0;
      uStack_1f0 = 0x8000000000000000;
      if (*pcStack_208 == '\x02') {
        uStack_1f8 = *(undefined8 *)(*(longlong *)(pcStack_208 + 8) + 8);
      }
      else if (*pcStack_208 == '\x01') {
        pcStack_200 = (char *)**(undefined8 **)(pcStack_208 + 8);
      }
      else {
        uStack_1f0 = 1;
      }
      pcStack_198 = pcStack_208;
      while (cVar4 = FUN_18005324c(&pcStack_198,&pcStack_208), cVar4 == '\0') {
        uVar6 = FUN_1800e04aa(&pcStack_198);
        pcStack_f8 = "name";
        pcStack_f0 = (char *)0x4;
        FUN_1800dfa68(&pcStack_118,uVar6,&pcStack_f8);
        FUN_180162253(&pcStack_d8,&pcStack_118);
        FUN_180001ef2(&pcStack_118);
        FUN_1800531d0(&pcStack_198);
      }
      FUN_18006b10c(&DAT_1804188a0,&pcStack_d8);
      FUN_18006ae42(&uStack_b8);
      FUN_180001ef2(&pcStack_d8);
    }
    DAT_1804189ac = 0x3e570a3d;
    pcVar5 = (char *)FUN_1800136a6(acStack_128,"dataCommonEvents");
    if (*pcVar5 == '\x02') {
      FUN_180001e92(&pcStack_d8,"dataCommonEvents");
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_a8 = 0;
      ppcStack_a0 = (char **)0x0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_68 = 0;
      FUN_18002266a(&ppcStack_a0);
      pcStack_208 = (char *)FUN_1800136a6(acStack_128,"dataCommonEvents");
      uStack_190 = 0;
      uStack_188 = 0;
      uStack_180 = 0x8000000000000000;
      cVar4 = *pcStack_208;
      if (cVar4 == '\0') {
        uStack_180 = 1;
      }
      else if (cVar4 == '\x02') {
        uStack_188 = **(undefined8 **)(pcStack_208 + 8);
      }
      else if (cVar4 == '\x01') {
        uStack_190 = *(undefined8 *)**(undefined8 **)(pcStack_208 + 8);
      }
      else {
        uStack_180 = 0;
      }
      pcStack_200 = (char *)0x0;
      uStack_1f8 = 0;
      uStack_1f0 = 0x8000000000000000;
      if (*pcStack_208 == '\x02') {
        uStack_1f8 = *(undefined8 *)(*(longlong *)(pcStack_208 + 8) + 8);
      }
      else if (*pcStack_208 == '\x01') {
        pcStack_200 = (char *)**(undefined8 **)(pcStack_208 + 8);
      }
      else {
        uStack_1f0 = 1;
      }
      pcStack_198 = pcStack_208;
      while (cVar4 = FUN_18005324c(&pcStack_198,&pcStack_208), cVar4 == '\0') {
        uVar6 = FUN_1800e04aa(&pcStack_198);
        pcStack_f8 = "name";
        pcStack_f0 = (char *)0x4;
        FUN_1800dfa68(&pcStack_118,uVar6,&pcStack_f8);
        FUN_180162253(&pcStack_d8,&pcStack_118);
        FUN_180001ef2(&pcStack_118);
        pcStack_118 = "list";
        uStack_110 = 4;
        FUN_1800dcf0b(&pcStack_f8,uVar6,&pcStack_118);
        pcVar5 = pcStack_f0;
        for (pcVar8 = pcStack_f8; pcVar8 != pcVar5; pcVar8 = pcVar8 + 0x10) {
          pcStack_118 = "parameters";
          uStack_110 = 10;
          FUN_1800dcf0b(&pcStack_228,pcVar8,&pcStack_118);
          pcVar1 = pcStack_220;
          for (pcVar7 = pcStack_228; pcVar7 != pcVar1; pcVar7 = pcVar7 + 0x10) {
            pcStack_248 = (char *)0x0;
            pcStack_240 = (char *)0x0;
            FUN_1800dfa68(&pcStack_118,pcVar7,&pcStack_248);
            FUN_180162253(&pcStack_d8,&pcStack_118);
            FUN_180001ef2(&pcStack_118);
          }
          FUN_180016e50(&pcStack_228);
        }
        FUN_180016e50(&pcStack_f8);
        FUN_1800531d0(&pcStack_198);
      }
      FUN_18006b10c(&DAT_1804188a0,&pcStack_d8);
      FUN_18006ae42(&uStack_b8);
      FUN_180001ef2(&pcStack_d8);
    }
    DAT_1804189ac = 0x3e800000;
    pcVar5 = (char *)FUN_1800136a6(acStack_128,"dataSystem");
    if (*pcVar5 == '\x01') {
      uVar6 = FUN_1800136a6(acStack_128,"dataSystem");
      FUN_180001e92(&pcStack_d8,"dataSystem/armorTypes");
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_a8 = 0;
      ppcStack_a0 = (char **)0x0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_68 = 0;
      FUN_18002266a(&ppcStack_a0);
      pcStack_198 = "armorTypes";
      uStack_190 = 10;
      FUN_1800dcf0b(&pcStack_208,uVar6);
      pcVar5 = pcStack_200;
      for (pcVar8 = pcStack_208; pcVar8 != pcVar5; pcVar8 = pcVar8 + 0x10) {
        pcStack_118 = (char *)0x0;
        uStack_110 = 0;
        FUN_1800dfa68(&pcStack_198,pcVar8,&pcStack_118);
        FUN_180162253(&pcStack_d8,&pcStack_198);
        FUN_180001ef2(&pcStack_198);
      }
      FUN_180016e50(&pcStack_208);
      FUN_18006b10c(&DAT_1804188a0,&pcStack_d8);
      FUN_18006ae42(&uStack_b8);
      FUN_180001ef2(&pcStack_d8);
      FUN_180001e92(&pcStack_d8,"dataSystem/equipTypes");
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_a8 = 0;
      ppcStack_a0 = (char **)0x0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_68 = 0;
      FUN_18002266a(&ppcStack_a0);
      pcStack_198 = "equipTypes";
      uStack_190 = 10;
      FUN_1800dcf0b(&pcStack_208,uVar6);
      pcVar5 = pcStack_200;
      for (pcVar8 = pcStack_208; pcVar8 != pcVar5; pcVar8 = pcVar8 + 0x10) {
        pcStack_118 = (char *)0x0;
        uStack_110 = 0;
        FUN_1800dfa68(&pcStack_198,pcVar8,&pcStack_118);
        FUN_180162253(&pcStack_d8,&pcStack_198);
        FUN_180001ef2(&pcStack_198);
      }
      FUN_180016e50(&pcStack_208);
      FUN_18006b10c(&DAT_1804188a0,&pcStack_d8);
      FUN_18006ae42(&uStack_b8);
      FUN_180001ef2(&pcStack_d8);
      FUN_180001e92(&pcStack_d8,"dataSystem/skillTypes");
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_a8 = 0;
      ppcStack_a0 = (char **)0x0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_68 = 0;
      FUN_18002266a(&ppcStack_a0);
      pcStack_198 = "skillTypes";
      uStack_190 = 10;
      FUN_1800dcf0b(&pcStack_208,uVar6);
      pcVar5 = pcStack_200;
      for (pcVar8 = pcStack_208; pcVar8 != pcVar5; pcVar8 = pcVar8 + 0x10) {
        pcStack_118 = (char *)0x0;
        uStack_110 = 0;
        FUN_1800dfa68(&pcStack_198,pcVar8,&pcStack_118);
        FUN_180162253(&pcStack_d8,&pcStack_198);
        FUN_180001ef2(&pcStack_198);
      }
      FUN_180016e50(&pcStack_208);
      FUN_18006b10c(&DAT_1804188a0,&pcStack_d8);
      FUN_18006ae42(&uStack_b8);
      FUN_180001ef2(&pcStack_d8);
      FUN_180001e92(&pcStack_d8,"dataSystem/weaponTypes");
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_a8 = 0;
      ppcStack_a0 = (char **)0x0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_68 = 0;
      FUN_18002266a(&ppcStack_a0);
      pcStack_198 = "weaponTypes";
      uStack_190 = 0xb;
      FUN_1800dcf0b(&pcStack_208,uVar6);
      pcVar5 = pcStack_200;
      for (pcVar8 = pcStack_208; pcVar8 != pcVar5; pcVar8 = pcVar8 + 0x10) {
        pcStack_118 = (char *)0x0;
        uStack_110 = 0;
        FUN_1800dfa68(&pcStack_198,pcVar8,&pcStack_118);
        FUN_180162253(&pcStack_d8,&pcStack_198);
        FUN_180001ef2(&pcStack_198);
      }
      FUN_180016e50(&pcStack_208);
      FUN_18006b10c(&DAT_1804188a0,&pcStack_d8);
      FUN_18006ae42(&uStack_b8);
      FUN_180001ef2(&pcStack_d8);
      FUN_180001e92(&pcStack_d8,"dataSystem/switches");
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_a8 = 0;
      ppcStack_a0 = (char **)0x0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_68 = 0;
      FUN_18002266a(&ppcStack_a0);
      pcStack_198 = "switches";
      uStack_190 = 8;
      FUN_1800dcf0b(&pcStack_208,uVar6);
      pcVar5 = pcStack_200;
      for (pcVar8 = pcStack_208; pcVar8 != pcVar5; pcVar8 = pcVar8 + 0x10) {
        pcStack_118 = (char *)0x0;
        uStack_110 = 0;
        FUN_1800dfa68(&pcStack_198,pcVar8,&pcStack_118);
        FUN_180162253(&pcStack_d8,&pcStack_198);
        FUN_180001ef2(&pcStack_198);
      }
      FUN_180016e50(&pcStack_208);
      FUN_18006b10c(&DAT_1804188a0,&pcStack_d8);
      FUN_18006ae42(&uStack_b8);
      FUN_180001ef2(&pcStack_d8);
      FUN_180001e92(&pcStack_d8,"dataSystem/variables");
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_a8 = 0;
      ppcStack_a0 = (char **)0x0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_68 = 0;
      FUN_18002266a(&ppcStack_a0);
      pcStack_198 = "variables";
      uStack_190 = 9;
      FUN_1800dcf0b(&pcStack_208,uVar6);
      pcVar5 = pcStack_200;
      for (pcVar8 = pcStack_208; pcVar8 != pcVar5; pcVar8 = pcVar8 + 0x10) {
        pcStack_118 = (char *)0x0;
        uStack_110 = 0;
        FUN_1800dfa68(&pcStack_198,pcVar8,&pcStack_118);
        FUN_180162253(&pcStack_d8,&pcStack_198);
        FUN_180001ef2(&pcStack_198);
      }
      FUN_180016e50(&pcStack_208);
      FUN_18006b10c(&DAT_1804188a0,&pcStack_d8);
      FUN_18006ae42(&uStack_b8);
      FUN_180001ef2(&pcStack_d8);
      FUN_180001e92(&pcStack_d8,"dataSystem/gameTitle");
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_a8 = 0;
      ppcStack_a0 = (char **)0x0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_68 = 0;
      FUN_18002266a(&ppcStack_a0);
      pcStack_208 = "gameTitle";
      pcStack_200 = (char *)0x9;
      FUN_1800dfa68(&pcStack_198,uVar6);
      FUN_180162253(&pcStack_d8,&pcStack_198);
      FUN_180001ef2(&pcStack_198);
      FUN_18006b10c(&DAT_1804188a0,&pcStack_d8);
      FUN_18006ae42(&uStack_b8);
      FUN_180001ef2(&pcStack_d8);
      FUN_180001e92(&pcStack_d8,"dataSystem/currencyUnit");
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_a8 = 0;
      ppcStack_a0 = (char **)0x0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_68 = 0;
      FUN_18002266a(&ppcStack_a0);
      pcStack_208 = "currencyUnit";
      pcStack_200 = (char *)0xc;
      FUN_1800dfa68(&pcStack_198,uVar6);
      FUN_180162253(&pcStack_d8,&pcStack_198);
      FUN_180001ef2(&pcStack_198);
      FUN_18006b10c(&DAT_1804188a0,&pcStack_d8);
      FUN_18006ae42(&uStack_b8);
      FUN_180001ef2(&pcStack_d8);
      FUN_180001e92(&pcStack_118,"dataSystem/terms/");
      pcStack_d8 = "terms";
      uStack_d0 = 5;
      FUN_1801623f6(&pcStack_228,uVar6);
      pcVar5 = pcStack_228;
      pcStack_268 = *(char **)pcStack_228;
      while (pcVar8 = pcStack_268, pcStack_268 != pcVar5) {
        FUN_1801624fc(&pcStack_d8,&pcStack_118,pcStack_268 + 0x20);
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_a8 = 0;
        ppcStack_a0 = (char **)0x0;
        uStack_b8 = 0;
        uStack_b0 = 0;
        uStack_68 = 0;
        FUN_18002266a(&ppcStack_a0);
        pcVar1 = pcVar8 + 0x40;
        if (*pcVar1 == '\x01') {
          pcStack_250 = pcVar1;
          FUN_1800dfbe0(&pcStack_250,&pcStack_198);
          FUN_1800dfc96(&pcStack_250,&pcStack_208);
          while (cVar4 = FUN_18005324c(&pcStack_198,&pcStack_208), cVar4 == '\0') {
            pcStack_248 = (char *)0x0;
            pcStack_240 = (char *)0x0;
            uVar6 = FUN_1800e04aa(&pcStack_198);
            FUN_1800dfa68(&pcStack_f8,uVar6,&pcStack_248);
            FUN_180162253(&pcStack_d8,&pcStack_f8);
            FUN_180001ef2(&pcStack_f8);
            FUN_1800531d0(&pcStack_198);
            lStack_178 = lStack_178 + 1;
          }
          FUN_1800dfd44(&pcStack_208);
          FUN_1800dfd44(&pcStack_198);
        }
        else if (*pcVar1 == '\x02') {
          uStack_190 = 0;
          uStack_180 = 0x8000000000000000;
          puVar2 = *(undefined8 **)(pcVar8 + 0x48);
          uStack_188 = *puVar2;
          pcStack_200 = (char *)0x0;
          uStack_1f0 = 0x8000000000000000;
          uStack_1f8 = puVar2[1];
          pcStack_208 = pcVar1;
          pcStack_198 = pcVar1;
          while (cVar4 = FUN_18005324c(&pcStack_198,&pcStack_208), cVar4 == '\0') {
            uVar6 = FUN_1800e04aa(&pcStack_198);
            pcStack_248 = (char *)0x0;
            pcStack_240 = (char *)0x0;
            FUN_1800dfa68(&pcStack_f8,uVar6,&pcStack_248);
            FUN_180162253(&pcStack_d8,&pcStack_f8);
            FUN_180001ef2(&pcStack_f8);
            FUN_1800531d0(&pcStack_198);
          }
        }
        FUN_18006b10c(&DAT_1804188a0,&pcStack_d8);
        FUN_18006ae42(&uStack_b8);
        FUN_180001ef2(&pcStack_d8);
        FUN_180016c4c(&pcStack_268);
      }
      FUN_180016c8e(&pcStack_228,&pcStack_228,*(undefined8 *)(pcStack_228 + 8));
      thunk_FUN_1802464a0(pcStack_228,0x50);
      FUN_180001ef2(&pcStack_118);
    }
    DAT_1804189ac = 0x3e8a3d71;
    pcVar5 = (char *)FUN_1800136a6(acStack_128,"plugins");
    if (*pcVar5 == '\x02') {
      FUN_180001e92(&pcStack_d8,"plugins");
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_a8 = 0;
      ppcStack_a0 = (char **)0x0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_68 = 0;
      FUN_18002266a(&ppcStack_a0);
      pcStack_208 = (char *)FUN_1800136a6(acStack_128,"plugins");
      uStack_190 = 0;
      uStack_188 = 0;
      uStack_180 = 0x8000000000000000;
      cVar4 = *pcStack_208;
      if (cVar4 == '\0') {
        uStack_180 = 1;
      }
      else if (cVar4 == '\x02') {
        uStack_188 = **(undefined8 **)(pcStack_208 + 8);
      }
      else if (cVar4 == '\x01') {
        uStack_190 = *(undefined8 *)**(undefined8 **)(pcStack_208 + 8);
      }
      else {
        uStack_180 = 0;
      }
      pcStack_200 = (char *)0x0;
      uStack_1f8 = 0;
      uStack_1f0 = 0x8000000000000000;
      if (*pcStack_208 == '\x02') {
        uStack_1f8 = *(undefined8 *)(*(longlong *)(pcStack_208 + 8) + 8);
      }
      else if (*pcStack_208 == '\x01') {
        pcStack_200 = (char *)**(undefined8 **)(pcStack_208 + 8);
      }
      else {
        uStack_1f0 = 1;
      }
      pcStack_198 = pcStack_208;
      while (cVar4 = FUN_18005324c(&pcStack_198,&pcStack_208), cVar4 == '\0') {
        uVar6 = FUN_1800e04aa(&pcStack_198);
        pcStack_118 = "parameters";
        uStack_110 = 10;
        FUN_1801623f6(&pcStack_f8,uVar6,&pcStack_118);
        pcVar5 = pcStack_f8;
        pcStack_248 = *(char **)pcStack_f8;
        while (pcStack_248 != pcVar5) {
          pcStack_228 = (char *)0x0;
          pcStack_220 = (char *)0x0;
          FUN_1800dfa68(&pcStack_118,pcStack_248 + 0x40,&pcStack_228);
          FUN_180162253(&pcStack_d8,&pcStack_118);
          FUN_180001ef2(&pcStack_118);
          FUN_180016c4c(&pcStack_248);
        }
        FUN_180016c8e(&pcStack_f8,&pcStack_f8,*(undefined8 *)(pcStack_f8 + 8));
        thunk_FUN_1802464a0(pcStack_f8,0x50);
        FUN_1800531d0(&pcStack_198);
      }
      FUN_18006b10c(&DAT_1804188a0,&pcStack_d8);
      FUN_18006ae42(&uStack_b8);
      FUN_180001ef2(&pcStack_d8);
    }
    DAT_1804189ac = 0x3e99999a;
    pcStack_f8 = (char *)0x0;
    pcStack_f0 = (char *)0x0;
    uStack_e8 = 0;
    pcVar5 = (char *)FUN_1800136a6(acStack_128,"dataMapInfos");
    if (*pcVar5 == '\x02') {
      FUN_180001e92(&pcStack_d8,"dataMapInfos");
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_a8 = 0;
      ppcStack_a0 = (char **)0x0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_68 = 0;
      FUN_18002266a(&ppcStack_a0);
      pcStack_208 = (char *)FUN_1800136a6(acStack_128,"dataMapInfos");
      uStack_190 = 0;
      uStack_188 = 0;
      uStack_180 = 0x8000000000000000;
      cVar4 = *pcStack_208;
      if (cVar4 == '\0') {
        uStack_180 = 1;
      }
      else if (cVar4 == '\x02') {
        uStack_188 = **(undefined8 **)(pcStack_208 + 8);
      }
      else if (cVar4 == '\x01') {
        uStack_190 = *(undefined8 *)**(undefined8 **)(pcStack_208 + 8);
      }
      else {
        uStack_180 = 0;
      }
      pcStack_200 = (char *)0x0;
      uStack_1f8 = 0;
      uStack_1f0 = 0x8000000000000000;
      if (*pcStack_208 == '\x02') {
        uStack_1f8 = *(undefined8 *)(*(longlong *)(pcStack_208 + 8) + 8);
      }
      else if (*pcStack_208 == '\x01') {
        pcStack_200 = (char *)**(undefined8 **)(pcStack_208 + 8);
      }
      else {
        uStack_1f0 = 1;
      }
      pcStack_198 = pcStack_208;
      while (cVar4 = FUN_18005324c(&pcStack_198,&pcStack_208), cVar4 == '\0') {
        pcVar5 = (char *)FUN_1800e04aa(&pcStack_198);
        if (*pcVar5 == '\x01') {
          pcStack_228 = "id";
          pcStack_220 = (char *)0x2;
          FUN_1800df105(&pcStack_118,pcVar5,&pcStack_228);
          FUN_180163336(&pcStack_f8,&pcStack_118);
          FUN_1800137c6(&pcStack_118);
          pcStack_228 = "name";
          pcStack_220 = (char *)0x4;
          FUN_1800dfa68(&pcStack_118,pcVar5,&pcStack_228);
          FUN_180162253(&pcStack_d8,&pcStack_118);
          FUN_180001ef2(&pcStack_118);
        }
        FUN_1800531d0(&pcStack_198);
      }
      FUN_18006b10c(&DAT_1804188a0,&pcStack_d8);
      FUN_18006ae42(&uStack_b8);
      FUN_180001ef2(&pcStack_d8);
    }
    DAT_1804189ac = 0x3eb33333;
    pcStack_198 = (char *)0x0;
    uStack_190 = 0;
    uStack_188 = 0;
    FUN_18009c334(&pcStack_198,(longlong)pcStack_f0 - (longlong)pcStack_f8 >> 2,&pcStack_f8);
    ppcStack_a0 = (char **)0x0;
    FUN_180163558(&pcStack_d8,&pcStack_198);
    ppcStack_a0 = &pcStack_d8;
    FUN_18001405b(&pcStack_d8);
    if (ppcStack_a0 != (char **)0x0) {
      (**(code **)(*ppcStack_a0 + 0x20))(ppcStack_a0,ppcStack_a0 != &pcStack_d8);
      ppcStack_a0 = (char **)0x0;
    }
    FUN_180004cea(&pcStack_198);
    FUN_180004cea(&pcStack_f8);
  }
  else {
    FUN_18016255e();
  }
  FUN_1800137c6(acStack_128);
  return;
}

