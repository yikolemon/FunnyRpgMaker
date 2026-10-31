/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400099a0 */

uint * FUN_1400099a0(undefined8 param_1,uint *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  uint *puVar10;
  undefined8 *puVar11;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined1 local_80 [36];
  uint local_5c;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  FUN_140009ce9(&local_98,param_3,0x2e);
  if ((longlong)local_90 - (longlong)local_98 == 0x80) {
    local_5c = 0;
    for (puVar11 = local_98; puVar11 != local_90; puVar11 = puVar11 + 4) {
      cVar9 = thunk_FUN_14000d3b0(puVar11,&local_5c);
      if (cVar9 == '\0') {
        FUN_14000169c(local_80,"Failed parsing number (");
        puVar1 = puVar11 + 2;
        if (0xf < (ulonglong)puVar11[3]) {
          puVar11 = (undefined8 *)*puVar11;
        }
        puVar10 = (uint *)FUN_14000b1f8(local_80,puVar11,*puVar1);
        local_58 = *puVar10;
        uStack_54 = puVar10[1];
        uStack_50 = puVar10[2];
        uStack_4c = puVar10[3];
        local_48._0_4_ = puVar10[4];
        local_48._4_4_ = puVar10[5];
        uStack_40._0_4_ = puVar10[6];
        uStack_40._4_4_ = puVar10[7];
        puVar10[4] = 0;
        puVar10[5] = 0;
        puVar10[6] = 0xf;
        puVar10[7] = 0;
        *(undefined1 *)puVar10 = 0;
        FUN_14000cf50(&local_58,0x29);
        param_2[4] = (uint)local_48;
        param_2[5] = local_48._4_4_;
        param_2[6] = (uint)uStack_40;
        param_2[7] = uStack_40._4_4_;
        *param_2 = local_58;
        param_2[1] = uStack_54;
        param_2[2] = uStack_50;
        param_2[3] = uStack_4c;
        local_48 = 0;
        uStack_40 = 0xf;
        local_58 = local_58 & 0xffffff00;
        FUN_1400017de(&local_58);
        FUN_1400017de(local_80);
        goto LAB_140009bc8;
      }
      if (0xff < local_5c) {
        FUN_14000169c(&local_58,"Each IP number must be between 0 and 255 ");
        puVar1 = puVar11 + 2;
        if (0xf < (ulonglong)puVar11[3]) {
          puVar11 = (undefined8 *)*puVar11;
        }
        puVar10 = (uint *)FUN_14000b1f8(&local_58,puVar11,*puVar1);
        uVar2 = *puVar10;
        uVar3 = puVar10[1];
        uVar4 = puVar10[2];
        uVar5 = puVar10[3];
        uVar6 = puVar10[5];
        uVar7 = puVar10[6];
        uVar8 = puVar10[7];
        param_2[4] = puVar10[4];
        param_2[5] = uVar6;
        param_2[6] = uVar7;
        param_2[7] = uVar8;
        *param_2 = uVar2;
        param_2[1] = uVar3;
        param_2[2] = uVar4;
        param_2[3] = uVar5;
        puVar10[4] = 0;
        puVar10[5] = 0;
        puVar10[6] = 0xf;
        puVar10[7] = 0;
        *(undefined1 *)puVar10 = 0;
        FUN_1400017de(&local_58);
        goto LAB_140009bc8;
      }
    }
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0xf;
    param_2[7] = 0;
  }
  else {
    FUN_14000169c(local_80,"Invalid IPV4 address must have four parts (");
    puVar11 = param_3 + 2;
    if (0xf < (ulonglong)param_3[3]) {
      param_3 = (undefined8 *)*param_3;
    }
    puVar10 = (uint *)FUN_14000b1f8(local_80,param_3,*puVar11);
    local_58 = *puVar10;
    uStack_54 = puVar10[1];
    uStack_50 = puVar10[2];
    uStack_4c = puVar10[3];
    local_48._0_4_ = puVar10[4];
    local_48._4_4_ = puVar10[5];
    uStack_40._0_4_ = puVar10[6];
    uStack_40._4_4_ = puVar10[7];
    puVar10[4] = 0;
    puVar10[5] = 0;
    puVar10[6] = 0xf;
    puVar10[7] = 0;
    *(undefined1 *)puVar10 = 0;
    FUN_14000cf50(&local_58,0x29);
    param_2[4] = (uint)local_48;
    param_2[5] = local_48._4_4_;
    param_2[6] = (uint)uStack_40;
    param_2[7] = uStack_40._4_4_;
    *param_2 = local_58;
    param_2[1] = uStack_54;
    param_2[2] = uStack_50;
    param_2[3] = uStack_4c;
    local_48 = 0;
    uStack_40 = 0xf;
    local_58 = local_58 & 0xffffff00;
    FUN_1400017de(&local_58);
    FUN_1400017de(local_80);
  }
LAB_140009bc8:
  FUN_14000eeca(&local_98);
  return param_2;
}

