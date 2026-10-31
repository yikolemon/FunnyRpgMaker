/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800b9844 */

void FUN_1800b9844(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined8 ***pppuVar2;
  uint uVar3;
  undefined1 local_2e8 [144];
  longlong local_258;
  undefined8 **local_1d8 [4];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined1 local_180 [64];
  undefined8 local_140 [4];
  undefined8 **local_120;
  undefined8 **local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  ulonglong uStack_100;
  undefined8 **local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  ulonglong uStack_e0;
  longlong local_d8;
  longlong local_d0;
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  uint local_74;
  undefined8 *local_70;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_d0 = param_1 + 0xb8;
  local_d8 = param_1;
  FUN_180044980();
  FUN_1800816ae(local_2e8,param_2,0x20,0x40,1);
  if (local_258 != 0) {
    FUN_18006a5f4(local_d8);
    local_1b8 = 0;
    uStack_1b0 = 0;
    local_1a8 = 0;
    local_1a0 = 0xf;
    local_198 = 0;
    uStack_190 = 0;
    local_188 = 0;
    FUN_18002266a(local_180);
    local_c8 = 0;
    FUN_1800ba420(local_2e8,&local_c8,4);
    local_c8 = 0;
    FUN_1800ba420(local_2e8,&local_c8,4);
    local_74 = local_c8;
    for (uVar3 = 0; uVar3 < local_74; uVar3 = uVar3 + 1) {
      local_c8 = 0;
      FUN_1800ba420(local_2e8,&local_c8,4);
      local_118 = (undefined8 ***)0x0;
      uStack_110 = 0;
      local_108 = 0;
      uStack_100 = 0;
      FUN_180061c48(&local_118,0,local_c8);
      pppuVar2 = &local_118;
      if (0xf < uStack_100) {
        pppuVar2 = (undefined8 ***)local_118;
      }
      FUN_1800ba420(local_2e8,pppuVar2,local_108);
      local_c8 = 0;
      FUN_1800ba420(local_2e8,&local_c8,4);
      local_f8 = (undefined8 ***)0x0;
      uStack_f0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      FUN_180061c48(&local_f8,0,local_c8);
      pppuVar2 = &local_f8;
      if (0xf < uStack_e0) {
        pppuVar2 = (undefined8 ***)local_f8;
      }
      FUN_1800ba420(local_2e8,pppuVar2,local_e8);
      FUN_180003216(&local_c8,&local_118);
      local_63 = 1;
      FUN_180003216(local_140,&local_118);
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      local_1d8[0] = &local_120;
      local_70 = local_140;
      local_64 = 1;
      FUN_1800b05fc(&local_a8,1,&local_70,local_1d8);
      local_62 = 1;
      FUN_180003216(local_1d8,&local_f8);
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 0;
      local_70 = &local_1b8;
      local_61 = 1;
      local_120 = local_1d8;
      FUN_1800b05fc(&local_90,1,&local_120,&local_70);
      puVar1 = (uint *)FUN_1800ad81a(&local_198,&local_118);
      if (puVar1 != &local_c8) {
        FUN_180004c8c(puVar1);
        puVar1[4] = (uint)local_b8;
        puVar1[5] = local_b8._4_4_;
        puVar1[6] = (uint)uStack_b0;
        puVar1[7] = uStack_b0._4_4_;
        *puVar1 = local_c8;
        puVar1[1] = uStack_c4;
        puVar1[2] = uStack_c0;
        puVar1[3] = uStack_bc;
        local_b8 = 0;
        uStack_b0 = 0xf;
        local_c8 = local_c8 & 0xffffff00;
        FUN_180060538(puVar1 + 8);
        *(undefined8 *)(puVar1 + 8) = local_a8;
        *(undefined8 *)(puVar1 + 10) = uStack_a0;
        *(undefined8 *)(puVar1 + 0xc) = local_98;
        local_98 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        FUN_180060538(puVar1 + 0xe);
        *(undefined8 *)(puVar1 + 0xe) = local_90;
        *(undefined8 *)(puVar1 + 0x10) = uStack_88;
        *(undefined8 *)(puVar1 + 0x12) = local_80;
        local_80 = 0;
        local_90 = 0;
        uStack_88 = 0;
      }
      FUN_180060538(&local_90);
      FUN_180060538(&local_a8);
      FUN_180001ef2(&local_c8);
      local_61 = 0;
      FUN_180001ef2(local_1d8);
      local_62 = 0;
      local_64 = 0;
      FUN_180001ef2(local_140);
      local_63 = 0;
      FUN_180001ef2(&local_f8);
      FUN_180001ef2(&local_118);
    }
    FUN_18006b10c(local_d8,&local_1b8);
    FUN_18006ae42(&local_198);
    FUN_180001ef2(&local_1b8);
  }
  FUN_1800818a2(local_2e8);
  FUN_18023d6e0(local_d0);
  return;
}

