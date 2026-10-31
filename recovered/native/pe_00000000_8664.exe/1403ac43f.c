/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403ac43f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_1403ac43f(undefined8 param_1,undefined8 param_2,char *param_3,char *param_4,float param_5
                    ,uint param_6)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  ulonglong uVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  char *pcVar10;
  float fVar11;
  float in_XMM1_Da;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_c8 [36];
  uint local_a4;
  ulonglong local_a0;
  
  local_a0 = ram0x000140613b10 ^ (ulonglong)auStack_c8;
  puVar3 = (uint *)FUN_1403a9044(param_1,param_2,DAT_1404ccdb0);
  pcVar8 = param_3;
  if (param_3 < param_4) {
    param_5 = param_5 / (in_XMM1_Da / (float)puVar3[5]);
    uVar9 = 2;
    fVar14 = 0.0;
    fVar13 = 0.0;
    fVar12 = 0.0;
    pcVar7 = param_3;
    do {
      local_a4 = (uint)*pcVar8;
      if (*pcVar8 < '\0') {
        iVar2 = FUN_14030eb69(&local_a4,pcVar8,param_4);
        pcVar10 = pcVar8 + iVar2;
      }
      else {
        pcVar10 = pcVar8 + 1;
      }
      uVar6 = (ulonglong)local_a4;
      if (local_a4 < 0x20) {
        if (local_a4 != 0xd) {
          if (local_a4 != 10) goto LAB_1403ac51d;
          goto LAB_1403ac63b;
        }
      }
      else {
LAB_1403ac51d:
        if ((*puVar3 <= local_a4) ||
           (fVar11 = *(float *)(*(longlong *)(puVar3 + 2) + uVar6 * 4), fVar11 < 0.0)) {
          fVar11 = (float)thunk_FUN_1403ac14c(puVar3);
          uVar6 = (ulonglong)local_a4;
        }
        uVar5 = (uint)uVar6;
        if (uVar5 < 0x80) {
          puVar4 = (uint *)(&DAT_1406303a0 + (uVar6 >> 4) * 4);
LAB_1403ac570:
          uVar1 = *puVar4 >> ((char)uVar6 * '\x02' & 0x1fU) & 3;
          if (uVar1 != 0) goto LAB_1403ac57c;
          if (uVar9 != 0 && (char)((param_6 & 2) >> 1) == '\0') {
            fVar12 = fVar12 + fVar14;
            fVar14 = 0.0;
            pcVar7 = pcVar8;
          }
          fVar13 = fVar13 + fVar11;
          uVar9 = 0;
        }
        else {
          uVar1 = 2;
          puVar4 = &DAT_1406303c0;
          if ((uVar5 & 0xfffffff0) == 0x3000) goto LAB_1403ac570;
LAB_1403ac57c:
          if (uVar1 == 1 || uVar9 != 1) {
            if (((param_6 & 2) != 0) && (uVar9 == 0)) goto LAB_1403ac5aa;
          }
          else if (9 < uVar5 - 0x30) {
LAB_1403ac5aa:
            fVar12 = fVar12 + fVar13 + fVar14;
            fVar13 = 0.0;
            fVar14 = 0.0;
            pcVar7 = pcVar8;
          }
          fVar14 = fVar14 + fVar11;
          uVar9 = uVar1;
        }
        if (param_5 < fVar12 + fVar13 + fVar14) {
          pcVar10 = pcVar8;
          pcVar8 = pcVar7;
          if (fVar13 + fVar14 <= param_5) goto LAB_1403ac63b;
          break;
        }
      }
      pcVar8 = pcVar10;
    } while (pcVar10 < param_4);
    pcVar8 = pcVar10;
    if (pcVar10 == param_3) {
      iVar2 = FUN_140310675(param_3,param_4);
      pcVar8 = param_3 + iVar2;
    }
  }
LAB_1403ac63b:
  if (ram0x000140613b10 == (local_a0 ^ (ulonglong)auStack_c8)) {
    return pcVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_a0 ^ (ulonglong)auStack_c8);
}

