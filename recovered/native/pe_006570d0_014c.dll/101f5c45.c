/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f5c45 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_101f5c45(int param_1,int *param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  short sVar3;
  short sVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  ulonglong *puVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  longlong lVar22;
  undefined1 auVar23 [16];
  longlong lVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  int *local_608;
  int iStack_604;
  uint local_600;
  undefined4 *local_5fc;
  int local_5f8;
  byte bStack_5f1;
  int iStack_5f0;
  undefined4 uStack_5ec;
  int iStack_5e8;
  uint uStack_5e4;
  uint uStack_5e0;
  int iStack_5dc;
  int local_5d8;
  short sStack_5d4;
  undefined2 uStack_5d2;
  int iStack_5d0;
  undefined8 uStack_5cc;
  uint uStack_5c4;
  uint uStack_5c0;
  int iStack_5bc;
  int iStack_5b8;
  int iStack_5b4;
  ushort auStack_5b0 [328];
  uint local_320;
  short sStack_31c;
  short sStack_31a;
  ushort uStack_318;
  short sStack_316;
  short sStack_314;
  ushort uStack_312;
  undefined4 uStack_300;
  undefined8 uStack_2f8;
  undefined1 uStack_2de;
  int iStack_2dc;
  code *pcStack_2d0;
  uint uStack_d8;
  undefined1 uStack_cf;
  uint local_14;
  ulonglong uVar21;
  
  local_14 = DAT_10388d00 ^ (uint)&local_608;
  local_5f8 = *(int *)(param_1 + 4);
  local_5d8 = *(int *)(local_5f8 + 0x230);
  iVar16 = *(int *)(local_5f8 + 0x2c8);
  local_5fc = *(undefined4 **)(local_5d8 + 0x28);
  local_608 = param_2;
  if ((*(int *)(iVar16 + 0x5dc) == 0xffff) || (*(int *)(iVar16 + 0x4a8) == 0)) {
    iVar17 = 6;
    if (*(uint *)(iVar16 + 0x14) <= param_3) goto LAB_101f5f7b;
  }
  else if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    param_3 = FUN_101f6644();
    if (param_3 == 0) {
      iVar17 = 6;
      goto LAB_101f5f7b;
    }
  }
  iVar17 = local_5f8;
  if (((((char)((param_4 & 8) >> 3) == '\0' && local_608[0xb] != -1) &&
       (iVar8 = *local_608, (*(ushort *)(iVar8 + 6) & 0x7fff) == 0)) &&
      ((*(byte *)(iVar8 + 9) & 0x80) == 0)) &&
     (local_600 = param_3,
     iVar8 = (**(code **)(*(int *)(iVar8 + 0x21c) + 0x4c))
                       (local_5f8,local_608[0xb],param_3,param_4,*(undefined4 *)(iVar8 + 0x68),
                        param_1 + 0x4c,&local_320), iVar8 == 0)) {
    *(ulonglong *)(param_1 + 0x18) = CONCAT44((local_320 & 0xffff) << 6,(local_320 >> 0x10) << 6);
    local_608 = (int *)(int)sStack_31c;
    *(int *)(param_1 + 0x20) = (int)local_608 << 6;
    *(int *)(param_1 + 0x24) = (int)sStack_31a << 6;
    *(uint *)(param_1 + 0x28) = (uint)uStack_318 << 6;
    *(int *)(param_1 + 0x2c) = (int)sStack_316 << 6;
    *(int *)(param_1 + 0x30) = (int)sStack_314 << 6;
    *(uint *)(param_1 + 0x34) = (uint)uStack_312 << 6;
    iVar16 = (int)sStack_314;
    piVar5 = (int *)(int)sStack_316;
    if ((param_4 & 0x10) == 0) {
      iVar16 = (int)sStack_31a;
      piVar5 = local_608;
    }
    *(undefined4 *)(param_1 + 0x48) = 0x62697473;
    *(int **)(param_1 + 100) = piVar5;
    *(int *)(param_1 + 0x68) = iVar16;
    (**(code **)(*(int *)(iVar17 + 0x21c) + 0xa8))(iVar17,0,local_600,&uStack_5c0,auStack_5b0);
    *(uint *)(param_1 + 0x38) = (uint)auStack_5b0[0];
    if ((*(char *)(iVar17 + 0x124) == '\0') || (*(short *)(iVar17 + 0x14a) == 0)) {
      if (*(short *)(iVar17 + 0x174) == -1) {
        sVar3 = *(short *)(iVar17 + 0xdc);
        sVar4 = *(short *)(iVar17 + 0xde);
      }
      else {
        sVar3 = *(short *)(iVar17 + 0x1ba);
        sVar4 = *(short *)(iVar17 + 0x1bc);
      }
      uVar14 = (int)sVar3 - (int)sVar4;
    }
    else {
      (**(code **)(*(int *)(iVar17 + 0x21c) + 0xa8))(iVar17,1,local_600,&uStack_5c0,auStack_5b0);
      uVar14 = (uint)auStack_5b0[0];
    }
    *(uint *)(param_1 + 0x3c) = uVar14;
  }
  else {
    iVar8 = local_5f8;
    iVar17 = 6;
    if ((param_4 >> 0xe & 1) != 0) goto LAB_101f5f7b;
    local_600 = param_3;
    if (((param_4 & 0x1100000) == 0x100000) && (*(int *)(local_5f8 + 0x374) != 0)) {
      iVar17 = 0x24;
      if (((short)local_608[3] == 0) || (*(short *)((int)local_608 + 0xe) == 0)) goto LAB_101f5f7b;
      iVar17 = *(int *)(local_5f8 + 0x21c);
      iVar9 = (**(code **)(iVar17 + 0xbc))(param_1,param_3);
      uVar14 = local_600;
      if (iVar9 == 0) {
        local_5fc = (undefined4 *)local_608[4];
        local_608 = (int *)local_608[5];
        *(undefined4 *)(param_1 + 0x48) = 0x53564720;
        (**(code **)(iVar17 + 0xa8))(iVar8,0,local_600,&local_320,auStack_5b0);
        (**(code **)(iVar17 + 0xa8))(iVar8,1,uVar14,&local_320,&uStack_5c0);
        *(uint *)(param_1 + 0x38) = (uint)auStack_5b0[0];
        lVar6 = (longlong)(int)(uint)auStack_5b0[0] * (longlong)(int)local_5fc;
        iVar16 = (int)(lVar6 >> 0x3f);
        lVar7 = lVar6 + CONCAT44(iVar16,iVar16) + 0x8000;
        lVar6 = (longlong)(int)(uStack_5c0 & 0xffff) * (longlong)(int)local_608;
        *(uint *)(param_1 + 0x3c) = uStack_5c0 & 0xffff;
        iVar16 = (int)(lVar6 >> 0x3f);
        *(uint *)(param_1 + 0x28) = (int)((ulonglong)lVar7 >> 0x20) * 0x10000 | (uint)lVar7 >> 0x10;
        lVar6 = lVar6 + CONCAT44(iVar16,iVar16) + 0x8000;
        *(uint *)(param_1 + 0x34) = (int)((ulonglong)lVar6 >> 0x20) * 0x10000 | (uint)lVar6 >> 0x10;
        goto LAB_101f631e;
      }
    }
    bStack_5f1 = (byte)param_4 & 1;
    bVar18 = (param_4 & 2) == 0;
    *(bool *)(param_1 + 0xa0) = bVar18;
    uVar14 = CONCAT31((int3)((uint)iVar17 >> 8),bVar18);
    *(byte *)(param_1 + 0xa1) = bStack_5f1 ^ 1;
    if ((param_4 & 1) == 0) {
      *(int *)(param_1 + 0xa4) = local_608[4];
      iVar17 = local_608[5];
    }
    else {
      *(undefined4 *)(param_1 + 0xa4) = 0x10000;
      iVar17 = 0x10000;
    }
    *(int *)(param_1 + 0xa8) = iVar17;
    iStack_604 = param_1;
    uStack_5e4 = uVar14;
    if (*(int *)(iVar16 + 0x7e4) == 0) {
      uStack_5c0 = *(uint *)(iVar16 + 0x588);
      iStack_5bc = *(int *)(iVar16 + 0x58c);
      iStack_5b8 = *(int *)(iVar16 + 0x590);
      iStack_5b4 = *(int *)(iVar16 + 0x594);
      iStack_5f0 = *(int *)(iVar16 + 0x5a0);
      iStack_5e8 = *(int *)(iVar16 + 0x5a4);
      uStack_5ec = 0;
    }
    else {
      uVar10 = FUN_101f4915(iVar16 + 0xbe8,local_600);
      param_1 = iStack_604;
      uVar13 = (uint)(byte)((char)*(uint *)(iVar16 + 0x7e4) - 1);
      if ((uVar10 & 0xff) < *(uint *)(iVar16 + 0x7e4)) {
        uVar13 = uVar10 & 0xff;
      }
      iVar17 = *(int *)(iVar16 + 0x59c);
      iVar8 = *(int *)(iVar16 + 0x7e8 + uVar13 * 4);
      iVar9 = *(int *)(iVar8 + 0x40);
      uStack_5c0 = *(uint *)(iVar8 + 0x2c);
      iStack_5bc = *(int *)(iVar8 + 0x30);
      iStack_5b8 = *(int *)(iVar8 + 0x34);
      iStack_5b4 = *(int *)(iVar8 + 0x38);
      iStack_5f0 = *(int *)(iVar8 + 0x44);
      iStack_5e8 = *(int *)(iVar8 + 0x48);
      if (iVar17 == iVar9) {
        uStack_5ec = 0;
        iVar8 = local_5f8;
      }
      else {
        uVar11 = FUN_101c16ea(*(undefined4 *)(iStack_604 + 0xa4),iVar17,iVar9);
        uVar14 = uStack_5e4;
        *(undefined4 *)(param_1 + 0xa4) = uVar11;
        uVar11 = FUN_101c16ea(*(undefined4 *)(param_1 + 0xa8),iVar17,iVar9);
        *(undefined4 *)(param_1 + 0xa8) = uVar11;
        uStack_5ec = CONCAT31((int3)((uint)uVar11 >> 8),1);
        iVar8 = local_5f8;
      }
    }
    piVar5 = local_608;
    iStack_5dc = iVar16;
    (*(code *)*local_5fc)
              (&local_320,iVar8,local_608,param_1,uVar14 & 0xff,param_4 >> 0x10 & 0xf,FUN_101f66d5,
               FUN_101f6653);
    uVar14 = local_600;
    if ((param_4 >> 8 & 1) != 0) {
      uStack_cf = 1;
    }
    uStack_2de = (undefined1)((param_4 & 0x400) >> 10);
    iVar17 = (*(code *)local_5fc[1])(&local_320,piVar5,local_600);
    if ((iVar17 != 0) ||
       (uStack_5e0 = param_4 & 0x400,
       iVar17 = FUN_101f66d5(local_5f8,uVar14,&sStack_5d4,&uStack_5c4), iVar17 != 0))
    goto LAB_101f5f7b;
    (**(code **)(local_5d8 + 0x18))(auStack_5b0,&local_320,0);
    uVar14 = uStack_5c4;
    puVar12 = local_5fc;
    iVar17 = (*(code *)local_5fc[2])(auStack_5b0,CONCAT22(uStack_5d2,sStack_5d4),uStack_5c4);
    if ((char)iVar17 == -0x5c) {
      *(undefined1 *)(iStack_604 + 0xa0) = 0;
      iVar17 = (*(code *)puVar12[2])(auStack_5b0,CONCAT22(uStack_5d2,sStack_5d4),uVar14);
      uStack_5ec = CONCAT31((int3)((uint)iVar17 >> 8),1);
      uStack_5e4 = 0;
    }
    iVar16 = local_5f8;
    FUN_101f6653(local_5f8,&sStack_5d4,uVar14);
    uVar13 = local_600;
    if (iVar17 != 0) goto LAB_101f5f7b;
    iVar17 = 0;
    uVar10 = 0;
    if (*(int *)(*(int *)(iVar16 + 0x80) + 0x34) == 0) {
      if (*(int *)(iStack_5dc + 0x4d0) != 0) {
        iVar17 = *(int *)(*(int *)(iStack_5dc + 0x4d0) + local_600 * 4) +
                 *(int *)(iStack_5dc + 0x4d4) + -1;
        uVar10 = uVar14;
        goto LAB_101f6048;
      }
    }
    else {
LAB_101f6048:
      *(int *)(iStack_604 + 0x88) = iVar17;
      *(uint *)(iStack_604 + 0x8c) = uVar10;
    }
    (*pcStack_2d0)(&local_320);
    iVar16 = iStack_604;
    piVar5 = *(int **)(*(int *)(local_5f8 + 0x80) + 0x34);
    if ((piVar5 != (int *)0x0) && (*(code **)(*piVar5 + 8) != (code *)0x0)) {
      sStack_5d4 = (short)uStack_300;
      uStack_5d2 = (undefined2)((uint)uStack_300 >> 0x10);
      iStack_5d0 = 0;
      uStack_5cc = uStack_2f8;
      iVar17 = (**(code **)(*piVar5 + 8))(piVar5[1],uVar13,0,&sStack_5d4);
      uStack_300 = CONCAT22(uStack_5d2,sStack_5d4);
      uStack_2f8 = uStack_5cc;
      if (iVar17 != 0) goto LAB_101f5f7b;
    }
    iVar17 = local_5f8;
    if (uStack_5e0 == 0) {
      *(undefined4 *)(iVar16 + 0x48) = 0x6f75746c;
      *(undefined4 *)(iVar16 + 0x7c) = 4;
      *(uint *)(iVar16 + 0x7c) = (uint)(*(ushort *)((int)local_608 + 0xe) < 0x18) << 8 | 4;
      if (*(short *)(local_5f8 + 0xfa) != 0) {
        sStack_5d4 = 0;
        uStack_5c4 = uStack_5c4 & 0xffff0000;
        (**(code **)(*(int *)(local_5f8 + 0x21c) + 0xa8))
                  (local_5f8,0,uVar13,&sStack_5d4,&uStack_5c4);
        uStack_d8 = uStack_5c4 & 0xffff;
        *(int *)(iVar16 + 0x20) = (int)sStack_5d4;
      }
      *(uint *)(iVar16 + 0x28) = uStack_d8;
      *(uint *)(iVar16 + 0x38) = uStack_d8;
      *(undefined1 *)(*(int *)(iVar16 + 0x9c) + 8) = 0;
      if ((*(char *)(iVar17 + 0x124) == '\0') || (*(short *)(iVar17 + 0x14a) == 0)) {
        if (*(short *)(iVar17 + 0x174) == -1) {
          sVar3 = *(short *)(iVar17 + 0xdc);
          sVar4 = *(short *)(iVar17 + 0xde);
        }
        else {
          sVar3 = *(short *)(iVar17 + 0x1ba);
          sVar4 = *(short *)(iVar17 + 0x1bc);
        }
        uVar14 = (int)sVar3 - (int)sVar4;
        *(uint *)(iVar16 + 0x34) = uVar14;
        puVar12 = (undefined4 *)CONCAT31((int3)(char)((ushort)sVar4 >> 8),1);
        local_5fc = puVar12;
      }
      else {
        sStack_5d4 = 0;
        local_5fc = (undefined4 *)0x0;
        uStack_5c4 = uStack_5c4 & 0xffff0000;
        (**(code **)(*(int *)(iVar17 + 0x21c) + 0xa8))(iVar17,1,uVar13,&sStack_5d4,&uStack_5c4);
        puVar12 = (undefined4 *)(int)sStack_5d4;
        *(undefined4 **)(iVar16 + 0x30) = puVar12;
        uVar14 = uStack_5c4 & 0xffff;
        *(uint *)(iVar16 + 0x34) = uVar14;
      }
      iVar17 = iStack_5f0;
      piVar5 = (int *)(iVar16 + 0x6c);
      *(uint *)(iVar16 + 0x3c) = uVar14;
      auVar19._0_4_ = -(uint)(uStack_5c0 == _DAT_10302e30);
      auVar19._4_4_ = -(uint)(iStack_5bc == _UNK_10302e34);
      auVar19._8_4_ = -(uint)(iStack_5b8 == _UNK_10302e38);
      auVar19._12_4_ = -(uint)(iStack_5b4 == _UNK_10302e3c);
      iVar8 = movmskps(puVar12,auVar19);
      if (iVar8 != 0xf) {
        FUN_101c17d8(piVar5,&uStack_5c0);
        lVar6 = (longlong)*(int *)(iVar16 + 0x28) * (longlong)(int)uStack_5c0;
        iVar16 = (int)(lVar6 >> 0x3f);
        lVar6 = lVar6 + CONCAT44(iVar16,iVar16) + 0x8000;
        *(uint *)(iStack_604 + 0x28) =
             (int)((ulonglong)lVar6 >> 0x20) * 0x10000 | (uint)lVar6 >> 0x10;
        lVar6 = (longlong)*(int *)(iStack_604 + 0x34) * (longlong)iStack_5b4;
        iVar16 = (int)(lVar6 >> 0x3f);
        lVar6 = lVar6 + CONCAT44(iVar16,iVar16) + 0x8000;
        uVar14 = (int)((ulonglong)lVar6 >> 0x20) * 0x10000 | (uint)lVar6 >> 0x10;
        *(uint *)(iStack_604 + 0x34) = uVar14;
        iVar16 = iStack_604;
      }
      iVar8 = iStack_5e8;
      local_608 = piVar5;
      if (iVar17 != 0 || iStack_5e8 != 0) {
        FUN_101c1818(piVar5,iVar17,iStack_5e8);
        *(int *)(iVar16 + 0x28) = *(int *)(iVar16 + 0x28) + iVar17;
        uVar14 = iVar8 + *(int *)(iVar16 + 0x34);
        *(uint *)(iVar16 + 0x34) = uVar14;
      }
      lVar7 = _UNK_10302e78;
      lVar6 = _DAT_10302e70;
      if ((bStack_5f1 & (char)uStack_5ec == '\0') == 0) {
        uVar1 = *(ulonglong *)(iVar16 + 0xa4);
        iVar17 = (int)(uVar1 >> 0x20);
        if ((((byte)uStack_5e4 & iStack_2dc != 0) == 0) && (*(ushort *)(iVar16 + 0x6e) != 0)) {
          puVar15 = *(ulonglong **)(iVar16 + 0x70);
          auVar20._8_4_ = iVar17;
          auVar20._0_8_ = uVar1;
          auVar20._12_4_ = -(uint)((longlong)uVar1 < 0);
          uVar21 = auVar20._8_8_;
          uVar14 = *(ushort *)(iVar16 + 0x6e) + 1;
          do {
            uVar2 = *puVar15;
            auVar25._0_4_ = -(uint)((int)uVar2 < 0);
            auVar25._4_4_ = -(uint)((longlong)uVar2 < 0);
            auVar25._12_4_ = -(uint)(0 < SUB124(SUB1612((undefined1  [16])0x0,4),8));
            auVar23._8_4_ = (int)(uVar2 >> 0x20);
            auVar23._0_8_ = uVar2;
            auVar23._12_4_ = auVar25._4_4_;
            auVar25._8_4_ = auVar25._4_4_;
            lVar22 = (uVar2 & 0xffffffff) * (uVar1 & 0xffffffff) +
                     ((uVar2 & 0xffffffff) * (ulonglong)-(uint)((int)uVar1 < 0) +
                      (ulonglong)auVar25._0_4_ * (uVar1 & 0xffffffff) << 0x20);
            lVar24 = (auVar23._8_8_ & 0xffffffff) * (uVar21 & 0xffffffff) +
                     ((auVar23._8_8_ & 0xffffffff) * (uVar21 >> 0x20) +
                      (auVar25._8_8_ & 0xffffffff) * (uVar21 & 0xffffffff) << 0x20);
            iVar8 = (int)(lVar22 >> 0x3f);
            auVar26._0_8_ = CONCAT44(iVar8,iVar8);
            auVar26._8_4_ = (int)(lVar24 >> 0x3f);
            auVar26._12_4_ = auVar26._8_4_;
            *puVar15 = CONCAT44((int)((ulonglong)(auVar26._8_8_ + lVar24 + lVar7) >> 0x10),
                                (int)((ulonglong)(auVar26._0_8_ + lVar22 + lVar6) >> 0x10));
            puVar15 = puVar15 + 1;
            uVar14 = uVar14 - 1;
          } while (1 < uVar14);
          uVar14 = *(uint *)(iVar16 + 0x34);
        }
        lVar6 = (longlong)(int)uVar1 * (longlong)*(int *)(iVar16 + 0x28);
        iVar16 = (int)(lVar6 >> 0x3f);
        lVar7 = lVar6 + CONCAT44(iVar16,iVar16) + 0x8000;
        lVar6 = (longlong)(int)uVar14 * (longlong)iVar17;
        iVar16 = (int)(lVar6 >> 0x3f);
        lVar6 = lVar6 + CONCAT44(iVar16,iVar16) + 0x8000;
        *(uint *)(iStack_604 + 0x28) =
             (int)((ulonglong)lVar7 >> 0x20) * 0x10000 | (uint)lVar7 >> 0x10;
        *(uint *)(iStack_604 + 0x34) =
             (int)((ulonglong)lVar6 >> 0x20) * 0x10000 | (uint)lVar6 >> 0x10;
        iVar16 = iStack_604;
      }
      FUN_101c0df9(local_608,&sStack_5d4);
      *(ulonglong *)(iVar16 + 0x18) =
           CONCAT44(uStack_5cc._4_4_ - iStack_5d0,(int)uStack_5cc - CONCAT22(uStack_5d2,sStack_5d4))
      ;
      *(int *)(iVar16 + 0x20) = CONCAT22(uStack_5d2,sStack_5d4);
      *(int *)(iVar16 + 0x24) = uStack_5cc._4_4_;
      if ((char)local_5fc == '\0') {
        *(int *)(iVar16 + 0x2c) = CONCAT22(uStack_5d2,sStack_5d4) - *(int *)(iVar16 + 0x28) / 2;
        lVar6 = (longlong)*(int *)(iVar16 + 0x30) * (longlong)*(int *)(iVar16 + 0xa8);
        iVar17 = (int)(lVar6 >> 0x3f);
        lVar6 = lVar6 + CONCAT44(iVar17,iVar17) + 0x8000;
        *(uint *)(iVar16 + 0x30) = (int)((ulonglong)lVar6 >> 0x20) << 0x10 | (uint)lVar6 >> 0x10;
      }
      else if ((param_4 & 0x10) != 0) {
        FUN_101c241f(iVar16 + 0x18,*(undefined4 *)(iVar16 + 0x34));
      }
    }
    else {
      iVar17 = *(int *)(iVar16 + 0x9c);
      *(undefined4 *)(iVar16 + 0x20) = uStack_300;
      *(uint *)(iVar16 + 0x28) = uStack_d8;
      *(uint *)(iVar17 + 0xc) = uStack_5c0;
      *(int *)(iVar17 + 0x10) = iStack_5bc;
      *(int *)(iVar17 + 0x14) = iStack_5b8;
      *(int *)(iVar17 + 0x18) = iStack_5b4;
      *(int *)(iVar17 + 0x1c) = iStack_5f0;
      *(int *)(iVar17 + 0x20) = iStack_5e8;
      *(undefined1 *)(iVar17 + 8) = 1;
    }
  }
LAB_101f631e:
  iVar17 = 0;
LAB_101f5f7b:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_608)) {
    return iVar17;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

