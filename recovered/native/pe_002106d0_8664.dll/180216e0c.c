/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180216e0c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180216e0c(longlong param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  int *piVar11;
  undefined8 uVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  bool bVar16;
  undefined1 auVar17 [16];
  undefined1 auStack_98 [32];
  int local_78;
  undefined1 local_70;
  longlong local_68;
  undefined8 local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)(param_1 + 0xf0);
  iVar8 = *(int *)(param_1 + 0xa4);
  uVar2 = *(undefined4 *)(param_1 + 0xa8);
  local_4c = 0;
  local_58 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  lVar10 = FUN_180219aea(lVar4);
  bVar16 = *(longlong *)(param_1 + 0xf8) != lVar10;
  if (bVar16) {
    *(longlong *)(param_1 + 0xf8) = lVar10;
  }
  if ((*(char *)(param_1 + 0xc) == '\0') && (piVar11 = (int *)FUN_180219af2(lVar4), *piVar11 != 0))
  {
    lVar5 = *(longlong *)(param_1 + 0x288);
    iVar7 = FUN_180219aff(lVar4,&local_4c,&local_58);
    *(int *)(param_1 + 8) = iVar7;
    if (iVar7 != 0) goto LAB_18021712e;
    cVar6 = (**(code **)(lVar5 + 0x18))
                      (lVar10 + 0x230,*(undefined4 *)(lVar10 + 0x220),local_4c,local_58);
    if (cVar6 != '\0') {
      (**(code **)(lVar5 + 8))(*(undefined8 *)(lVar4 + 800),lVar10,local_4c,local_58);
    }
    bVar16 = cVar6 != '\0' || bVar16;
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(lVar10 + 0x238);
    *(undefined1 *)(param_1 + 0x61) = 0;
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(lVar10 + 0x220);
    *(undefined4 *)(param_1 + 0x94) = local_4c;
    *(undefined8 *)(param_1 + 0x98) = local_58;
  }
  iVar7 = FUN_180219b29(lVar4);
  if (*(int *)(param_1 + 0x5c) != iVar7) {
    *(int *)(param_1 + 0x5c) = iVar7;
    bVar16 = true;
  }
  uVar3 = *(uint *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x100) = (byte)uVar3 & 1;
  auVar1 = *param_2;
  auVar17[0] = -(*(char *)(param_1 + 0x14) == auVar1[0]);
  auVar17[1] = -(*(char *)(param_1 + 0x15) == auVar1[1]);
  auVar17[2] = -(*(char *)(param_1 + 0x16) == auVar1[2]);
  auVar17[3] = -(*(char *)(param_1 + 0x17) == auVar1[3]);
  auVar17[4] = -(*(char *)(param_1 + 0x18) == auVar1[4]);
  auVar17[5] = -(*(char *)(param_1 + 0x19) == auVar1[5]);
  auVar17[6] = -(*(char *)(param_1 + 0x1a) == auVar1[6]);
  auVar17[7] = -(*(char *)(param_1 + 0x1b) == auVar1[7]);
  auVar17[8] = -(*(char *)(param_1 + 0x1c) == auVar1[8]);
  auVar17[9] = -(*(char *)(param_1 + 0x1d) == auVar1[9]);
  auVar17[10] = -(*(char *)(param_1 + 0x1e) == auVar1[10]);
  auVar17[0xb] = -(*(char *)(param_1 + 0x1f) == auVar1[0xb]);
  auVar17[0xc] = -(*(char *)(param_1 + 0x20) == auVar1[0xc]);
  auVar17[0xd] = -(*(char *)(param_1 + 0x21) == auVar1[0xd]);
  auVar17[0xe] = -(*(char *)(param_1 + 0x22) == auVar1[0xe]);
  auVar17[0xf] = -(*(char *)(param_1 + 0x23) == auVar1[0xf]);
  if ((ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe | (ushort)(auVar17[0xf] >> 7) << 0xf)
      == 0xffff) {
    if ((uVar3 & 2) != (uint)*(byte *)(param_1 + 0x102)) goto LAB_180216fc7;
    if (!bVar16) goto LAB_18021712e;
  }
  else {
    uVar12 = *(undefined8 *)(*param_2 + 8);
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)*param_2;
    *(undefined8 *)(param_1 + 0x1c) = uVar12;
    *(undefined8 *)(param_1 + 0x24) = 0;
    uVar12 = *(undefined8 *)(*param_2 + 8);
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)*param_2;
    *(undefined8 *)(param_1 + 0x34) = uVar12;
    *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)param_2[1];
    uVar12 = _UNK_1803296e8;
    *(undefined8 *)(param_1 + 0x44) = _DAT_1803296e0;
    *(undefined8 *)(param_1 + 0x4c) = uVar12;
    if ((uVar3 & 2) != (uint)*(byte *)(param_1 + 0x102)) {
LAB_180216fc7:
      *(char *)(param_1 + 0x102) = (char)((uVar3 & 2) >> 1);
    }
  }
  iVar15 = 1000;
  if (*(int *)(param_1 + 0xa0) != 0) {
    iVar15 = *(int *)(param_1 + 0xa0);
  }
  iVar13 = 0x40000;
  if (0x40000 < iVar7) {
    iVar13 = iVar7;
  }
  uVar14 = 0x3e80000 / (longlong)iVar15 & 0xffffffff;
  iVar7 = FUN_180219b3c(lVar4,0x3e80000 % (longlong)iVar15 & 0xffffffff);
  *(int *)(param_1 + 0x124) = iVar7;
  if (iVar7 < 1) {
    iVar7 = FUN_1801cc3a4(0x4b0000,uVar14);
    *(int *)(param_1 + 0x124) = iVar7;
  }
  if (iVar8 < 1) {
    local_70 = *(undefined1 *)(param_1 + 0x102);
    local_78 = 0;
  }
  else {
    iVar7 = FUN_1801cc3a4(iVar15 << 0x10,iVar13);
    if (iVar8 <= iVar7) {
      iVar8 = FUN_1801cc3a4(iVar15 << 0x10,iVar13);
    }
    iVar7 = *(int *)(param_1 + 0x124);
    local_70 = 0;
    local_78 = iVar8;
  }
  local_68 = param_1 + 0x104;
  FUN_180219b4d(uVar14,iVar13,iVar7,param_1 + 300);
  iVar8 = FUN_180219d71(lVar4);
  if ((iVar8 < 1) || (uVar12 = 0x4b0000, *(int *)(param_1 + 0x124) <= iVar8 * 2)) {
    uVar12 = 0x6e0000;
  }
  uVar9 = FUN_1801cc3a4(uVar12,uVar14);
  *(undefined4 *)(param_1 + 0x128) = uVar9;
  local_68 = param_1 + 0x104;
  local_70 = *(undefined1 *)(param_1 + 0x102);
  local_78 = uVar2;
  FUN_180219b4d(uVar14,iVar13,uVar9,(int *)(param_1 + 0x130));
  bVar16 = true;
  if (*(int *)(param_1 + 300) == 0) {
    bVar16 = *(int *)(param_1 + 0x130) != 0;
  }
  *(bool *)(param_1 + 0x101) = bVar16;
  *(undefined1 *)(param_1 + 0x134) = 0;
  FUN_180219d82(param_1 + 0x138,param_1);
LAB_18021712e:
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_98);
  }
  return;
}

