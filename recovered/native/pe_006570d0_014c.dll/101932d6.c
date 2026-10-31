/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101932d6 */

char * FUN_101932d6(undefined4 param_1,float param_2,char *param_3,char *param_4,float param_5,
                   uint param_6)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float local_34;
  float local_30;
  char *local_2c;
  uint *local_28;
  float local_24;
  float local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_34;
  puVar1 = (uint *)FUN_10190228(param_2,0xbf800000);
  pcVar5 = param_3;
  if (param_3 < param_4) {
    local_24 = param_5 / (param_2 / (float)puVar1[4]);
    local_1c = (param_6 & 2) >> 1;
    fVar8 = 0.0;
    local_2c = param_3;
    fVar7 = 0.0;
    local_30 = 0.0;
    local_34 = 0.0;
    uVar6 = 2;
    local_28 = puVar1;
    do {
      local_18 = (uint)*pcVar5;
      local_20 = fVar8;
      if ((int)local_18 < 0) {
        iVar3 = FUN_100f90d5(&local_18,pcVar5,param_4);
        pcVar4 = pcVar5 + iVar3;
        puVar1 = local_28;
      }
      else {
        pcVar4 = pcVar5 + 1;
      }
      if (local_18 < 0x20) {
        uVar2 = uVar6;
        fVar8 = local_20;
        if (local_18 != 0xd) {
          if (local_18 != 10) goto LAB_101933ad;
          goto LAB_101934fa;
        }
      }
      else {
LAB_101933ad:
        if ((*puVar1 <= local_18) || (fVar7 = *(float *)(puVar1[2] + local_18 * 4), fVar7 < 0.0)) {
          FUN_1019351f();
        }
        if (local_18 < 0x80) {
          puVar1 = (uint *)(&DAT_103a3234 + (local_18 >> 4) * 4);
LAB_101933fe:
          uVar2 = *puVar1 >> ((char)local_18 * '\x02' & 0x1fU) & 3;
          if (uVar2 != 0) goto LAB_1019340a;
          fVar8 = local_20;
          if (uVar6 != 0 && (char)local_1c == '\0') {
            local_34 = local_34 + local_20;
            fVar8 = 0.0;
            local_2c = pcVar5;
          }
          local_30 = local_30 + fVar7;
          uVar2 = 0;
        }
        else {
          uVar2 = 2;
          puVar1 = &DAT_103a3254;
          if ((local_18 & 0xfffffff0) == 0x3000) goto LAB_101933fe;
LAB_1019340a:
          fVar8 = local_20;
          if (uVar2 == 1 || uVar6 != 1) {
            if (((param_6 & 2) != 0) && (uVar6 == 0)) goto LAB_10193439;
          }
          else if (9 < local_18 - 0x30) {
LAB_10193439:
            local_34 = local_34 + local_30 + local_20;
            local_30 = 0.0;
            fVar8 = 0.0;
            local_2c = pcVar5;
          }
          fVar8 = fVar8 + fVar7;
        }
        fVar7 = local_30 + fVar8;
        puVar1 = local_28;
        if (local_24 < local_34 + fVar7) {
          pcVar4 = pcVar5;
          pcVar5 = local_2c;
          if (fVar7 <= local_24) goto LAB_101934fa;
          break;
        }
      }
      uVar6 = uVar2;
      pcVar5 = pcVar4;
    } while (pcVar4 < param_4);
    pcVar5 = pcVar4;
    if (pcVar4 == param_3) {
      iVar3 = FUN_100fab07(param_3,param_4);
      pcVar5 = param_3 + iVar3;
    }
  }
LAB_101934fa:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_34)) {
    return pcVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

