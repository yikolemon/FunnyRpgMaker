/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800eb99c */

void FUN_1800eb99c(longlong param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  undefined8 uVar3;
  uint *puVar4;
  char *local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  char *local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  undefined8 local_198 [4];
  undefined8 ***local_178 [4];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined1 local_120 [64];
  undefined8 ***local_e0;
  char *local_d8;
  uint local_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 *local_78;
  longlong local_70;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_80 = param_1 + 0xb8;
  local_70 = param_1;
  FUN_180044980();
  FUN_18006a5f4(local_70);
  if (*param_2 == '\x02') {
    local_200 = 0;
    local_1f0 = 0x8000000000000000;
    local_1f8 = **(undefined8 **)(param_2 + 8);
    local_270 = 0;
    local_260 = 0x8000000000000000;
    local_268 = (*(undefined8 **)(param_2 + 8))[1];
    local_278 = param_2;
    local_208 = param_2;
    while (cVar1 = FUN_18005324c(&local_208,&local_278), cVar1 == '\0') {
      pcVar2 = (char *)FUN_1800e04aa(&local_208);
      if (*pcVar2 == '\x01') {
        FUN_1800ec542(pcVar2,&local_158);
        FUN_18006b10c(local_70,&local_158);
        FUN_18006ae42(&local_138);
        FUN_180001ef2(&local_158);
      }
      FUN_1800531d0(&local_208);
    }
  }
  else if (*param_2 == '\x01') {
    local_158 = 0;
    uStack_150 = 0;
    local_148 = 0;
    local_140 = 0xf;
    local_138 = 0;
    uStack_130 = 0;
    local_128 = 0;
    FUN_18002266a(local_120);
    local_d8 = param_2;
    FUN_1800dfbe0(&local_d8,&local_208);
    FUN_1800dfc96(&local_d8,&local_278);
    while (cVar1 = FUN_18005324c(&local_208,&local_278), cVar1 == '\0') {
      pcVar2 = (char *)FUN_1800e04aa(&local_208);
      if (*pcVar2 == '\x03') {
        uVar3 = FUN_1800e033c(&local_208);
        FUN_180003216(&local_d0,uVar3);
        local_63 = 1;
        uVar3 = FUN_1800e033c(&local_208);
        FUN_180003216(local_198,uVar3);
        local_b0 = 0;
        uStack_a8 = 0;
        local_a0 = 0;
        local_178[0] = local_178;
        local_64 = 1;
        local_78 = local_198;
        FUN_1800b05fc(&local_b0,1,&local_78,local_178);
        local_62 = 1;
        uVar3 = FUN_1800e04aa(&local_208);
        FUN_180017024(uVar3,local_178);
        local_98 = 0;
        uStack_90 = 0;
        local_88 = 0;
        local_78 = &local_158;
        local_61 = 1;
        local_e0 = local_178;
        FUN_1800b05fc(&local_98,1,&local_e0,&local_78);
        uVar3 = FUN_1800e033c(&local_208);
        puVar4 = (uint *)FUN_1800ad81a(&local_138,uVar3);
        if (puVar4 != &local_d0) {
          FUN_180004c8c(puVar4);
          puVar4[4] = (uint)local_c0;
          puVar4[5] = local_c0._4_4_;
          puVar4[6] = (uint)uStack_b8;
          puVar4[7] = uStack_b8._4_4_;
          *puVar4 = local_d0;
          puVar4[1] = uStack_cc;
          puVar4[2] = uStack_c8;
          puVar4[3] = uStack_c4;
          local_c0 = 0;
          uStack_b8 = 0xf;
          local_d0 = local_d0 & 0xffffff00;
          FUN_180060538(puVar4 + 8);
          *(undefined8 *)(puVar4 + 8) = local_b0;
          *(undefined8 *)(puVar4 + 10) = uStack_a8;
          *(undefined8 *)(puVar4 + 0xc) = local_a0;
          local_a0 = 0;
          local_b0 = 0;
          uStack_a8 = 0;
          FUN_180060538(puVar4 + 0xe);
          *(undefined8 *)(puVar4 + 0xe) = local_98;
          *(undefined8 *)(puVar4 + 0x10) = uStack_90;
          *(undefined8 *)(puVar4 + 0x12) = local_88;
          local_88 = 0;
          local_98 = 0;
          uStack_90 = 0;
        }
        FUN_180060538(&local_98);
        FUN_180060538(&local_b0);
        FUN_180001ef2(&local_d0);
        local_61 = 0;
        FUN_180001ef2(local_178);
        local_62 = 0;
        local_64 = 0;
        FUN_180001ef2(local_198);
        local_63 = 0;
      }
      FUN_1800531d0(&local_208);
      local_1e8 = local_1e8 + 1;
    }
    FUN_1800dfd44(&local_278);
    FUN_1800dfd44(&local_208);
    FUN_18006b10c(local_70,&local_158);
    FUN_18006ae42(&local_138);
    FUN_180001ef2(&local_158);
  }
  FUN_18023d6e0(local_80);
  return;
}

