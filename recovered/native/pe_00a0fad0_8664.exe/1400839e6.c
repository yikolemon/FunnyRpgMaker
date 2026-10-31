/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400839e6 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1400839e6(undefined8 param_1,longlong *param_2)

{
  byte *pbVar1;
  uint uVar2;
  ulonglong uVar3;
  byte bVar4;
  ulonglong uVar5;
  byte bVar6;
  longlong lVar7;
  ulonglong uVar8;
  byte bVar9;
  byte bVar10;
  bool bVar11;
  ulonglong local_8208;
  undefined4 local_8200;
  undefined1 local_81fc [32772];
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  byte abStack_164 [4];
  undefined4 local_160;
  byte abStack_154 [164];
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0 [4];
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  longlong alStack_70 [3];
  uint local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  alStack_70[1] = 0;
  alStack_70[2] = 0;
  local_78 = 0;
  alStack_70[0] = 0;
  local_58 = 0;
  uStack_54 = 0;
  local_50 = 0;
  local_80 = param_1;
  FUN_1401366a0(&local_8208,0,0x800c);
  if (alStack_70 != param_2) {
    FUN_1400587f4(alStack_70,*param_2,param_2[1] - *param_2);
  }
  local_160._0_2_ = 0x800;
  local_160._2_1_ = 6;
  FUN_14008b019(&local_78);
  local_8208 = CONCAT44(local_50,uStack_54);
  local_8200 = 0;
  FUN_140117538(uStack_54);
  lVar7 = 0;
  do {
    FUN_14008b59f(&local_8208,local_81fc + lVar7 * 0x400);
    lVar7 = lVar7 + 1;
  } while (lVar7 != 0x20);
  FUN_14008b1ea(&local_78,&local_8208,local_a0,local_90);
  lVar7 = 0;
  do {
    (&local_160)[lVar7] = local_a0[lVar7];
    lVar7 = lVar7 + 1;
  } while (lVar7 != 4);
  uVar3 = 4;
  do {
    bVar10 = abStack_164[uVar3 * 4];
    bVar9 = abStack_164[uVar3 * 4 + 1];
    bVar6 = abStack_164[uVar3 * 4 + 2];
    bVar4 = abStack_164[uVar3 * 4 + 3];
    if ((uVar3 & 3) == 0) {
      uVar8 = (ulonglong)bVar10;
      bVar10 = (&DAT_1401635f0)[uVar3 >> 2 & 0x3fffffff] ^ (&DAT_1401634f0)[bVar9];
      bVar9 = (byte)(&DAT_1401634f0)[bVar6] >> 4;
      bVar6 = ~(&DAT_1401634f0)[bVar4];
      bVar4 = (&DAT_1401634f0)[uVar8] << 1 | (char)(&DAT_1401634f0)[uVar8] < '\0';
    }
    *(byte *)(&local_160 + uVar3) = bVar10 ^ *(byte *)(&uStack_170 + uVar3);
    *(byte *)((longlong)&local_160 + uVar3 * 4 + 1) =
         bVar9 ^ *(byte *)((longlong)&uStack_170 + uVar3 * 4 + 1);
    *(byte *)((longlong)&local_160 + uVar3 * 4 + 2) =
         bVar6 ^ *(byte *)((longlong)&uStack_170 + uVar3 * 4 + 2);
    *(byte *)((longlong)&local_160 + uVar3 * 4 + 3) =
         bVar4 ^ *(byte *)((longlong)&uStack_170 + uVar3 * 4 + 3);
    uVar3 = uVar3 + 1;
  } while (uVar3 != 0x2c);
  thunk_FUN_1400498e2(local_90,&local_80,&local_b0);
  lVar7 = alStack_70[0];
  uVar3 = (ulonglong)local_58;
  if (uVar3 != 0) {
    uVar2 = 0x10;
    uVar8 = 0;
    do {
      if (uVar2 == 0x10) {
        local_1f8 = local_b0;
        uStack_1f4 = uStack_ac;
        uStack_1f0 = uStack_a8;
        uStack_1ec = uStack_a4;
        FUN_1400859c5(&local_1f8,&local_160);
        uVar2 = 0xf;
        do {
          uVar5 = (ulonglong)uVar2;
          if (*(char *)((longlong)&local_b0 + uVar5) != -1) {
            *(char *)((longlong)&local_b0 + uVar5) = *(char *)((longlong)&local_b0 + uVar5) + '\x01'
            ;
            uVar2 = 0;
            goto LAB_140083c5d;
          }
          *(undefined1 *)((longlong)&local_b0 + uVar5) = 0;
          bVar11 = uVar2 != 0;
          uVar2 = uVar2 - 1;
        } while (bVar11);
        uVar2 = 0;
      }
LAB_140083c5d:
      pbVar1 = (byte *)(lVar7 + 0x14 + uVar8);
      *pbVar1 = *pbVar1 ^ *(byte *)((longlong)&local_1f8 + (ulonglong)uVar2);
      uVar8 = uVar8 + 1;
      uVar2 = uVar2 + 1;
    } while (uVar8 < uVar3);
  }
  FUN_1400ab958(&local_8208);
  local_8208 = (ulonglong)CONCAT14((undefined1)local_78,(uint)local_78._3_1_);
  local_8200 = 0;
  FUN_140117538();
  lVar7 = 0;
  do {
    FUN_14008b59f(&local_8208,local_81fc + lVar7 * 0x400);
    lVar7 = lVar7 + 1;
  } while (lVar7 != 0x20);
  local_78 = CONCAT44((undefined4)local_78,(undefined4)local_78);
  FUN_14008b1ea(&local_78,&local_8208,local_a0,local_90);
  lVar7 = 0;
  do {
    (&local_160)[lVar7] = local_a0[lVar7];
    lVar7 = lVar7 + 1;
  } while (lVar7 != 4);
  uVar3 = 4;
  do {
    bVar10 = abStack_164[uVar3 * 4];
    bVar9 = abStack_164[uVar3 * 4 + 1];
    bVar6 = abStack_164[uVar3 * 4 + 2];
    bVar4 = abStack_164[uVar3 * 4 + 3];
    if ((uVar3 & 3) == 0) {
      uVar8 = (ulonglong)bVar10;
      bVar10 = (&DAT_1401635f0)[uVar3 >> 2 & 0x3fffffff] ^ (&DAT_1401634f0)[bVar9];
      bVar9 = (byte)(&DAT_1401634f0)[bVar6] >> 4;
      bVar6 = ~(&DAT_1401634f0)[bVar4];
      bVar4 = (&DAT_1401634f0)[uVar8] << 1 | (char)(&DAT_1401634f0)[uVar8] < '\0';
    }
    *(byte *)(&local_160 + uVar3) = bVar10 ^ *(byte *)(&uStack_170 + uVar3);
    *(byte *)((longlong)&local_160 + uVar3 * 4 + 1) =
         bVar9 ^ *(byte *)((longlong)&uStack_170 + uVar3 * 4 + 1);
    *(byte *)((longlong)&local_160 + uVar3 * 4 + 2) =
         bVar6 ^ *(byte *)((longlong)&uStack_170 + uVar3 * 4 + 2);
    *(byte *)((longlong)&local_160 + uVar3 * 4 + 3) =
         bVar4 ^ *(byte *)((longlong)&uStack_170 + uVar3 * 4 + 3);
    uVar3 = uVar3 + 1;
  } while (uVar3 != 0x2c);
  thunk_FUN_1400498e2(local_90,&local_80,&local_b0);
  thunk_FUN_1400498e2(alStack_70[0] + 0xf,alStack_70[0] + 0x8f,&local_1f8);
  uVar2 = 0x10;
  uVar3 = 0;
  do {
    if (uVar2 == 0x10) {
      local_178 = local_b0;
      uStack_174 = uStack_ac;
      uStack_170 = uStack_a8;
      uStack_16c = uStack_a4;
      FUN_1400859c5(&local_178,&local_160);
      uVar2 = 0xf;
      do {
        uVar8 = (ulonglong)uVar2;
        if (*(char *)((longlong)&local_b0 + uVar8) != -1) {
          *(char *)((longlong)&local_b0 + uVar8) = *(char *)((longlong)&local_b0 + uVar8) + '\x01';
          uVar2 = 0;
          goto LAB_140083e4d;
        }
        *(undefined1 *)((longlong)&local_b0 + uVar8) = 0;
        bVar11 = uVar2 != 0;
        uVar2 = uVar2 - 1;
      } while (bVar11);
      uVar2 = 0;
    }
LAB_140083e4d:
    *(byte *)((longlong)&local_1f8 + uVar3) =
         *(byte *)((longlong)&local_1f8 + uVar3) ^
         *(byte *)((longlong)&local_178 + (ulonglong)uVar2);
    uVar2 = uVar2 + 1;
    bVar11 = 0x7e < uVar3;
    uVar3 = uVar3 + 1;
    if (bVar11) {
      FUN_1400ab9e8(local_80,&local_1f8);
      FUN_140016e5c(alStack_70);
      return local_80;
    }
  } while( true );
}

