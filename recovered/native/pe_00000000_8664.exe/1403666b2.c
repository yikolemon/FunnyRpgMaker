/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403666b2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403666b2(undefined8 param_1,float *param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,int param_7,byte param_8,byte *param_9,
                  undefined1 *param_10)

{
  float *pfVar1;
  bool bVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  float fVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  float fVar11;
  undefined4 *puVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 local_130;
  float *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110 [20];
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8 [2];
  ulonglong local_a0;
  
  lVar3 = DAT_14062a630;
  local_a0 = ram0x000140613b10 ^ (ulonglong)auStack_158;
  local_118 = FUN_140313264(param_5,0);
  local_138 = CONCAT44(local_138._4_4_,0xbf800000);
  FUN_14031389a(local_a8,param_5,local_118,0);
  if (param_9 != (byte *)0x0) {
    *param_9 = 0;
  }
  if (param_10 != (undefined1 *)0x0) {
    *param_10 = 0;
  }
  fVar14 = *param_2;
  if (param_2[2] - fVar14 <= DAT_1404bda40) goto LAB_140366a85;
  fVar11 = (float)param_4;
  fVar6 = (float)((ulonglong)param_4 >> 0x20);
  local_ac = param_2[3];
  fVar18 = param_2[2] - fVar11;
  local_b4 = param_2[1] + fVar6;
  local_b8 = fVar14 + fVar11;
  fVar16 = fVar18;
  fVar17 = local_b4;
  if (param_10 != (undefined1 *)0x0) {
    *param_10 = fVar18 < local_b8 + local_a8[0];
    fVar14 = *param_2;
    fVar17 = fVar6 + param_2[1];
    fVar16 = param_2[2] - fVar11;
  }
  fVar6 = *(float *)(lVar3 + 0x1320);
  local_120 = param_1;
  local_b0 = fVar18;
  fVar14 = (float)FUN_140313933(fVar14,fVar16 - fVar6);
  bVar13 = true;
  if ((*(int *)(lVar3 + 0x1664) != param_6) && (*(int *)(lVar3 + 0x1664) != param_7)) {
    bVar13 = *(int *)(lVar3 + 0x167c) == param_7 || *(int *)(lVar3 + 0x167c) == param_6;
  }
  local_c0 = fVar14;
  local_bc = fVar17;
  if (param_7 == 0) {
    bVar2 = false;
  }
  else {
    if (param_8 == 0) {
      fVar16 = *(float *)(lVar3 + 0xe60);
    }
    else {
      fVar16 = *(float *)(lVar3 + 0xe5c);
    }
    bVar2 = fVar16 < 0.0;
    if ((bool)(0.0 <= fVar16 & bVar13)) {
      fVar16 = param_2[2];
      fVar11 = *param_2;
      fVar15 = (float)FUN_140313933(fVar6);
      bVar2 = fVar15 <= fVar16 - fVar11;
    }
  }
  if (((param_3 & 1) == 0) || (param_2[2] < fVar6 + fVar14)) {
    if (bVar2) goto LAB_140366918;
    bVar4 = 0;
    uVar10 = local_120;
  }
  else {
    if ((bool)(bVar13 & bVar2)) {
LAB_140366918:
      puVar9 = (undefined4 *)(lVar3 + 0x1fe0);
      puVar12 = local_110;
      for (lVar8 = 0x14; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar12 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar12 = puVar12 + 1;
      }
      bVar4 = FUN_140345b57(param_7,&local_c0);
      puVar9 = local_110;
      puVar12 = (undefined4 *)(lVar3 + 0x1fe0);
      for (lVar8 = 0x14; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar12 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar12 = puVar12 + 1;
      }
      if (bVar13 && (char)((param_3 & 4) >> 2) == '\0') {
        bVar5 = FUN_1403198a6(2,0);
        bVar4 = bVar4 | bVar5;
      }
      pfVar1 = (float *)(lVar3 + 0xe5c + (ulonglong)(param_8 ^ 1) * 4);
      uVar10 = local_120;
      if (0.0 < *pfVar1 || *pfVar1 == 0.0) {
        local_b0 = fVar18 - fVar6;
        goto LAB_140366a37;
      }
    }
    else {
      fVar16 = DAT_1404ecffc * fVar6;
      uVar7 = FUN_14031276b(0x3a,DAT_1404bda40);
      uVar10 = local_120;
      FUN_1403ace06(local_120,CONCAT44(fVar17 + fVar16,fVar16 + fVar14),uVar7);
      bVar4 = 0;
    }
    local_b0 = fVar18 + fVar6 * _DAT_1404f063c;
  }
LAB_140366a37:
  FUN_14032e77b(".",
                "s_BordersInnerV\n | ImGuiTableFlags_BordersOuterV\n | ImGuiTableFlags_BordersInnerH\n | ImGuiTableFlags_BordersOuterH"
               );
  local_128 = local_a8;
  local_130 = local_118;
  local_138 = param_5;
  FUN_1403139f7(uVar10,&local_b8,&local_b0);
  if (param_9 != (byte *)0x0) {
    *param_9 = bVar4;
  }
LAB_140366a85:
  if (ram0x000140613b10 == (local_a0 ^ (ulonglong)auStack_158)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_a0 ^ (ulonglong)auStack_158);
}

