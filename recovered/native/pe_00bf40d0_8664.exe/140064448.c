/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140064448 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140064448(longlong param_1,char *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  undefined1 auVar14 [16];
  undefined1 auStackY_98 [32];
  char cVar15;
  undefined8 local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_98;
  lVar2 = *(longlong *)(param_1 + 0xf0);
  iVar8 = *(int *)(param_1 + 0xa4);
  iVar1 = *(int *)(param_1 + 0xa8);
  local_4c = 0;
  local_58 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  lVar9 = FUN_140067126(lVar2);
  bVar13 = *(longlong *)(param_1 + 0xf8) != lVar9;
  if (bVar13) {
    *(longlong *)(param_1 + 0xf8) = lVar9;
  }
  if ((*(char *)(param_1 + 0xc) == '\0') && (piVar10 = (int *)FUN_14006712e(lVar2), *piVar10 != 0))
  {
    lVar3 = *(longlong *)(param_1 + 0x288);
    iVar6 = FUN_14006713b(lVar2,&local_4c,&local_58);
    *(int *)(param_1 + 8) = iVar6;
    if (iVar6 != 0) goto LAB_14006476a;
    cVar15 = (**(code **)(lVar3 + 0x18))
                       (lVar9 + 0x230,*(undefined4 *)(lVar9 + 0x220),local_4c,local_58);
    if (cVar15 != '\0') {
      (**(code **)(lVar3 + 8))(*(undefined8 *)(lVar2 + 800),lVar9,local_4c,local_58);
    }
    bVar13 = cVar15 != '\0' || bVar13;
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(lVar9 + 0x238);
    *(undefined1 *)(param_1 + 0x61) = 0;
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(lVar9 + 0x220);
    *(undefined4 *)(param_1 + 0x94) = local_4c;
    *(undefined8 *)(param_1 + 0x98) = local_58;
  }
  lVar9 = FUN_140067165(lVar2);
  uVar5 = (uint)lVar9;
  if (*(uint *)(param_1 + 0x5c) != uVar5) {
    *(uint *)(param_1 + 0x5c) = uVar5;
    bVar13 = true;
  }
  uVar12 = *(uint *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x100) = (byte)uVar12 & 1;
  auVar14[0] = -(*(char *)(param_1 + 0x14) == *param_2);
  auVar14[1] = -(*(char *)(param_1 + 0x15) == param_2[1]);
  auVar14[2] = -(*(char *)(param_1 + 0x16) == param_2[2]);
  auVar14[3] = -(*(char *)(param_1 + 0x17) == param_2[3]);
  auVar14[4] = -(*(char *)(param_1 + 0x18) == param_2[4]);
  auVar14[5] = -(*(char *)(param_1 + 0x19) == param_2[5]);
  auVar14[6] = -(*(char *)(param_1 + 0x1a) == param_2[6]);
  auVar14[7] = -(*(char *)(param_1 + 0x1b) == param_2[7]);
  auVar14[8] = -(*(char *)(param_1 + 0x1c) == param_2[8]);
  auVar14[9] = -(*(char *)(param_1 + 0x1d) == param_2[9]);
  auVar14[10] = -(*(char *)(param_1 + 0x1e) == param_2[10]);
  auVar14[0xb] = -(*(char *)(param_1 + 0x1f) == param_2[0xb]);
  auVar14[0xc] = -(*(char *)(param_1 + 0x20) == param_2[0xc]);
  auVar14[0xd] = -(*(char *)(param_1 + 0x21) == param_2[0xd]);
  auVar14[0xe] = -(*(char *)(param_1 + 0x22) == param_2[0xe]);
  auVar14[0xf] = -(*(char *)(param_1 + 0x23) == param_2[0xf]);
  if ((ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) | (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe | (ushort)(auVar14[0xf] >> 7) << 0xf)
      == 0xffff) {
    if ((uVar12 & 2) != (uint)*(byte *)(param_1 + 0x102)) goto LAB_140064603;
    if (!bVar13) goto LAB_14006476a;
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0x1c) = uVar4;
    *(undefined8 *)(param_1 + 0x24) = 0;
    uVar4 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0x34) = uVar4;
    *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x10);
    uVar4 = _UNK_1400e6838;
    *(undefined8 *)(param_1 + 0x44) = _DAT_1400e6830;
    *(undefined8 *)(param_1 + 0x4c) = uVar4;
    if ((uVar12 & 2) != (uint)*(byte *)(param_1 + 0x102)) {
LAB_140064603:
      *(char *)(param_1 + 0x102) = (char)((uVar12 & 2) >> 1);
    }
  }
  iVar6 = 1000;
  if (*(int *)(param_1 + 0xa0) != 0) {
    iVar6 = *(int *)(param_1 + 0xa0);
  }
  uVar12 = 0x40000;
  if (0x40000 < (int)uVar5) {
    uVar12 = uVar5;
  }
  iVar7 = FUN_140067178(lVar2);
  *(int *)(param_1 + 0x124) = iVar7;
  uVar5 = (uint)(0x3e80000 / (longlong)iVar6);
  if (iVar7 < 1) {
    iVar7 = FUN_14001ecff(0x4b0000,uVar5);
    *(int *)(param_1 + 0x124) = iVar7;
  }
  if (iVar8 < 1) {
    cVar15 = *(char *)(param_1 + 0x102);
    iVar8 = 0;
  }
  else {
    iVar7 = FUN_14001ecff(iVar6 << 0x10,uVar12);
    if (iVar8 <= iVar7) {
      iVar8 = FUN_14001ecff(iVar6 << 0x10,uVar12);
    }
    iVar7 = *(int *)(param_1 + 0x124);
    cVar15 = '\0';
  }
  FUN_140067189(uVar5,uVar12,iVar7,(uint *)(param_1 + 300),iVar8,cVar15,(int *)(param_1 + 0x104));
  iVar8 = FUN_1400673ad(lVar2);
  if ((iVar8 < 1) || (uVar11 = 0x4b0000, *(int *)(param_1 + 0x124) <= iVar8 * 2)) {
    uVar11 = 0x6e0000;
  }
  iVar8 = FUN_14001ecff(uVar11,uVar5);
  *(int *)(param_1 + 0x128) = iVar8;
  FUN_140067189(uVar5,uVar12,iVar8,(uint *)(param_1 + 0x130),iVar1,*(char *)(param_1 + 0x102),
                (int *)(param_1 + 0x104));
  bVar13 = true;
  if (*(int *)(param_1 + 300) == 0) {
    bVar13 = *(uint *)(param_1 + 0x130) != 0;
  }
  *(bool *)(param_1 + 0x101) = bVar13;
  *(undefined1 *)(param_1 + 0x134) = 0;
  FUN_1400673be((undefined1 (*) [32])(param_1 + 0x138),param_1);
LAB_14006476a:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_98);
  }
  return;
}

