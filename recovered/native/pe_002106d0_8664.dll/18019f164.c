/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019f164 */

undefined8 *
FUN_18019f164(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
             undefined8 *param_9,undefined4 *param_10,undefined4 *param_11)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 *puVar17;
  undefined1 auStack_78 [32];
  undefined4 local_58 [12];
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_78;
  uVar12 = *param_2;
  uVar13 = param_2[1];
  uVar14 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar14;
  *param_1 = uVar12;
  param_1[1] = uVar13;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined1 *)((longlong)param_1 + 0x24) = param_5;
  param_1[5] = param_4;
  uVar12 = *param_6;
  uVar13 = param_6[1];
  uVar14 = param_6[2];
  uVar15 = param_6[3];
  uVar16 = param_6[5];
  param_1[10] = param_6[4];
  param_1[0xb] = uVar16;
  param_1[8] = uVar14;
  param_1[9] = uVar15;
  param_1[6] = uVar12;
  param_1[7] = uVar13;
  uVar12 = *param_7;
  uVar13 = param_7[1];
  uVar14 = param_7[2];
  uVar15 = param_7[3];
  uVar16 = param_7[5];
  param_1[0x10] = param_7[4];
  param_1[0x11] = uVar16;
  param_1[0xe] = uVar14;
  param_1[0xf] = uVar15;
  param_1[0xc] = uVar12;
  param_1[0xd] = uVar13;
  uVar12 = *param_8;
  uVar13 = param_8[1];
  uVar14 = param_8[2];
  uVar15 = param_8[3];
  uVar16 = param_8[5];
  param_1[0x16] = param_8[4];
  param_1[0x17] = uVar16;
  param_1[0x14] = uVar14;
  param_1[0x15] = uVar15;
  param_1[0x12] = uVar12;
  param_1[0x13] = uVar13;
  uVar12 = *param_9;
  uVar13 = param_9[1];
  uVar14 = param_9[2];
  uVar15 = param_9[3];
  uVar16 = param_9[5];
  param_1[0x1c] = param_9[4];
  param_1[0x1d] = uVar16;
  param_1[0x1a] = uVar14;
  param_1[0x1b] = uVar15;
  param_1[0x18] = uVar12;
  param_1[0x19] = uVar13;
  uVar1 = *param_10;
  uVar2 = param_10[1];
  uVar3 = param_10[2];
  uVar4 = param_10[3];
  uVar12 = *(undefined8 *)(param_10 + 4);
  uVar13 = *(undefined8 *)(param_10 + 6);
  uVar14 = *(undefined8 *)(param_10 + 10);
  param_1[0x22] = *(undefined8 *)(param_10 + 8);
  param_1[0x23] = uVar14;
  param_1[0x20] = uVar12;
  param_1[0x21] = uVar13;
  *(undefined4 *)(param_1 + 0x1e) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0xf4) = uVar2;
  *(undefined4 *)(param_1 + 0x1f) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xfc) = uVar4;
  FUN_1801d32da(local_58,(int)DAT_180328088,(int)DAT_180328090);
  puVar17 = local_58;
  if (*(char *)(param_11 + 0xc) != '\0') {
    puVar17 = param_11;
  }
  uVar1 = puVar17[1];
  uVar2 = puVar17[2];
  uVar3 = puVar17[3];
  uVar4 = puVar17[4];
  uVar5 = puVar17[5];
  uVar6 = puVar17[6];
  uVar7 = puVar17[7];
  uVar8 = puVar17[8];
  uVar9 = puVar17[9];
  uVar10 = puVar17[10];
  uVar11 = puVar17[0xb];
  *(undefined4 *)(param_1 + 0x24) = *puVar17;
  *(undefined4 *)((longlong)param_1 + 0x124) = uVar1;
  *(undefined4 *)(param_1 + 0x25) = uVar2;
  *(undefined4 *)((longlong)param_1 + 300) = uVar3;
  *(undefined4 *)(param_1 + 0x26) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x134) = uVar5;
  *(undefined4 *)(param_1 + 0x27) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x13c) = uVar7;
  *(undefined4 *)(param_1 + 0x28) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x144) = uVar9;
  *(undefined4 *)(param_1 + 0x29) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x14c) = uVar11;
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_78)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_78);
}

