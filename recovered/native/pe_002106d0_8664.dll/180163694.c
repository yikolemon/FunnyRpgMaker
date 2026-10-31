/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180163694 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180163694(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined *puVar6;
  longlong lVar7;
  size_t sVar8;
  undefined8 *puVar9;
  undefined8 ****ppppuVar10;
  char *pcVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  undefined1 auVar16 [16];
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 ***local_240 [2];
  undefined8 local_230;
  ulonglong local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  char *local_1c8;
  undefined8 local_1c0;
  char *local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8 [32];
  undefined8 ***local_188 [2];
  undefined8 local_178;
  ulonglong local_170;
  longlong local_168;
  longlong local_160;
  longlong local_150;
  longlong local_148;
  char *local_138;
  char *local_130;
  longlong local_128;
  undefined4 *local_120;
  undefined4 *local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  char local_e8 [16];
  char *local_d8;
  char *local_d0;
  longlong local_c0;
  char *local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_94;
  undefined8 local_90;
  
  dVar5 = DAT_1802df1c8;
  dVar4 = _UNK_1802df1b8;
  dVar3 = _DAT_1802df1b0;
  uVar2 = DAT_1802df1a0._4_4_;
  uVar1 = (undefined4)DAT_1802df1a0;
  local_90 = 0xfffffffffffffffe;
  DAT_1804189ac = 0.5;
  local_120 = *(undefined4 **)(param_1 + 8);
  local_118 = *(undefined4 **)(param_1 + 0x10);
  local_110 = param_1;
  while( true ) {
    if (local_120 == local_118) {
      DAT_1804189a9 = 1;
      return;
    }
    local_94 = *local_120;
    FUN_180001e92(local_1a8,"(function () { var loadData = ");
    puVar6 = PTR_DAT_180403bf0;
    sVar8 = strlen(PTR_DAT_180403bf0);
    FUN_180003300(local_1a8,puVar6,sVar8);
    local_1c8 = "Map{:03d}.json";
    local_1c0 = 0xe;
    FUN_1800054e8(local_188,&local_1c8,&local_94);
    FUN_180003300(local_1a8,";\n return loadData(\"__load_data_map__",0x25);
    FUN_18006add7(&local_108,local_188,&DAT_18037a87e);
    ppppuVar10 = local_188;
    if (0xf < local_170) {
      ppppuVar10 = (undefined8 ****)local_188[0];
    }
    puVar9 = (undefined8 *)FUN_180003300(&local_108,ppppuVar10,local_178);
    local_b8 = (char *)*puVar9;
    uStack_b0 = puVar9[1];
    local_a8 = *(undefined4 *)(puVar9 + 2);
    uStack_a4 = *(undefined4 *)((longlong)puVar9 + 0x14);
    uStack_a0 = *(undefined4 *)(puVar9 + 3);
    uStack_9c = *(undefined4 *)((longlong)puVar9 + 0x1c);
    puVar9[2] = 0;
    puVar9[3] = 0xf;
    *(undefined1 *)puVar9 = 0;
    FUN_180020b6a(local_240,&local_b8,&DAT_18036d6b8);
    ppppuVar10 = local_240;
    if (0xf < local_228) {
      ppppuVar10 = (undefined8 ****)local_240[0];
    }
    FUN_180003300(local_1a8,ppppuVar10,local_230);
    FUN_180001ef2(local_240);
    FUN_180001ef2(&local_b8);
    FUN_180001ef2(&local_108);
    FUN_180013de7(local_e8,local_1a8);
    if (local_e8[0] == '\0') {
      iVar14 = 3;
    }
    else if (local_e8[0] == '\x01') {
      local_1b8 = "dataMap/{:03d}";
      local_1b0 = 0xe;
      FUN_1800054e8(local_240,&local_1b8,&local_94);
      local_1e0 = 0;
      uStack_1d8 = 0;
      local_1f0 = 0;
      uStack_1e8 = 0;
      local_200 = 0;
      uStack_1f8 = 0;
      local_210 = 0;
      uStack_208 = 0;
      local_220 = 0;
      uStack_218 = 0;
      local_1d0 = 0;
      FUN_18002266a(&uStack_208);
      local_b8 = "events";
      uStack_b0 = 6;
      FUN_1800dcf0b(&local_108,local_e8,&local_b8);
      local_128 = local_100;
      lVar12 = local_108;
      while (lVar12 != local_128) {
        local_d8 = "name";
        local_d0 = (char *)0x4;
        local_c0 = lVar12;
        FUN_1800dfa68(&local_b8,lVar12,&local_d8);
        FUN_180162253(local_240,&local_b8);
        FUN_180001ef2(&local_b8);
        local_b8 = "pages";
        uStack_b0 = 5;
        FUN_1800dcf0b(&local_d8,local_c0,&local_b8);
        local_130 = local_d0;
        pcVar11 = local_d8;
        while (pcVar11 != local_130) {
          local_b8 = "list";
          uStack_b0 = 4;
          local_138 = pcVar11;
          FUN_1800dcf0b(&local_168,pcVar11,&local_b8);
          lVar12 = local_160;
          for (lVar13 = local_168; lVar13 != lVar12; lVar13 = lVar13 + 0x10) {
            local_b8 = "parameters";
            uStack_b0 = 10;
            FUN_1800dcf0b(&local_150,lVar13,&local_b8);
            lVar7 = local_148;
            for (lVar15 = local_150; lVar15 != lVar7; lVar15 = lVar15 + 0x10) {
              local_258 = 0;
              uStack_250 = 0;
              FUN_1800dfa68(&local_b8,lVar15,&local_258);
              FUN_180162253(local_240,&local_b8);
              FUN_180001ef2(&local_b8);
            }
            FUN_180016e50(&local_150);
          }
          FUN_180016e50(&local_168);
          pcVar11 = local_138 + 0x10;
        }
        FUN_180016e50(&local_d8);
        lVar12 = local_c0 + 0x10;
      }
      FUN_180016e50(&local_108);
      FUN_18006b10c(&DAT_1804188a0,local_240);
      lVar12 = *(longlong *)(local_110 + 0x10) - *(longlong *)(local_110 + 8);
      lVar13 = lVar12 >> 2;
      auVar16._8_4_ = (int)(lVar12 >> 0x22);
      auVar16._0_8_ = lVar13;
      auVar16._12_4_ = uVar2;
      DAT_1804189ac =
           (float)((double)DAT_1804189ac +
                  dVar5 / ((auVar16._8_8_ - dVar4) + ((double)CONCAT44(uVar1,(int)lVar13) - dVar3)))
      ;
      FUN_18006ae42(&local_220);
      FUN_180001ef2(local_240);
      iVar14 = 0;
    }
    else {
      iVar14 = 1;
      FUN_18016255e();
    }
    FUN_1800137c6(local_e8);
    FUN_180001ef2(local_188);
    FUN_180001ef2(local_1a8);
    if ((iVar14 != 3) && (iVar14 != 0)) break;
    local_120 = local_120 + 1;
  }
  return;
}

