/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0045f950 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0045f950(int param_1,char *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  undefined *puVar11;
  uint uVar12;
  bool bVar13;
  undefined1 auVar14 [16];
  byte bVar15;
  char *local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_30;
  local_28 = *(int *)(param_1 + 0xb0);
  local_2c = *(uint *)(param_1 + 0x88);
  local_20 = *(int *)(param_1 + 0x8c);
  local_18 = 0;
  local_1c = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  iVar6 = FUN_00461f97(local_28);
  iVar10 = local_28;
  bVar13 = *(int *)(param_1 + 0xb4) != iVar6;
  if (bVar13) {
    *(int *)(param_1 + 0xb4) = iVar6;
  }
  if ((*(char *)(param_1 + 8) == '\0') &&
     (local_30 = param_2, piVar8 = (int *)FUN_00461f9e(local_28), param_2 = local_30, *piVar8 != 0))
  {
    local_24 = *(int *)(param_1 + 0x224);
    iVar10 = FUN_00461faa(iVar10,&local_18,&local_1c);
    *(int *)(param_1 + 4) = iVar10;
    if (iVar10 != 0) goto LAB_0045fc5a;
    cVar5 = (**(code **)(local_24 + 0xc))
                      (iVar6 + 0x228,*(undefined4 *)(iVar6 + 0x220),local_18,local_1c);
    param_2 = local_30;
    if (cVar5 != '\0') {
      (**(code **)(local_24 + 4))(*(undefined4 *)(local_28 + 0x214),iVar6,local_18,local_1c);
    }
    bVar13 = cVar5 != '\0' || bVar13;
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(iVar6 + 0x22c);
    *(undefined1 *)(param_1 + 0x5d) = 0;
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(iVar6 + 0x220);
    *(undefined4 *)(param_1 + 0x7c) = local_18;
    *(undefined4 *)(param_1 + 0x80) = local_1c;
  }
  uVar7 = FUN_00461fc6(local_28);
  iVar10 = local_28;
  if (*(uint *)(param_1 + 0x58) != uVar7) {
    *(uint *)(param_1 + 0x58) = uVar7;
    bVar13 = true;
  }
  uVar12 = *(uint *)(param_1 + 0xc);
  *(byte *)(param_1 + 0xb8) = (byte)uVar12 & 1;
  auVar14[0] = -(*(char *)(param_1 + 0x10) == *param_2);
  auVar14[1] = -(*(char *)(param_1 + 0x11) == param_2[1]);
  auVar14[2] = -(*(char *)(param_1 + 0x12) == param_2[2]);
  auVar14[3] = -(*(char *)(param_1 + 0x13) == param_2[3]);
  auVar14[4] = -(*(char *)(param_1 + 0x14) == param_2[4]);
  auVar14[5] = -(*(char *)(param_1 + 0x15) == param_2[5]);
  auVar14[6] = -(*(char *)(param_1 + 0x16) == param_2[6]);
  auVar14[7] = -(*(char *)(param_1 + 0x17) == param_2[7]);
  auVar14[8] = -(*(char *)(param_1 + 0x18) == param_2[8]);
  auVar14[9] = -(*(char *)(param_1 + 0x19) == param_2[9]);
  auVar14[10] = -(*(char *)(param_1 + 0x1a) == param_2[10]);
  auVar14[0xb] = -(*(char *)(param_1 + 0x1b) == param_2[0xb]);
  auVar14[0xc] = -(*(char *)(param_1 + 0x1c) == param_2[0xc]);
  auVar14[0xd] = -(*(char *)(param_1 + 0x1d) == param_2[0xd]);
  auVar14[0xe] = -(*(char *)(param_1 + 0x1e) == param_2[0xe]);
  auVar14[0xf] = -(*(char *)(param_1 + 0x1f) == param_2[0xf]);
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
    if ((uVar12 & 2) != (uint)*(byte *)(param_1 + 0xba)) goto LAB_0045fb01;
    if (!bVar13) goto LAB_0045fc5a;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 4);
    uVar2 = *(undefined4 *)(param_2 + 8);
    uVar3 = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 0x14) = uVar1;
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    uVar1 = *(undefined4 *)(param_2 + 4);
    uVar2 = *(undefined4 *)(param_2 + 8);
    uVar3 = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
    *(undefined4 *)(param_1 + 0x30) = uVar2;
    *(undefined4 *)(param_1 + 0x34) = uVar3;
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x10);
    uVar3 = _UNK_004d73dc;
    uVar2 = _UNK_004d73d8;
    uVar1 = _UNK_004d73d4;
    *(undefined4 *)(param_1 + 0x40) = _DAT_004d73d0;
    *(undefined4 *)(param_1 + 0x44) = uVar1;
    *(undefined4 *)(param_1 + 0x48) = uVar2;
    *(undefined4 *)(param_1 + 0x4c) = uVar3;
    if ((uVar12 & 2) != (uint)*(byte *)(param_1 + 0xba)) {
LAB_0045fb01:
      *(char *)(param_1 + 0xba) = (char)((uVar12 & 2) >> 1);
    }
  }
  iVar6 = 1000;
  if (*(int *)(param_1 + 0x84) != 0) {
    iVar6 = *(int *)(param_1 + 0x84);
  }
  uVar12 = 0x40000;
  if (0x40000 < (int)uVar7) {
    uVar12 = uVar7;
  }
  local_30 = (char *)(0x3e80000 / (longlong)iVar6);
  iVar9 = FUN_00461fd4(local_28);
  *(int *)(param_1 + 0xdc) = iVar9;
  if (iVar9 < 1) {
    iVar9 = FUN_0041eaa0(0x4b0000,(uint)local_30);
    *(int *)(param_1 + 0xdc) = iVar9;
  }
  if ((int)local_2c < 1) {
    bVar15 = *(byte *)(param_1 + 0xba);
    local_2c = (uint)bVar15;
    uVar7 = 0;
  }
  else {
    iVar9 = FUN_0041eaa0(iVar6 << 0x10,uVar12);
    uVar7 = local_2c;
    if ((int)local_2c <= iVar9) {
      uVar7 = FUN_0041eaa0(iVar6 << 0x10,uVar12);
    }
    bVar15 = 0;
    iVar9 = *(int *)(param_1 + 0xdc);
  }
  FUN_00461fe4((uint)local_30,uVar12,iVar9,(uint *)(param_1 + 0xe4),uVar7,bVar15,
               (int *)(param_1 + 0xbc));
  iVar10 = FUN_00462230(iVar10);
  pcVar4 = local_30;
  if ((iVar10 < 1) || (puVar11 = &DAT_004b0000, *(int *)(param_1 + 0xdc) <= iVar10 * 2)) {
    puVar11 = (undefined *)0x6e0000;
  }
  iVar10 = FUN_0041eaa0((uint)puVar11,(uint)local_30);
  *(int *)(param_1 + 0xe0) = iVar10;
  FUN_00461fe4((uint)pcVar4,uVar12,iVar10,(uint *)(param_1 + 0xe8),local_20,
               *(char *)(param_1 + 0xba),(int *)(param_1 + 0xbc));
  bVar13 = true;
  if (*(int *)(param_1 + 0xe4) == 0) {
    bVar13 = *(uint *)(param_1 + 0xe8) != 0;
  }
  *(bool *)(param_1 + 0xb9) = bVar13;
  *(undefined1 *)(param_1 + 0xec) = 0;
  FUN_00462240((uint *)(param_1 + 0xf0),param_1);
LAB_0045fc5a:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_30)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_30);
  }
  return;
}

