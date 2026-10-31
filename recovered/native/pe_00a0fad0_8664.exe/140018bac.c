/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140018bac */

uint * FUN_140018bac(uint *param_1,undefined8 *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  longlong lVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  uint *local_58;
  uint *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar12 = 0;
  local_58 = param_1;
  local_50 = param_3;
  while ((uVar12 != 0xffffffffffffffff && (uVar12 < *(ulonglong *)(local_50 + 4)))) {
    lVar9 = FUN_14000e108(local_50,10);
    uVar12 = 0xffffffffffffffff;
    if (lVar9 != -1) {
      FUN_1400191d4(local_d8,local_50,lVar9 + 1,0xffffffffffffffff,&local_78);
      FUN_1400191d4(local_b8,local_50,0,lVar9 + 1,&local_78);
      puVar11 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        puVar11 = (undefined8 *)*param_2;
      }
      puVar10 = (undefined4 *)FUN_14000b1f8(local_b8,puVar11,param_2[2]);
      local_98 = *puVar10;
      uStack_94 = puVar10[1];
      uStack_90 = puVar10[2];
      uStack_8c = puVar10[3];
      local_88 = puVar10[4];
      uStack_84 = puVar10[5];
      uStack_80 = puVar10[6];
      uStack_7c = puVar10[7];
      *(undefined8 *)(puVar10 + 4) = 0;
      *(undefined8 *)(puVar10 + 6) = 0xf;
      *(undefined1 *)puVar10 = 0;
      FUN_140018470(&local_78,local_88,&local_98,local_d8);
      puVar8 = local_50;
      if (local_50 != &local_78) {
        FUN_1400065bc(local_50);
        *(undefined8 *)(puVar8 + 4) = local_68;
        *(undefined8 *)(puVar8 + 6) = uStack_60;
        *puVar8 = local_78;
        puVar8[1] = uStack_74;
        puVar8[2] = uStack_70;
        puVar8[3] = uStack_6c;
        local_68 = 0;
        uStack_60 = 0xf;
        local_78 = local_78 & 0xffffff00;
      }
      FUN_1400017de(&local_78);
      FUN_1400017de(&local_98);
      FUN_1400017de(local_b8);
      FUN_1400017de(local_d8);
      uVar12 = param_2[2] + lVar9;
    }
  }
  uVar1 = *local_50;
  uVar2 = local_50[1];
  uVar3 = local_50[2];
  uVar4 = local_50[3];
  uVar5 = local_50[5];
  uVar6 = local_50[6];
  uVar7 = local_50[7];
  local_58[4] = local_50[4];
  local_58[5] = uVar5;
  local_58[6] = uVar6;
  local_58[7] = uVar7;
  *local_58 = uVar1;
  local_58[1] = uVar2;
  local_58[2] = uVar3;
  local_58[3] = uVar4;
  local_50[4] = 0;
  local_50[5] = 0;
  local_50[6] = 0xf;
  local_50[7] = 0;
  *(undefined1 *)local_50 = 0;
  FUN_1400017de(local_50);
  return local_58;
}

