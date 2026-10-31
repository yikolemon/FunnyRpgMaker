/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008ad0c */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_14008ad0c(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  bool bVar11;
  undefined8 local_8148;
  undefined4 local_8140;
  undefined1 local_813c [32756];
  byte abStack_148 [12];
  byte abStack_13c [4];
  undefined4 local_138;
  byte abStack_12c [164];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78 [4];
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 *local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  local_48 = param_1;
  FUN_1401366a0(&local_8148,0,0x800c);
  if (local_48 + 1 != param_2) {
    FUN_1400587f4(local_48 + 1,*param_2,param_2[1] - *param_2);
  }
  FUN_14008b019(local_48,param_3);
  local_8148 = *(undefined8 *)((longlong)local_48 + 0x24);
  local_8140 = 0;
  FUN_140117538(*(undefined4 *)((longlong)local_48 + 0x24));
  lVar6 = 0;
  do {
    FUN_14008b59f(&local_8148,local_813c + lVar6 * 0x400);
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x20);
  FUN_14008b1ea(local_48,&local_8148,local_78,local_68);
  lVar6 = 0;
  do {
    (&local_138)[lVar6] = local_78[lVar6];
    lVar6 = lVar6 + 1;
  } while (lVar6 != 4);
  uVar4 = 4;
  do {
    bVar10 = abStack_13c[uVar4 * 4];
    bVar9 = abStack_13c[uVar4 * 4 + 1];
    bVar8 = abStack_13c[uVar4 * 4 + 2];
    bVar7 = abStack_13c[uVar4 * 4 + 3];
    if ((uVar4 & 3) == 0) {
      uVar5 = (ulonglong)bVar10;
      bVar10 = (&DAT_1401635f0)[uVar4 >> 2 & 0x3fffffff] ^ (&DAT_1401634f0)[bVar9];
      bVar9 = (byte)(&DAT_1401634f0)[bVar8] >> 4;
      bVar8 = ~(&DAT_1401634f0)[bVar7];
      bVar7 = (&DAT_1401634f0)[uVar5] << 1 | (char)(&DAT_1401634f0)[uVar5] < '\0';
    }
    *(byte *)(&local_138 + uVar4) = bVar10 ^ abStack_148[uVar4 * 4];
    *(byte *)((longlong)&local_138 + uVar4 * 4 + 1) = bVar9 ^ abStack_148[uVar4 * 4 + 1];
    *(byte *)((longlong)&local_138 + uVar4 * 4 + 2) = bVar8 ^ abStack_148[uVar4 * 4 + 2];
    *(byte *)((longlong)&local_138 + uVar4 * 4 + 3) = bVar7 ^ abStack_148[uVar4 * 4 + 3];
    uVar4 = uVar4 + 1;
  } while (uVar4 != 0x2c);
  thunk_FUN_1400498e2(local_68,&local_58,&local_88);
  uVar2 = *(uint *)(local_48 + 4);
  if ((ulonglong)uVar2 != 0) {
    lVar6 = local_48[1];
    uVar3 = 0x10;
    uVar4 = 0;
    do {
      if (uVar3 == 0x10) {
        local_58 = local_88;
        uStack_54 = uStack_84;
        uStack_50 = uStack_80;
        uStack_4c = uStack_7c;
        FUN_1400859c5(&local_58,&local_138);
        uVar3 = 0xf;
        do {
          uVar5 = (ulonglong)uVar3;
          if (*(char *)((longlong)&local_88 + uVar5) != -1) {
            *(char *)((longlong)&local_88 + uVar5) = *(char *)((longlong)&local_88 + uVar5) + '\x01'
            ;
            uVar3 = 0;
            goto LAB_14008af76;
          }
          *(undefined1 *)((longlong)&local_88 + uVar5) = 0;
          bVar11 = uVar3 != 0;
          uVar3 = uVar3 - 1;
        } while (bVar11);
        uVar3 = 0;
      }
LAB_14008af76:
      pbVar1 = (byte *)(lVar6 + 0x14 + uVar4);
      *pbVar1 = *pbVar1 ^ *(byte *)((longlong)&local_58 + (ulonglong)uVar3);
      uVar4 = uVar4 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar4 < uVar2);
  }
  return local_48;
}

