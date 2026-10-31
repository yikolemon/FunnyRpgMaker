/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18015b78c */

void FUN_18015b78c(void)

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
  char *local_268;
  undefined8 uStack_260;
  char *local_250;
  char *local_248;
  char *pcStack_240;
  char *local_228;
  char *pcStack_220;
  char *local_208;
  char *local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  char *local_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  longlong local_178;
  char local_128 [16];
  char *local_118;
  undefined8 uStack_110;
  char *local_f8;
  char *pcStack_f0;
  undefined8 local_e8;
  char *local_d8;
  undefined8 local_d0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  char **ppcStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  FUN_180001e92(&local_d8,
                "\n({\n    dataActors: $dataActors,\n    dataClasses: $dataClasses,\n    dataSkills: $dataSkills,\n    dataItems: $dataItems,\n    dataWeapons: $dataWeapons,\n    dataArmors: $dataArmors,\n    dataEnemies: $dataEnemies,\n    dataTroops: $dataTroops,\n    dataStates: $dataStates,\n    dataAnimations: $dataAnimations,\n    dataTilesets: $dataTilesets,\n    dataCommonEvents: $dataCommonEvents,\n    dataSystem: $dataSystem,\n    plugins: $plugins,\n    dataMapInfos: $dataMapInfos,\n})\n"
               );
  FUN_180013de7(local_128,&local_d8);
  FUN_180001ef2(&local_d8);
  if (local_128[0] == '\x01') {
    DAT_1804189ac = 0x3dcccccd;
    pcVar5 = (char *)FUN_1800136a6(local_128,"dataActors");
    if (*pcVar5 == '\x02') {
      FUN_180001e92(&local_d8,"dataActors");
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      ppcStack_a0 = (char **)0x0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_68 = 0;
      FUN_18002266a(&ppcStack_a0);
      local_208 = (char *)FUN_1800136a6(local_128,"dataActors");
      uStack_190 = 0;
      uStack_188 = 0;
      local_180 = 0x8000000000000000;
      cVar4 = *local_208;
      if (cVar4 == '\0') {
        local_180 = 1;
      }
      else if (cVar4 == '\x02') {
        uStack_188 = **(undefined8 **)(local_208 + 8);
      }
      else if (cVar4 == '\x01') {
        uStack_190 = *(undefined8 *)**(undefined8 **)(local_208 + 8);
      }
      else {
        local_180 = 0;
      }
      local_200 = (char *)0x0;
      uStack_1f8 = 0;
      local_1f0 = 0x8000000000000000;
      if (*local_208 == '\x02') {
        uStack_1f8 = *(undefined8 *)(*(longlong *)(local_208 + 8) + 8);
      }
      else if (*local_208 == '\x01') {
        local_200 = (char *)**(undefined8 **)(local_208 + 8);
      }
      else {
        local_1f0 = 1;
      }
      local_198 = local_208;
      while (cVar4 = FUN_18005324c(&local_198,&local_208), cVar4 == '\0') {
        uVar6 = FUN_1800e04aa(&local_198);
        local_f8 = "name";
        pcStack_f0 = (char *)0x4;
        FUN_1800dfa68(&local_118,uVar6,&local_f8);
        FUN_180162253(&local_d8,&local_118);
        FUN_180001ef2(&local_118);
        FUN_1800531d0(&local_198);
      }
      FUN_18006b10c(&DAT_1804188a0,&local_d8);
      FUN_18006ae42(&local_b8);
      FUN_180001ef2(&local_d8);
    }
    DAT_1804189ac = 0x3de147ae;
    pcVar5 = (char *)FUN_1800136a6(local_128,"dataClasses");
    if (*pcVar5 == '\x02') {
      FUN_180001e92(&local_d8,"dataClasses");
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      ppcStack_a0 = (char **)0x0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_68 = 0;
      FUN_18002266a(&ppcStack_a0);
      local_208 = (char *)FUN_1800136a6(local_128,"dataClasses");
      uStack_190 = 0;
      uStack_188 = 0;
      local_180 = 0x8000000000000000;
      cVar4 = *local_208;
      if (cVar4 == '\0') {
        local_180 = 1;
      }
      else if (cVar4 == '\x02') {
        uStack_188 = **(undefined8 **)(local_208 + 8);
      }
      else if (cVar4 == '\x01') {
        uStack_190 = *(undefined8 *)**(undefined8 **)(local_208 + 8);
      }
      else {
        local_180 = 0;
      }
      local_200 = (char *)0x0;
      uStack_1f8 = 0;
      local_1f0 = 0x8000000000000000;
      if (*local_208 == '\x02') {
        uStack_1f8 = *(undefined8 *)(*(longlong *)(local_208 + 8) + 8);
      }
      else if (*local_208 == '\x01') {
        local_200 = (char *)**(undefined8 **)(local_208 + 8);
      }
      else {
        local_1f0 = 1;
      }
      local_198 = local_208;
      while (cVar4 = FUN_18005324c(&local_198,&local_208), cVar4 == '\0') {
        uVar6 = FUN_1800e04aa(&local_198);
        local_f8 = "name";
        pcStack_f0 = (char *)0x4;
        FUN_1800dfa68(&local_118,uVar6,&local_f8);
        FUN_180162253(&local_d8,&local_118);
        FUN_180001ef2(&local_118);
        FUN_1800531d0(&local_198);
      }
      FUN_18006b10c(&DAT_1804188a0,&local_d8);
      FUN_18006ae42(&local_b8);
      FUN_180001ef2(&local_d8);
    }
    DAT_1804189ac = 0x3df5c28f;
    pcVar5 = (char *)FUN_1800136a6(local_128,"dataSkills");
    if (*pcVar5 == '\x02') {
      FUN_180001e92(&local_d8,"dataSkills");
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      ppcStack_a0 = (char **)0x0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_68 = 0;
      FUN_18002266a(&ppcStack_a0);
      local_208 = (char *)FUN_1800136a6(local_128,"dataSkills");
      uStack_190 = 0;
      uStack_188 = 0;
      local_180 = 0x8000000000000000;
      cVar4 = *local_208;
      if (cVar4 == '\0') {
        local_180 = 1;
      }
      else if (cVar4 == '\x02') {
        uStack_188 = **(undefined8 **)(local_208 + 8);
      }
      else if (cVar4 == '\x01') {
        uStack_190 = *(undefined8 *)**(undefined8 **)(local_208 + 8);
      }
      else {
        local_180 = 0;
      }
      local_200 = (char *)0x0;
      uStack_1f8 = 0;
      local_1f0 = 0x8000000000000000;
      if (*local_208 == '\x02') {
        uStack_1f8 = *(undefined8 *)(*(longlong *)(local_208 + 8) + 8);
      }
      else if (*local_208 == '\x01') {
        local_200 = (char *)**(undefined8 **)(local_208 + 8);
      }
      else {
        local_1f0 = 1;
      }
      local_198 = local_208;
      while (cVar4 = FUN_18005324c(&local_198,&local_208), cVar4 == '\0') {
        uVar6 = FUN_1800e04aa(&local_198);
        local_f8 = "name";
        pcStack_f0 = (char *)0x4;
        FUN_1800dfa68(&local_118,uVar6,&local_f8);
        FUN_180162253(&local_d8,&local_118);
        FUN_180001ef2(&local_118);
        local_f8 = "message1";
        pcStack_f0 = (char *)0x8;
        FUN_1800dfa68(&local_118,uVar6,&local_f8);
        FUN_180162253(&local_d8,&local_118);
        FUN_180001ef2(&local_118);
        local_f8 = "message2";
        pcStack_f0 = (char *)0x8;
        FUN_1800dfa68(&local_118,uVar6,&local_f8);
        FUN_180162253(&local_d8,&local_118);
        FUN_180001ef2(&local_118);
        FUN_1800531d0(&local_198);
      }
      FUN_18006b10c(&DAT_1804188a0,&local_d8);
      FUN_18006ae42(&local_b8);
      FUN_180001ef2(&local_d8);
    }
    DAT_1804189ac = 0x3e051eb8;
    pcVar5 = (char *)FUN_1800136a6(local_128,"dataItems");
    if (*pcVar5 == '\x02') {
      FUN_180001e92(&local_d8,"dataItems");
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      ppcStack_a0 = (char **)0x0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_68 = 0;
      FUN_18002266a(&ppcStack_a0);
      local_208 = (char *)FUN_1800136a6(local_128,"dataItems");
      uStack_190 = 0;
      uStack_188 = 0;
      local_180 = 0x8000000000000000;
      cVar4 = *local_208;
      if (cVar4 == '\0') {
        local_180 = 1;
      }
      else if (cVar4 == '\x02') {
        uStack_188 = **(undefined8 **)(local_208 + 8);
      }
      else if (cVar4 == '\x01') {
        uStack_190 = *(undefined8 *)**(undefined8 **)(local_208 + 8);
      }
      else {
        local_180 = 0;
      }
      local_200 = (char *)0x0;
      uStack_1f8 = 0;
      local_1f0 = 0x8000000000000000;
      if (*local_208 == '\x02') {
        uStack_1f8 = *(undefined8 *)(*(longlong *)(local_208 + 8) + 8);
      }
      else if (*local_208 == '\x01') {
        local_200 = (char *)**(undefined8 **)(local_208 + 8);
      }
      else {
        local_1f0 = 1;
      }
      local_198 = local_208;
      while (cVar4 = FUN_18005324c(&local_198,&local_208), cVar4 == '\0') {
        uVar6 = FUN_1800e04aa(&local_198);
        local_f8 = "name";
        pcStack_f0 = (char *)0x4;
        FUN_1800dfa68(&local_118,uVar6,&local_f8);
        FUN_180162253(&local_d8,&local_118);
        FUN_180001ef2(&local_118);
        local_f8 = "description";
        pcStack_f0 = (char *)0xb;
        FUN_1800dfa68(&local_118,uVar6,&local_f8);
        FUN_180162253(&local_d8,&local_118);
        FUN_180001ef2(&local_118);
        FUN_1800531d0(&local_198);
      }
      FUN_18006b10c(&DAT_1804188a0,&local_d8);
      FUN_18006ae42(&local_b8);
      FUN_180001ef2(&local_d8);
    }
    DAT_1804189ac = 0x3e0f5c29;
    pcVar5 = (char *)FUN_1800136a6(local_128,"dataWeapons");
    if (*pcVar5 == '\x02') {
      FUN_180001e92(&local_d8,"dataWeapons");
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      ppcStack_a0 = (char **)0x0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_68 = 0;
      FUN_18002266a(&ppcStack_a0);
      local_208 = (char *)FUN_1800136a6(local_128,"dataWeapons");
      uStack_190 = 0;
      uStack_188 = 0;
      local_180 = 0x8000000000000000;
      cVar4 = *local_208;
      if (cVar4 == '\0') {
        local_180 = 1;
      }
      else if (cVar4 == '\x02') {
        uStack_188 = **(undefined8 **)(local_208 + 8);
      }
      else if (cVar4 == '\x01') {
        uStack_190 = *(undefined8 *)**(undefined8 **)(local_208 + 8);
      }
      else {
        local_180 = 0;
      }
      local_200 = (char *)0x0;
      uStack_1f8 = 0;
      local_1f0 = 0x8000000000000000;
      if (*local_208 == '\x02') {
        uStack_1f8 = *(undefined8 *)(*(longlong *)(local_208 + 8) + 8);
      }
      else if (*local_208 == '\x01') {
        local_200 = (char *)**(undefined8 **)(local_208 + 8);
      }
      else {
        local_1f0 = 1;
      }
      local_198 = local_208;
      while (cVar4 = FUN_18005324c(&local_198,&local_208), cVar4 == '\0') {
        uVar6 = FUN_1800e04aa(&local_198);
        local_f8 = "name";
        pcStack_f0 = (char *)0x4;
        FUN_1800dfa68(&local_118,uVar6,&local_f8);
        FUN_180162253(&local_d8,&local_118);
        FUN_180001ef2(&local_118);
        local_f8 = "description";
        pcStack_f0 = (char *)0xb;
        FUN_1800dfa68(&local_118,uVar6,&local_f8);
        FUN_180162253(&local_d8,&local_118);
        FUN_180001ef2(&local_118);
        FUN_1800531d0(&local_198);
      }
      FUN_18006b10c(&DAT_1804188a0,&local_d8);
      FUN_18006ae42(&local_b8);
      FUN_180001ef2(&local_d8);
    }
    DAT_1804189ac = 0x3e19999a;
    pcVar5 = (char *)FUN_1800136a6(local_128,"dataArmors");
    if (*pcVar5 == '\x02') {
      FUN_180001e92(&local_d8,"dataArmors");
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      ppcStack_a0 = (char **)0x0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_68 = 0;
      FUN_18002266a(&ppcStack_a0);
      local_208 = (char *)FUN_1800136a6(local_128,"dataArmors");
      uStack_190 = 0;
      uStack_188 = 0;
      local_180 = 0x8000000000000000;
      cVar4 = *local_208;
      if (cVar4 == '\0') {
        local_180 = 1;
      }
      else if (cVar4 == '\x02') {
        uStack_188 = **(undefined8 **)(local_208 + 8);
      }
      else if (cVar4 == '\x01') {
        uStack_190 = *(undefined8 *)**(undefined8 **)(local_208 + 8);
      }
      else {
        local_180 = 0;
      }
      local_200 = (char *)0x0;
      uStack_1f8 = 0;
      local_1f0 = 0x8000000000000000;
      if (*local_208 == '\x02') {
        uStack_1f8 = *(undefined8 *)(*(longlong *)(local_208 + 8) + 8);
      }
      else if (*local_208 == '\x01') {
        local_200 = (char *)**(undefined8 **)(local_208 + 8);
      }
      else {
        local_1f0 = 1;
      }
      local_198 = local_208;
      while (cVar4 = FUN_18005324c(&local_198,&local_208), cVar4 == '\0') {
        uVar6 = FUN_1800e04aa(&local_198);
        local_f8 = "name";
        pcStack_f0 = (char *)0x4;
        FUN_1800dfa68(&local_118,uVar6,&local_f8);
        FUN_180162253(&local_d8,&local_118);
        FUN_180001ef2(&local_118);
        local_f8 = "description";
        pcStack_f0 = (char *)0xb;
        FUN_1800dfa68(&local_118,uVar6,&local_f8);
        FUN_180162253(&local_d8,&local_118);
        FUN_180001ef2(&local_118);
        FUN_1800531d0(&local_198);
      }
      FUN_18006b10c(&DAT_1804188a0,&local_d8);
      FUN_18006ae42(&local_b8);
      FUN_180001ef2(&local_d8);
    }
    DAT_1804189ac = 0x3e23d70a;
    pcVar5 = (char *)FUN_1800136a6(local_128,"dataEnemies");
    if (*pcVar5 == '\x02') {
      FUN_180001e92(&local_d8,"dataEnemies");
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      ppcStack_a0 = (char **)0x0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_68 = 0;
      FUN_18002266a(&ppcStack_a0);
      local_208 = (char *)FUN_1800136a6(local_128,"dataEnemies");
      uStack_190 = 0;
      uStack_188 = 0;
      local_180 = 0x8000000000000000;
      cVar4 = *local_208;
      if (cVar4 == '\0') {
        local_180 = 1;
      }
      else if (cVar4 == '\x02') {
        uStack_188 = **(undefined8 **)(local_208 + 8);
      }
      else if (cVar4 == '\x01') {
        uStack_190 = *(undefined8 *)**(undefined8 **)(local_208 + 8);
      }
      else {
        local_180 = 0;
      }
      local_200 = (char *)0x0;
      uStack_1f8 = 0;
      local_1f0 = 0x8000000000000000;
      if (*local_208 == '\x02') {
        uStack_1f8 = *(undefined8 *)(*(longlong *)(local_208 + 8) + 8);
      }
      else if (*local_208 == '\x01') {
        local_200 = (char *)**(undefined8 **)(local_208 + 8);
      }
      else {
        local_1f0 = 1;
      }
      local_198 = local_208;
      while (cVar4 = FUN_18005324c(&local_198,&local_208), cVar4 == '\0') {
        uVar6 = FUN_1800e04aa(&local_198);
        local_f8 = "name";
        pcStack_f0 = (char *)0x4;
        FUN_1800dfa68(&local_118,uVar6,&local_f8);
        FUN_180162253(&local_d8,&local_118);
        FUN_180001ef2(&local_118);
        FUN_1800531d0(&local_198);
      }
      FUN_18006b10c(&DAT_1804188a0,&local_d8);
      FUN_18006ae42(&local_b8);
      FUN_180001ef2(&local_d8);
    }
    DAT_1804189ac = 0x3e2e147b;
    pcVar5 = (char *)FUN_1800136a6(local_128,"dataTroops");
    if (*pcVar5 == '\x02') {
      FUN_180001e92(&local_d8,"dataTroops");
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      ppcStack_a0 = (char **)0x0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_68 = 0;
      FUN_18002266a(&ppcStack_a0);
      local_208 = (char *)FUN_1800136a6(local_128,"dataTroops");
      uStack_190 = 0;
      uStack_188 = 0;
      local_180 = 0x8000000000000000;
      cVar4 = *local_208;
      if (cVar4 == '\0') {
        local_180 = 1;
      }
      else if (cVar4 == '\x02') {
        uStack_188 = **(undefined8 **)(local_208 + 8);
      }
      else if (cVar4 == '\x01') {
        uStack_190 = *(undefined8 *)**(undefined8 **)(local_208 + 8);
      }
      else {
        local_180 = 0;
      }
      local_200 = (char *)0x0;
      uStack_1f8 = 0;
      local_1f0 = 0x8000000000000000;
      if (*local_208 == '\x02') {
        uStack_1f8 = *(undefined8 *)(*(longlong *)(local_208 + 8) + 8);
      }
      else if (*local_208 == '\x01') {
        local_200 = (char *)**(undefined8 **)(local_208 + 8);
      }
      else {
        local_1f0 = 1;
      }
      local_198 = local_208;
      while (cVar4 = FUN_18005324c(&local_198,&local_208), cVar4 == '\0') {
        uVar6 = FUN_1800e04aa(&local_198);
        local_f8 = "name";
        pcStack_f0 = (char *)0x4;
        FUN_1800dfa68(&local_118,uVar6,&local_f8);
        FUN_180162253(&local_d8,&local_118);
        FUN_180001ef2(&local_118);
        local_118 = "pages";
        uStack_110 = 5;
        FUN_1800dcf0b(&local_f8,uVar6,&local_118);
        pcVar5 = pcStack_f0;
        for (pcVar8 = local_f8; pcVar8 != pcVar5; pcVar8 = pcVar8 + 0x10) {
          local_118 = "list";
          uStack_110 = 4;
          FUN_1800dcf0b(&local_228,pcVar8,&local_118);
          pcVar1 = pcStack_220;
          for (pcVar7 = local_228; pcVar7 != pcVar1; pcVar7 = pcVar7 + 0x10) {
            local_118 = "parameters";
            uStack_110 = 10;
            FUN_1800dcf0b(&local_248,pcVar7,&local_118);
            pcVar3 = pcStack_240;
            for (pcVar9 = local_248; pcVar9 != pcVar3; pcVar9 = pcVar9 + 0x10) {
              local_268 = (char *)0x0;
              uStack_260 = 0;
              FUN_1800dfa68(&local_118,pcVar9,&local_268);
              FUN_180162253(&local_d8,&local_118);
              FUN_180001ef2(&local_118);
            }
            FUN_180016e50(&local_248);
          }
          FUN_180016e50(&local_228);
        }
        FUN_180016e50(&local_f8);
        FUN_1800531d0(&local_198);
      }
      FUN_18006b10c(&DAT_1804188a0,&local_d8);
      FUN_18006ae42(&local_b8);
      FUN_180001ef2(&local_d8);
    }
    DAT_1804189ac = 0x3e3851ec;
    pcVar5 = (char *)FUN_1800136a6(local_128,"dataStates");
    if (*pcVar5 == '\x02') {
      FUN_180001e92(&local_d8,"dataStates");
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      ppcStack_a0 = (char **)0x0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_68 = 0;
      FUN_18002266a(&ppcStack_a0);
      local_208 = (char *)FUN_1800136a6(local_128,"dataStates");
      uStack_190 = 0;
      uStack_188 = 0;
      local_180 = 0x8000000000000000;
      cVar4 = *local_208;
      if (cVar4 == '\0') {
        local_180 = 1;
      }
      else if (cVar4 == '\x02') {
        uStack_188 = **(undefined8 **)(local_208 + 8);
      }
      else if (cVar4 == '\x01') {
        uStack_190 = *(undefined8 *)**(undefined8 **)(local_208 + 8);
      }
      else {
        local_180 = 0;
      }
      local_200 = (char *)0x0;
      uStack_1f8 = 0;
      local_1f0 = 0x8000000000000000;
      if (*local_208 == '\x02') {
        uStack_1f8 = *(undefined8 *)(*(longlong *)(local_208 + 8) + 8);
      }
      else if (*local_208 == '\x01') {
        local_200 = (char *)**(undefined8 **)(local_208 + 8);
      }
      else {
        local_1f0 = 1;
      }
      local_198 = local_208;
      while (cVar4 = FUN_18005324c(&local_198,&local_208), cVar4 == '\0') {
        uVar6 = FUN_1800e04aa(&local_198);
        local_f8 = "name";
        pcStack_f0 = (char *)0x4;
        FUN_1800dfa68(&local_118,uVar6,&local_f8);
        FUN_180162253(&local_d8,&local_118);
        FUN_180001ef2(&local_118);
        local_f8 = "message1";
        pcStack_f0 = (char *)0x8;
        FUN_1800dfa68(&local_118,uVar6,&local_f8);
        FUN_180162253(&local_d8,&local_118);
        FUN_180001ef2(&local_118);
        local_f8 = "message2";
        pcStack_f0 = (char *)0x8;
        FUN_1800dfa68(&local_118,uVar6,&local_f8);
        FUN_180162253(&local_d8,&local_118);
        FUN_180001ef2(&local_118);
        local_f8 = "message3";
        pcStack_f0 = (char *)0x8;
        FUN_1800dfa68(&local_118,uVar6,&local_f8);
        FUN_180162253(&local_d8,&local_118);
        FUN_180001ef2(&local_118);
        local_f8 = "message4";
        pcStack_f0 = (char *)0x8;
        FUN_1800dfa68(&local_118,uVar6,&local_f8);
        FUN_180162253(&local_d8,&local_118);
        FUN_180001ef2(&local_118);
        FUN_1800531d0(&local_198);
      }
      FUN_18006b10c(&DAT_1804188a0,&local_d8);
      FUN_18006ae42(&local_b8);
      FUN_180001ef2(&local_d8);
    }
    DAT_1804189ac = 0x3e428f5c;
    pcVar5 = (char *)FUN_1800136a6(local_128,"dataAnimations");
    if (*pcVar5 == '\x02') {
      FUN_180001e92(&local_d8,"dataAnimations");
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      ppcStack_a0 = (char **)0x0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_68 = 0;
      FUN_18002266a(&ppcStack_a0);
      local_208 = (char *)FUN_1800136a6(local_128,"dataAnimations");
      uStack_190 = 0;
      uStack_188 = 0;
      local_180 = 0x8000000000000000;
      cVar4 = *local_208;
      if (cVar4 == '\0') {
        local_180 = 1;
      }
      else if (cVar4 == '\x02') {
        uStack_188 = **(undefined8 **)(local_208 + 8);
      }
      else if (cVar4 == '\x01') {
        uStack_190 = *(undefined8 *)**(undefined8 **)(local_208 + 8);
      }
      else {
        local_180 = 0;
      }
      local_200 = (char *)0x0;
      uStack_1f8 = 0;
      local_1f0 = 0x8000000000000000;
      if (*local_208 == '\x02') {
        uStack_1f8 = *(undefined8 *)(*(longlong *)(local_208 + 8) + 8);
      }
      else if (*local_208 == '\x01') {
        local_200 = (char *)**(undefined8 **)(local_208 + 8);
      }
      else {
        local_1f0 = 1;
      }
      local_198 = local_208;
      while (cVar4 = FUN_18005324c(&local_198,&local_208), cVar4 == '\0') {
        uVar6 = FUN_1800e04aa(&local_198);
        local_f8 = "name";
        pcStack_f0 = (char *)0x4;
        FUN_1800dfa68(&local_118,uVar6,&local_f8);
        FUN_180162253(&local_d8,&local_118);
        FUN_180001ef2(&local_118);
        FUN_1800531d0(&local_198);
      }
      FUN_18006b10c(&DAT_1804188a0,&local_d8);
      FUN_18006ae42(&local_b8);
      FUN_180001ef2(&local_d8);
    }
    DAT_1804189ac = 0x3e4ccccd;
    pcVar5 = (char *)FUN_1800136a6(local_128,"dataTilesets");
    if (*pcVar5 == '\x02') {
      FUN_180001e92(&local_d8,"dataTilesets");
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      ppcStack_a0 = (char **)0x0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_68 = 0;
      FUN_18002266a(&ppcStack_a0);
      local_208 = (char *)FUN_1800136a6(local_128,"dataTilesets");
      uStack_190 = 0;
      uStack_188 = 0;
      local_180 = 0x8000000000000000;
      cVar4 = *local_208;
      if (cVar4 == '\0') {
        local_180 = 1;
      }
      else if (cVar4 == '\x02') {
        uStack_188 = **(undefined8 **)(local_208 + 8);
      }
      else if (cVar4 == '\x01') {
        uStack_190 = *(undefined8 *)**(undefined8 **)(local_208 + 8);
      }
      else {
        local_180 = 0;
      }
      local_200 = (char *)0x0;
      uStack_1f8 = 0;
      local_1f0 = 0x8000000000000000;
      if (*local_208 == '\x02') {
        uStack_1f8 = *(undefined8 *)(*(longlong *)(local_208 + 8) + 8);
      }
      else if (*local_208 == '\x01') {
        local_200 = (char *)**(undefined8 **)(local_208 + 8);
      }
      else {
        local_1f0 = 1;
      }
      local_198 = local_208;
      while (cVar4 = FUN_18005324c(&local_198,&local_208), cVar4 == '\0') {
        uVar6 = FUN_1800e04aa(&local_198);
        local_f8 = "name";
        pcStack_f0 = (char *)0x4;
        FUN_1800dfa68(&local_118,uVar6,&local_f8);
        FUN_180162253(&local_d8,&local_118);
        FUN_180001ef2(&local_118);
        FUN_1800531d0(&local_198);
      }
      FUN_18006b10c(&DAT_1804188a0,&local_d8);
      FUN_18006ae42(&local_b8);
      FUN_180001ef2(&local_d8);
    }
    DAT_1804189ac = 0x3e570a3d;
    pcVar5 = (char *)FUN_1800136a6(local_128,"dataCommonEvents");
    if (*pcVar5 == '\x02') {
      FUN_180001e92(&local_d8,"dataCommonEvents");
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      ppcStack_a0 = (char **)0x0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_68 = 0;
      FUN_18002266a(&ppcStack_a0);
      local_208 = (char *)FUN_1800136a6(local_128,"dataCommonEvents");
      uStack_190 = 0;
      uStack_188 = 0;
      local_180 = 0x8000000000000000;
      cVar4 = *local_208;
      if (cVar4 == '\0') {
        local_180 = 1;
      }
      else if (cVar4 == '\x02') {
        uStack_188 = **(undefined8 **)(local_208 + 8);
      }
      else if (cVar4 == '\x01') {
        uStack_190 = *(undefined8 *)**(undefined8 **)(local_208 + 8);
      }
      else {
        local_180 = 0;
      }
      local_200 = (char *)0x0;
      uStack_1f8 = 0;
      local_1f0 = 0x8000000000000000;
      if (*local_208 == '\x02') {
        uStack_1f8 = *(undefined8 *)(*(longlong *)(local_208 + 8) + 8);
      }
      else if (*local_208 == '\x01') {
        local_200 = (char *)**(undefined8 **)(local_208 + 8);
      }
      else {
        local_1f0 = 1;
      }
      local_198 = local_208;
      while (cVar4 = FUN_18005324c(&local_198,&local_208), cVar4 == '\0') {
        uVar6 = FUN_1800e04aa(&local_198);
        local_f8 = "name";
        pcStack_f0 = (char *)0x4;
        FUN_1800dfa68(&local_118,uVar6,&local_f8);
        FUN_180162253(&local_d8,&local_118);
        FUN_180001ef2(&local_118);
        local_118 = "list";
        uStack_110 = 4;
        FUN_1800dcf0b(&local_f8,uVar6,&local_118);
        pcVar5 = pcStack_f0;
        for (pcVar8 = local_f8; pcVar8 != pcVar5; pcVar8 = pcVar8 + 0x10) {
          local_118 = "parameters";
          uStack_110 = 10;
          FUN_1800dcf0b(&local_228,pcVar8,&local_118);
          pcVar1 = pcStack_220;
          for (pcVar7 = local_228; pcVar7 != pcVar1; pcVar7 = pcVar7 + 0x10) {
            local_248 = (char *)0x0;
            pcStack_240 = (char *)0x0;
            FUN_1800dfa68(&local_118,pcVar7,&local_248);
            FUN_180162253(&local_d8,&local_118);
            FUN_180001ef2(&local_118);
          }
          FUN_180016e50(&local_228);
        }
        FUN_180016e50(&local_f8);
        FUN_1800531d0(&local_198);
      }
      FUN_18006b10c(&DAT_1804188a0,&local_d8);
      FUN_18006ae42(&local_b8);
      FUN_180001ef2(&local_d8);
    }
    DAT_1804189ac = 0x3e800000;
    pcVar5 = (char *)FUN_1800136a6(local_128,"dataSystem");
    if (*pcVar5 == '\x01') {
      uVar6 = FUN_1800136a6(local_128,"dataSystem");
      FUN_180001e92(&local_d8,"dataSystem/armorTypes");
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      ppcStack_a0 = (char **)0x0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_68 = 0;
      FUN_18002266a(&ppcStack_a0);
      local_198 = "armorTypes";
      uStack_190 = 10;
      FUN_1800dcf0b(&local_208,uVar6);
      pcVar5 = local_200;
      for (pcVar8 = local_208; pcVar8 != pcVar5; pcVar8 = pcVar8 + 0x10) {
        local_118 = (char *)0x0;
        uStack_110 = 0;
        FUN_1800dfa68(&local_198,pcVar8,&local_118);
        FUN_180162253(&local_d8,&local_198);
        FUN_180001ef2(&local_198);
      }
      FUN_180016e50(&local_208);
      FUN_18006b10c(&DAT_1804188a0,&local_d8);
      FUN_18006ae42(&local_b8);
      FUN_180001ef2(&local_d8);
      FUN_180001e92(&local_d8,"dataSystem/equipTypes");
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      ppcStack_a0 = (char **)0x0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_68 = 0;
      FUN_18002266a(&ppcStack_a0);
      local_198 = "equipTypes";
      uStack_190 = 10;
      FUN_1800dcf0b(&local_208,uVar6);
      pcVar5 = local_200;
      for (pcVar8 = local_208; pcVar8 != pcVar5; pcVar8 = pcVar8 + 0x10) {
        local_118 = (char *)0x0;
        uStack_110 = 0;
        FUN_1800dfa68(&local_198,pcVar8,&local_118);
        FUN_180162253(&local_d8,&local_198);
        FUN_180001ef2(&local_198);
      }
      FUN_180016e50(&local_208);
      FUN_18006b10c(&DAT_1804188a0,&local_d8);
      FUN_18006ae42(&local_b8);
      FUN_180001ef2(&local_d8);
      FUN_180001e92(&local_d8,"dataSystem/skillTypes");
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      ppcStack_a0 = (char **)0x0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_68 = 0;
      FUN_18002266a(&ppcStack_a0);
      local_198 = "skillTypes";
      uStack_190 = 10;
      FUN_1800dcf0b(&local_208,uVar6);
      pcVar5 = local_200;
      for (pcVar8 = local_208; pcVar8 != pcVar5; pcVar8 = pcVar8 + 0x10) {
        local_118 = (char *)0x0;
        uStack_110 = 0;
        FUN_1800dfa68(&local_198,pcVar8,&local_118);
        FUN_180162253(&local_d8,&local_198);
        FUN_180001ef2(&local_198);
      }
      FUN_180016e50(&local_208);
      FUN_18006b10c(&DAT_1804188a0,&local_d8);
      FUN_18006ae42(&local_b8);
      FUN_180001ef2(&local_d8);
      FUN_180001e92(&local_d8,"dataSystem/weaponTypes");
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      ppcStack_a0 = (char **)0x0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_68 = 0;
      FUN_18002266a(&ppcStack_a0);
      local_198 = "weaponTypes";
      uStack_190 = 0xb;
      FUN_1800dcf0b(&local_208,uVar6);
      pcVar5 = local_200;
      for (pcVar8 = local_208; pcVar8 != pcVar5; pcVar8 = pcVar8 + 0x10) {
        local_118 = (char *)0x0;
        uStack_110 = 0;
        FUN_1800dfa68(&local_198,pcVar8,&local_118);
        FUN_180162253(&local_d8,&local_198);
        FUN_180001ef2(&local_198);
      }
      FUN_180016e50(&local_208);
      FUN_18006b10c(&DAT_1804188a0,&local_d8);
      FUN_18006ae42(&local_b8);
      FUN_180001ef2(&local_d8);
      FUN_180001e92(&local_d8,"dataSystem/switches");
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      ppcStack_a0 = (char **)0x0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_68 = 0;
      FUN_18002266a(&ppcStack_a0);
      local_198 = "switches";
      uStack_190 = 8;
      FUN_1800dcf0b(&local_208,uVar6);
      pcVar5 = local_200;
      for (pcVar8 = local_208; pcVar8 != pcVar5; pcVar8 = pcVar8 + 0x10) {
        local_118 = (char *)0x0;
        uStack_110 = 0;
        FUN_1800dfa68(&local_198,pcVar8,&local_118);
        FUN_180162253(&local_d8,&local_198);
        FUN_180001ef2(&local_198);
      }
      FUN_180016e50(&local_208);
      FUN_18006b10c(&DAT_1804188a0,&local_d8);
      FUN_18006ae42(&local_b8);
      FUN_180001ef2(&local_d8);
      FUN_180001e92(&local_d8,"dataSystem/variables");
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      ppcStack_a0 = (char **)0x0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_68 = 0;
      FUN_18002266a(&ppcStack_a0);
      local_198 = "variables";
      uStack_190 = 9;
      FUN_1800dcf0b(&local_208,uVar6);
      pcVar5 = local_200;
      for (pcVar8 = local_208; pcVar8 != pcVar5; pcVar8 = pcVar8 + 0x10) {
        local_118 = (char *)0x0;
        uStack_110 = 0;
        FUN_1800dfa68(&local_198,pcVar8,&local_118);
        FUN_180162253(&local_d8,&local_198);
        FUN_180001ef2(&local_198);
      }
      FUN_180016e50(&local_208);
      FUN_18006b10c(&DAT_1804188a0,&local_d8);
      FUN_18006ae42(&local_b8);
      FUN_180001ef2(&local_d8);
      FUN_180001e92(&local_d8,"dataSystem/gameTitle");
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      ppcStack_a0 = (char **)0x0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_68 = 0;
      FUN_18002266a(&ppcStack_a0);
      local_208 = "gameTitle";
      local_200 = (char *)0x9;
      FUN_1800dfa68(&local_198,uVar6);
      FUN_180162253(&local_d8,&local_198);
      FUN_180001ef2(&local_198);
      FUN_18006b10c(&DAT_1804188a0,&local_d8);
      FUN_18006ae42(&local_b8);
      FUN_180001ef2(&local_d8);
      FUN_180001e92(&local_d8,"dataSystem/currencyUnit");
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      ppcStack_a0 = (char **)0x0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_68 = 0;
      FUN_18002266a(&ppcStack_a0);
      local_208 = "currencyUnit";
      local_200 = (char *)0xc;
      FUN_1800dfa68(&local_198,uVar6);
      FUN_180162253(&local_d8,&local_198);
      FUN_180001ef2(&local_198);
      FUN_18006b10c(&DAT_1804188a0,&local_d8);
      FUN_18006ae42(&local_b8);
      FUN_180001ef2(&local_d8);
      FUN_180001e92(&local_118,"dataSystem/terms/");
      local_d8 = "terms";
      local_d0 = 5;
      FUN_1801623f6(&local_228,uVar6);
      pcVar5 = local_228;
      local_268 = *(char **)local_228;
      while (pcVar8 = local_268, local_268 != pcVar5) {
        FUN_1801624fc(&local_d8,&local_118,local_268 + 0x20);
        local_78 = 0;
        uStack_70 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_a8 = 0;
        ppcStack_a0 = (char **)0x0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_68 = 0;
        FUN_18002266a(&ppcStack_a0);
        pcVar1 = pcVar8 + 0x40;
        if (*pcVar1 == '\x01') {
          local_250 = pcVar1;
          FUN_1800dfbe0(&local_250,&local_198);
          FUN_1800dfc96(&local_250,&local_208);
          while (cVar4 = FUN_18005324c(&local_198,&local_208), cVar4 == '\0') {
            local_248 = (char *)0x0;
            pcStack_240 = (char *)0x0;
            uVar6 = FUN_1800e04aa(&local_198);
            FUN_1800dfa68(&local_f8,uVar6,&local_248);
            FUN_180162253(&local_d8,&local_f8);
            FUN_180001ef2(&local_f8);
            FUN_1800531d0(&local_198);
            local_178 = local_178 + 1;
          }
          FUN_1800dfd44(&local_208);
          FUN_1800dfd44(&local_198);
        }
        else if (*pcVar1 == '\x02') {
          uStack_190 = 0;
          local_180 = 0x8000000000000000;
          puVar2 = *(undefined8 **)(pcVar8 + 0x48);
          uStack_188 = *puVar2;
          local_200 = (char *)0x0;
          local_1f0 = 0x8000000000000000;
          uStack_1f8 = puVar2[1];
          local_208 = pcVar1;
          local_198 = pcVar1;
          while (cVar4 = FUN_18005324c(&local_198,&local_208), cVar4 == '\0') {
            uVar6 = FUN_1800e04aa(&local_198);
            local_248 = (char *)0x0;
            pcStack_240 = (char *)0x0;
            FUN_1800dfa68(&local_f8,uVar6,&local_248);
            FUN_180162253(&local_d8,&local_f8);
            FUN_180001ef2(&local_f8);
            FUN_1800531d0(&local_198);
          }
        }
        FUN_18006b10c(&DAT_1804188a0,&local_d8);
        FUN_18006ae42(&local_b8);
        FUN_180001ef2(&local_d8);
        FUN_180016c4c(&local_268);
      }
      FUN_180016c8e(&local_228,&local_228,*(undefined8 *)(local_228 + 8));
      thunk_FUN_1802464a0(local_228,0x50);
      FUN_180001ef2(&local_118);
    }
    DAT_1804189ac = 0x3e8a3d71;
    pcVar5 = (char *)FUN_1800136a6(local_128,"plugins");
    if (*pcVar5 == '\x02') {
      FUN_180001e92(&local_d8,"plugins");
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      ppcStack_a0 = (char **)0x0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_68 = 0;
      FUN_18002266a(&ppcStack_a0);
      local_208 = (char *)FUN_1800136a6(local_128,"plugins");
      uStack_190 = 0;
      uStack_188 = 0;
      local_180 = 0x8000000000000000;
      cVar4 = *local_208;
      if (cVar4 == '\0') {
        local_180 = 1;
      }
      else if (cVar4 == '\x02') {
        uStack_188 = **(undefined8 **)(local_208 + 8);
      }
      else if (cVar4 == '\x01') {
        uStack_190 = *(undefined8 *)**(undefined8 **)(local_208 + 8);
      }
      else {
        local_180 = 0;
      }
      local_200 = (char *)0x0;
      uStack_1f8 = 0;
      local_1f0 = 0x8000000000000000;
      if (*local_208 == '\x02') {
        uStack_1f8 = *(undefined8 *)(*(longlong *)(local_208 + 8) + 8);
      }
      else if (*local_208 == '\x01') {
        local_200 = (char *)**(undefined8 **)(local_208 + 8);
      }
      else {
        local_1f0 = 1;
      }
      local_198 = local_208;
      while (cVar4 = FUN_18005324c(&local_198,&local_208), cVar4 == '\0') {
        uVar6 = FUN_1800e04aa(&local_198);
        local_118 = "parameters";
        uStack_110 = 10;
        FUN_1801623f6(&local_f8,uVar6,&local_118);
        pcVar5 = local_f8;
        local_248 = *(char **)local_f8;
        while (local_248 != pcVar5) {
          local_228 = (char *)0x0;
          pcStack_220 = (char *)0x0;
          FUN_1800dfa68(&local_118,local_248 + 0x40,&local_228);
          FUN_180162253(&local_d8,&local_118);
          FUN_180001ef2(&local_118);
          FUN_180016c4c(&local_248);
        }
        FUN_180016c8e(&local_f8,&local_f8,*(undefined8 *)(local_f8 + 8));
        thunk_FUN_1802464a0(local_f8,0x50);
        FUN_1800531d0(&local_198);
      }
      FUN_18006b10c(&DAT_1804188a0,&local_d8);
      FUN_18006ae42(&local_b8);
      FUN_180001ef2(&local_d8);
    }
    DAT_1804189ac = 0x3e99999a;
    local_f8 = (char *)0x0;
    pcStack_f0 = (char *)0x0;
    local_e8 = 0;
    pcVar5 = (char *)FUN_1800136a6(local_128,"dataMapInfos");
    if (*pcVar5 == '\x02') {
      FUN_180001e92(&local_d8,"dataMapInfos");
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      ppcStack_a0 = (char **)0x0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_68 = 0;
      FUN_18002266a(&ppcStack_a0);
      local_208 = (char *)FUN_1800136a6(local_128,"dataMapInfos");
      uStack_190 = 0;
      uStack_188 = 0;
      local_180 = 0x8000000000000000;
      cVar4 = *local_208;
      if (cVar4 == '\0') {
        local_180 = 1;
      }
      else if (cVar4 == '\x02') {
        uStack_188 = **(undefined8 **)(local_208 + 8);
      }
      else if (cVar4 == '\x01') {
        uStack_190 = *(undefined8 *)**(undefined8 **)(local_208 + 8);
      }
      else {
        local_180 = 0;
      }
      local_200 = (char *)0x0;
      uStack_1f8 = 0;
      local_1f0 = 0x8000000000000000;
      if (*local_208 == '\x02') {
        uStack_1f8 = *(undefined8 *)(*(longlong *)(local_208 + 8) + 8);
      }
      else if (*local_208 == '\x01') {
        local_200 = (char *)**(undefined8 **)(local_208 + 8);
      }
      else {
        local_1f0 = 1;
      }
      local_198 = local_208;
      while (cVar4 = FUN_18005324c(&local_198,&local_208), cVar4 == '\0') {
        pcVar5 = (char *)FUN_1800e04aa(&local_198);
        if (*pcVar5 == '\x01') {
          local_228 = "id";
          pcStack_220 = (char *)0x2;
          FUN_1800df105(&local_118,pcVar5,&local_228);
          FUN_180163336(&local_f8,&local_118);
          FUN_1800137c6(&local_118);
          local_228 = "name";
          pcStack_220 = (char *)0x4;
          FUN_1800dfa68(&local_118,pcVar5,&local_228);
          FUN_180162253(&local_d8,&local_118);
          FUN_180001ef2(&local_118);
        }
        FUN_1800531d0(&local_198);
      }
      FUN_18006b10c(&DAT_1804188a0,&local_d8);
      FUN_18006ae42(&local_b8);
      FUN_180001ef2(&local_d8);
    }
    DAT_1804189ac = 0x3eb33333;
    local_198 = (char *)0x0;
    uStack_190 = 0;
    uStack_188 = 0;
    FUN_18009c334(&local_198,(longlong)pcStack_f0 - (longlong)local_f8 >> 2,&local_f8);
    ppcStack_a0 = (char **)0x0;
    FUN_180163558(&local_d8,&local_198);
    ppcStack_a0 = &local_d8;
    FUN_18001405b(&local_d8);
    if (ppcStack_a0 != (char **)0x0) {
      (**(code **)(*ppcStack_a0 + 0x20))(ppcStack_a0,ppcStack_a0 != &local_d8);
      ppcStack_a0 = (char **)0x0;
    }
    FUN_180004cea(&local_198);
    FUN_180004cea(&local_f8);
  }
  else {
    FUN_18016255e();
  }
  FUN_1800137c6(local_128);
  return;
}

