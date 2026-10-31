/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400bfddf */

ulonglong FUN_1400bfddf(longlong *param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined1 auVar2 [15];
  undefined1 auVar3 [15];
  undefined1 auVar4 [15];
  undefined1 auVar5 [15];
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  ushort uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined8 **ppuVar20;
  byte bVar21;
  char cVar22;
  byte bVar23;
  uint uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  byte local_1f8 [256];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 *local_a0 [4];
  longlong *local_80;
  undefined8 **local_78;
  undefined1 *local_70;
  uint local_68;
  undefined8 local_64;
  longlong local_58;
  undefined1 local_4a;
  undefined1 local_49;
  longlong local_48;
  
  local_48 = -2;
  local_58 = param_3;
  thunk_FUN_1401366a0(&local_e0,0xaa,0x40);
  lVar14 = *param_2;
  lVar15 = param_2[1];
  if (lVar15 != lVar14) {
    bVar21 = 0xbe;
    lVar19 = 0;
    do {
      uVar18 = (ulonglong)((uint)lVar19 & 0x3f);
      bVar23 = (*(byte *)((longlong)&local_e0 + uVar18) ^ *(byte *)(lVar14 + lVar19)) + bVar21;
      *(byte *)((longlong)&local_e0 + uVar18) = bVar23 * '\b' | bVar23 >> 5;
      bVar21 = bVar21 * -0x4d ^ *(byte *)(lVar14 + lVar19);
      lVar19 = lVar19 + 1;
    } while (lVar15 - lVar14 != lVar19);
  }
  iVar13 = 0;
  do {
    uVar18 = 0;
    do {
      cVar22 = (local_1f8[(ulonglong)(uVar18 < 0x39) * 0x40 + uVar18 + 0xdf] ^
               *(byte *)((longlong)&local_e0 + uVar18)) +
               local_1f8[(ulonglong)(uVar18 < 0x33) * 0x40 + uVar18 + 0xe5];
      *(char *)((longlong)&local_e0 + uVar18) = cVar22 * '\x02' | cVar22 < '\0';
      uVar18 = uVar18 + 1;
    } while (uVar18 != 0x40);
    iVar13 = iVar13 + 1;
  } while (iVar13 != 5);
  lVar14 = 0;
  do {
    if (*(char *)((longlong)&local_e0 + lVar14) == '\0') {
      *(undefined1 *)((longlong)&local_e0 + lVar14) = 1;
    }
    lVar14 = lVar14 + 1;
  } while (lVar14 != 0x40);
  uVar24 = (uint)local_e0._1_1_ + (uint)(byte)local_e0 + 0x200;
  if ((ulonglong)uVar24 < (ulonglong)(param_1[1] - *param_1)) {
    *(uint *)((longlong)param_4 + 0x74) = uVar24;
    uVar17 = 0x9dc5;
    lVar14 = 0;
    do {
      uVar17 = (uVar17 ^ *(byte *)((longlong)&local_e0 + lVar14)) * 0x193;
      lVar14 = lVar14 + 1;
    } while (lVar14 != 0x40);
    auVar25 = ZEXT416((*(byte *)(*param_1 + 8) ^ uVar17) & 0xffff);
    lVar14 = 0;
    do {
      uVar18 = *(ulonglong *)((longlong)&local_e0 + lVar14);
      auVar2._8_6_ = 0;
      auVar2._0_8_ = uVar18;
      auVar2[0xe] = (char)(uVar18 >> 0x38);
      auVar3._8_4_ = 0;
      auVar3._0_8_ = uVar18;
      auVar3[0xc] = (char)(uVar18 >> 0x30);
      auVar3._13_2_ = auVar2._13_2_;
      auVar4._8_4_ = 0;
      auVar4._0_8_ = uVar18;
      auVar4._12_3_ = auVar3._12_3_;
      auVar5._8_2_ = 0;
      auVar5._0_8_ = uVar18;
      auVar5[10] = (char)(uVar18 >> 0x28);
      auVar5._11_4_ = auVar4._11_4_;
      auVar6._8_2_ = 0;
      auVar6._0_8_ = uVar18;
      auVar6._10_5_ = auVar5._10_5_;
      auVar7[8] = (char)(uVar18 >> 0x20);
      auVar7._0_8_ = uVar18;
      auVar7._9_6_ = auVar6._9_6_;
      auVar9._7_8_ = 0;
      auVar9._0_7_ = auVar7._8_7_;
      auVar11._1_8_ = SUB158(auVar9 << 0x40,7);
      auVar11[0] = (char)(uVar18 >> 0x18);
      auVar11._9_6_ = 0;
      auVar10._1_10_ = SUB1510(auVar11 << 0x30,5);
      auVar10[0] = (char)(uVar18 >> 0x10);
      auVar10._11_4_ = 0;
      auVar8[2] = (char)(uVar18 >> 8);
      auVar8._0_2_ = (ushort)uVar18;
      auVar8._3_12_ = SUB1512(auVar10 << 0x20,3);
      auVar27._0_2_ = (ushort)uVar18 & 0xff;
      auVar27._2_13_ = auVar8._2_13_;
      auVar27[0xf] = 0;
      auVar25 = auVar25 ^ auVar27;
      lVar14 = lVar14 + 8;
    } while (lVar14 != 0x40);
    auVar26._0_8_ = auVar25._8_8_;
    auVar26._8_4_ = auVar25._8_4_;
    auVar26._12_4_ = auVar25._12_4_;
    uVar17 = SUB164(auVar26 ^ auVar25,4) ^ SUB164(auVar26 ^ auVar25,0);
    uVar17 = uVar17 >> 0x10 ^ uVar17;
    lVar14 = 0;
    do {
      uVar17 = uVar17 * 0x660d - 0xca1;
      local_1f8[lVar14] = (byte)uVar17;
      lVar14 = lVar14 + 1;
    } while (lVar14 != 0x100);
    lVar14 = 0;
    do {
      *(byte *)(*param_4 + 10 + lVar14) = local_1f8[lVar14] ^ *(byte *)(*param_1 + 10 + lVar14);
      lVar14 = lVar14 + 1;
    } while (lVar14 != 5);
    local_4a = *(undefined1 *)(*param_4 + 10);
    local_80 = &local_48;
    local_49 = *(undefined1 *)(*param_4 + 0xb);
    local_f8 = (undefined1  [16])0x0;
    local_e8 = 0;
    local_a0[0] = (undefined8 *)&local_4a;
    FUN_14005872a(local_f8,2);
    if ((char)param_4[0xe] == '\x01') {
      local_78 = (undefined8 **)(param_4 + 0xf);
      local_64 = 0;
      local_80 = param_1;
      local_70 = local_f8;
      local_68 = uVar24;
      uVar24 = FUN_1400c04d0(local_1f8,&local_80,local_58,param_4);
      uVar18 = (ulonglong)uVar24;
    }
    else {
      uVar12 = *(ushort *)local_f8._0_8_ << 8 | *(ushort *)local_f8._0_8_ >> 8;
      uVar18 = (ulonglong)uVar12;
      if (uVar12 < 10000) {
        lVar14 = local_58 + 0x18;
        local_80 = (longlong *)CONCAT44(local_80._4_4_,(uint)uVar12);
        lVar15 = FUN_1400c0716(lVar14);
        if (lVar15 == 0) {
          uVar18 = 0;
        }
        else {
          local_80 = (longlong *)CONCAT44(local_80._4_4_,(uint)uVar12);
          plVar16 = (longlong *)FUN_1400c0758(lVar14);
          puVar1 = (undefined8 *)*plVar16;
          local_a0[0] = (undefined8 *)*puVar1;
          while (uVar18 = CONCAT71((int7)(uVar18 >> 8),local_a0[0] != puVar1), local_a0[0] != puVar1
                ) {
            local_78 = (undefined8 **)(local_a0[0] + 4);
            local_64 = 0;
            local_80 = param_1;
            local_70 = local_f8;
            local_68 = uVar24;
            cVar22 = FUN_1400c04d0(local_1f8,&local_80,local_58,param_4);
            if (cVar22 != '\0') {
              if ((undefined8 **)(param_4 + 0xf) != local_78) {
                ppuVar20 = local_78;
                if ((undefined8 *)0xf < local_78[3]) {
                  ppuVar20 = (undefined8 **)*local_78;
                }
                FUN_140017200(param_4 + 0xf,ppuVar20,local_78[2]);
              }
              break;
            }
            FUN_14001010a(local_a0);
          }
        }
      }
      else {
        local_80 = param_1;
        FUN_14000169c(local_a0,&DAT_1401728de);
        local_64 = 0;
        local_78 = local_a0;
        local_70 = local_f8;
        local_68 = uVar24;
        uVar24 = FUN_1400c04d0(local_1f8,&local_80,local_58,param_4);
        uVar18 = (ulonglong)uVar24;
        FUN_1400017de(local_a0);
      }
    }
    FUN_140016e5c(local_f8);
  }
  else {
    uVar18 = 0;
  }
  return uVar18;
}

