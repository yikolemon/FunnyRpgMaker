/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140045e1b */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140045e1b(void)

{
  undefined8 ***pppuVar1;
  ulonglong uVar2;
  float fVar3;
  char cVar4;
  ulonglong *puVar5;
  undefined8 ***pppuVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 ****local_31b0 [2];
  ulonglong local_31a0;
  ulonglong local_3198;
  longlong local_1198 [7];
  longlong *local_1160;
  undefined1 local_158 [32];
  undefined1 local_138 [32];
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  float local_d8;
  float fStack_d4;
  undefined1 local_b8 [32];
  undefined8 ****local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 ***local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  if (DAT_140f14000 == '\x01') {
    FUN_1400abfca(&DAT_140ec1ed6,0);
    FUN_140092bab(0,0);
    FUN_1400b062e(&DAT_140ec1e28,"https://space.bilibili.com/3632316695972736");
    FUN_140092bab(0,0);
    FUN_1400abfca(&DAT_140ec20ae,0);
    local_31b0[0] = (undefined8 ****)0x0;
    cVar4 = FUN_1400ad187(&DAT_140ec20e8);
    if (cVar4 != '\0') {
      FUN_140001d08();
      _DAT_140f2a260 = _Xtime_get_ticks();
      _DAT_140f2a260 = _DAT_140f2a260 / 10000000;
      FUN_14003c99c(&DAT_140f2a240);
      DAT_140f14000 = '\0';
    }
  }
  else {
    FUN_140047c0d();
    if (DAT_140f2a250 != 0) {
      local_31b0[0] = (undefined8 *****)0x0;
      cVar4 = FUN_1400ad187(&DAT_140ec2037);
      if (cVar4 != '\0') {
        cVar4 = FUN_14003a574(&DAT_140f2a240);
        if (cVar4 == '\0') {
          FUN_14001679e(&local_78,&DAT_140f2a240,0);
          FUN_140015bfa(&local_78,local_31b0);
          FUN_140040b8e(&DAT_140f2a268,local_31b0);
          FUN_140001056(local_31b0);
          FUN_140001056(&local_78);
          FUN_14003c99c(&DAT_140f2a240);
          FUN_1400563de(local_31b0,&DAT_140f2a240);
          FUN_14001679e(local_158,&DAT_140f2a240,0);
          FUN_140015bfa(local_158,local_b8);
          FUN_140003aa0(&local_d8,local_b8);
          puVar5 = (ulonglong *)FUN_1400480a2(&local_d8,0,1,0x22);
          local_98 = (undefined8 ****)*puVar5;
          uStack_90 = puVar5[1];
          local_88._0_4_ = (undefined4)puVar5[2];
          local_88._4_4_ = *(undefined4 *)((longlong)puVar5 + 0x14);
          uStack_80._0_4_ = (undefined4)puVar5[3];
          uStack_80._4_4_ = *(undefined4 *)((longlong)puVar5 + 0x1c);
          puVar5[2] = 0;
          puVar5[3] = 7;
          *(undefined2 *)puVar5 = 0;
          FUN_1400168f8(&local_98,0x22);
          local_68 = (undefined4)local_88;
          uStack_64 = local_88._4_4_;
          uStack_60 = (undefined4)uStack_80;
          uStack_5c = uStack_80._4_4_;
          local_78 = local_98;
          uStack_70 = (undefined4)uStack_90;
          uStack_6c = uStack_90._4_4_;
          local_88 = 0;
          uStack_80 = 7;
          local_98 = (undefined8 ****)((ulonglong)local_98 & 0xffffffffffff0000);
          FUN_1400561b5(local_138,0);
          FUN_140048037(local_f8,&DAT_140f2a240,&DAT_140ec7fc0);
          FUN_1400563de(local_118,local_f8);
          FUN_140047ec3(local_118,local_138,&local_78,local_31b0);
          FUN_140001e90(local_118);
          FUN_14000109c(local_f8);
          FUN_140001e90(local_138);
          FUN_140001e90(&local_78);
          FUN_140001e90(&local_98);
          FUN_140001e90(&local_d8);
          FUN_140001056(local_b8);
          FUN_140001056(local_158);
          FUN_140001e90(local_31b0);
        }
        cVar4 = FUN_14003a68f();
        if (cVar4 == '\0') {
          FUN_1400563de(local_31b0,&DAT_140f2a240);
          local_98 = local_31b0;
          if (7 < local_3198) {
            local_98 = local_31b0[0];
          }
          uStack_90 = local_31a0;
          FUN_140057b48(&local_78);
          FUN_140001e90(local_31b0);
          if ((undefined8 ****)CONCAT44(uStack_6c,uStack_70) == (undefined8 ****)local_78) {
            FUN_14003c798(local_31b0,3,&DAT_140ec204e);
            FUN_14003c732(&DAT_140f2a2d8,local_31b0);
            if (local_1160 != (longlong *)0x0) {
              (**(code **)(*local_1160 + 0x20))(local_1160,local_1160 != local_1198);
            }
          }
          else {
            FUN_140093f4a(&DAT_140ec4a42,0);
            DAT_140f2a3c8 = 1;
          }
          FUN_1400022f6(&local_78);
        }
      }
      FUN_14008fcfc(local_31b0);
      fVar3 = DAT_1401c8640._4_4_;
      fVar11 = (float)DAT_1401c8640;
      fVar12 = SUB84(local_31b0[0],0) * (float)DAT_1401c8640;
      fVar13 = (float)((ulonglong)local_31b0[0] >> 0x20) * DAT_1401c8640._4_4_;
      fVar9 = (float)FUN_14007620f(DAT_1401c8650);
      fVar10 = (float)FUN_14007620f(DAT_1401c8654);
      uVar7 = -(uint)(fVar12 <= fVar10);
      uVar8 = -(uint)(fVar13 <= fVar9);
      fVar10 = (float)(~uVar7 & (uint)fVar12 | (uint)fVar10 & uVar7);
      fVar9 = (float)(~uVar8 & (uint)fVar13 | (uint)fVar9 & uVar8);
      local_31b0[0] = (undefined8 ****)0x0;
      local_d8 = fVar10;
      fStack_d4 = fVar9;
      FUN_14008fcfc(&local_98);
      fVar12 = SUB84(local_98,0);
      uVar2 = (ulonglong)local_98 >> 0x20;
      FUN_14008fce3(local_b8);
      local_78 = (undefined8 ***)
                 CONCAT44(SUB84(local_b8._0_8_,4) + ((float)uVar2 - fVar9) * fVar3,
                          (float)local_b8._0_8_ + (fVar12 - fVar10) * fVar11);
      FUN_14008fda3(&local_78,0,local_31b0);
      FUN_140085d59(&local_d8,0);
      cVar4 = FUN_14009487a(&DAT_140ec4a42,&DAT_140f2a3c8,0);
      if (cVar4 != '\0') {
        fVar11 = (float)FUN_14009319a();
        FUN_14008a381(local_31b0);
        FUN_14008f9f7(fVar11 + local_31b0[0]._0_4_);
        FUN_1400abfca(&DAT_140ec1f47,0);
        FUN_14008fabc();
        local_31b0[0] = (undefined8 *****)0x0;
        cVar4 = FUN_1400ad187(&DAT_140ec1e89,local_31b0);
        if (cVar4 != '\0') {
          FUN_1400563de(local_31b0,&DAT_140f2a240);
          local_98 = local_31b0;
          if (7 < local_3198) {
            local_98 = local_31b0[0];
          }
          uStack_90 = local_31a0;
          FUN_140057b48(&local_78);
          FUN_140001e90(local_31b0);
          pppuVar1 = (undefined8 ***)CONCAT44(uStack_6c,uStack_70);
          for (pppuVar6 = local_78; pppuVar6 != pppuVar1;
              pppuVar6 = (undefined8 ***)((longlong)pppuVar6 + 4)) {
            FUN_140057e78(*(undefined4 *)pppuVar6);
          }
          FUN_1400022f6(&local_78);
          DAT_140f2a3c8 = 0;
        }
        FUN_1400946ab();
      }
    }
  }
  return;
}

