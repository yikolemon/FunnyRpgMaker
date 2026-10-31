/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102081d8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_102081d8(int param_1,char *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  bool bVar10;
  undefined1 auVar11 [16];
  uint uVar12;
  char *local_30;
  uint local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_30;
  local_28 = *(int *)(param_1 + 0xb0);
  local_2c = *(uint *)(param_1 + 0x88);
  local_20 = *(undefined4 *)(param_1 + 0x8c);
  local_18 = 0;
  local_1c = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  iVar4 = FUN_1020a81f();
  bVar10 = *(int *)(param_1 + 0xb4) != iVar4;
  if (bVar10) {
    *(int *)(param_1 + 0xb4) = iVar4;
  }
  if ((*(char *)(param_1 + 8) == '\0') &&
     (local_30 = param_2, piVar5 = (int *)FUN_1020a826(), param_2 = local_30, *piVar5 != 0)) {
    local_24 = *(int *)(param_1 + 0x224);
    iVar6 = FUN_1020a832(&local_1c);
    *(int *)(param_1 + 4) = iVar6;
    if (iVar6 != 0) goto LAB_102084e2;
    cVar3 = (**(code **)(local_24 + 0xc))
                      (iVar4 + 0x228,*(undefined4 *)(iVar4 + 0x220),local_18,local_1c);
    param_2 = local_30;
    if (cVar3 != '\0') {
      (**(code **)(local_24 + 4))(*(undefined4 *)(local_28 + 0x214),iVar4,local_18,local_1c);
    }
    bVar10 = cVar3 != '\0' || bVar10;
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(iVar4 + 0x22c);
    *(undefined1 *)(param_1 + 0x5d) = 0;
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(iVar4 + 0x220);
    *(undefined4 *)(param_1 + 0x7c) = local_18;
    *(undefined4 *)(param_1 + 0x80) = local_1c;
  }
  iVar4 = FUN_1020a84e();
  if (*(int *)(param_1 + 0x58) != iVar4) {
    *(int *)(param_1 + 0x58) = iVar4;
    bVar10 = true;
  }
  uVar7 = *(uint *)(param_1 + 0xc);
  *(byte *)(param_1 + 0xb8) = (byte)uVar7 & 1;
  auVar11[0] = -(*(char *)(param_1 + 0x10) == *param_2);
  auVar11[1] = -(*(char *)(param_1 + 0x11) == param_2[1]);
  auVar11[2] = -(*(char *)(param_1 + 0x12) == param_2[2]);
  auVar11[3] = -(*(char *)(param_1 + 0x13) == param_2[3]);
  auVar11[4] = -(*(char *)(param_1 + 0x14) == param_2[4]);
  auVar11[5] = -(*(char *)(param_1 + 0x15) == param_2[5]);
  auVar11[6] = -(*(char *)(param_1 + 0x16) == param_2[6]);
  auVar11[7] = -(*(char *)(param_1 + 0x17) == param_2[7]);
  auVar11[8] = -(*(char *)(param_1 + 0x18) == param_2[8]);
  auVar11[9] = -(*(char *)(param_1 + 0x19) == param_2[9]);
  auVar11[10] = -(*(char *)(param_1 + 0x1a) == param_2[10]);
  auVar11[0xb] = -(*(char *)(param_1 + 0x1b) == param_2[0xb]);
  auVar11[0xc] = -(*(char *)(param_1 + 0x1c) == param_2[0xc]);
  auVar11[0xd] = -(*(char *)(param_1 + 0x1d) == param_2[0xd]);
  auVar11[0xe] = -(*(char *)(param_1 + 0x1e) == param_2[0xe]);
  auVar11[0xf] = -(*(char *)(param_1 + 0x1f) == param_2[0xf]);
  if ((ushort)((ushort)(SUB161(auVar11 >> 7,0) & 1) | (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar11 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar11 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar11 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar11 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar11 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar11 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar11 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar11 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar11 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar11 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar11 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar11 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar11 >> 0x77,0) & 1) << 0xe | (ushort)(auVar11[0xf] >> 7) << 0xf)
      == 0xffff) {
    if ((uVar7 & 2) != (uint)*(byte *)(param_1 + 0xba)) goto LAB_10208389;
    if (!bVar10) goto LAB_102084e2;
  }
  else {
    uVar8 = *(undefined4 *)(param_2 + 4);
    uVar1 = *(undefined4 *)(param_2 + 8);
    uVar2 = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 0x14) = uVar8;
    *(undefined4 *)(param_1 + 0x18) = uVar1;
    *(undefined4 *)(param_1 + 0x1c) = uVar2;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    uVar8 = *(undefined4 *)(param_2 + 4);
    uVar1 = *(undefined4 *)(param_2 + 8);
    uVar2 = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 0x2c) = uVar8;
    *(undefined4 *)(param_1 + 0x30) = uVar1;
    *(undefined4 *)(param_1 + 0x34) = uVar2;
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x10);
    uVar2 = _UNK_10302e3c;
    uVar1 = _UNK_10302e38;
    uVar8 = _UNK_10302e34;
    *(undefined4 *)(param_1 + 0x40) = _DAT_10302e30;
    *(undefined4 *)(param_1 + 0x44) = uVar8;
    *(undefined4 *)(param_1 + 0x48) = uVar1;
    *(undefined4 *)(param_1 + 0x4c) = uVar2;
    if ((uVar7 & 2) != (uint)*(byte *)(param_1 + 0xba)) {
LAB_10208389:
      *(char *)(param_1 + 0xba) = (char)((uVar7 & 2) >> 1);
    }
  }
  iVar6 = 1000;
  if (*(int *)(param_1 + 0x84) != 0) {
    iVar6 = *(int *)(param_1 + 0x84);
  }
  iVar9 = 0x40000;
  if (0x40000 < iVar4) {
    iVar9 = iVar4;
  }
  local_30 = (char *)(0x3e80000 / (longlong)iVar6);
  iVar4 = FUN_1020a85c();
  *(int *)(param_1 + 0xdc) = iVar4;
  if (iVar4 < 1) {
    iVar4 = FUN_101c2523(0x4b0000,local_30);
    *(int *)(param_1 + 0xdc) = iVar4;
  }
  if ((int)local_2c < 1) {
    uVar12 = (uint)*(byte *)(param_1 + 0xba);
    uVar7 = 0;
    local_2c = uVar12;
  }
  else {
    iVar4 = FUN_101c2523(iVar6 << 0x10,iVar9);
    uVar7 = local_2c;
    if ((int)local_2c <= iVar4) {
      uVar7 = FUN_101c2523(iVar6 << 0x10,iVar9);
    }
    uVar12 = 0;
    iVar4 = *(int *)(param_1 + 0xdc);
  }
  FUN_1020a86c(iVar4,param_1 + 0xe4,uVar7,uVar12,param_1 + 0xbc);
  iVar4 = FUN_1020aab8();
  if ((iVar4 < 1) || (uVar8 = 0x4b0000, *(int *)(param_1 + 0xdc) <= iVar4 * 2)) {
    uVar8 = 0x6e0000;
  }
  uVar8 = FUN_101c2523(uVar8,local_30);
  *(undefined4 *)(param_1 + 0xe0) = uVar8;
  FUN_1020a86c(uVar8,(int *)(param_1 + 0xe8),local_20,*(undefined1 *)(param_1 + 0xba),param_1 + 0xbc
              );
  bVar10 = true;
  if (*(int *)(param_1 + 0xe4) == 0) {
    bVar10 = *(int *)(param_1 + 0xe8) != 0;
  }
  *(bool *)(param_1 + 0xb9) = bVar10;
  *(undefined1 *)(param_1 + 0xec) = 0;
  FUN_1020aac8();
LAB_102084e2:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_30)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

