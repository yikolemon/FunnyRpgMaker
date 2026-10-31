/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005ec80 */

uint FUN_14005ec80(char *param_1,int param_2,undefined8 param_3,uint *param_4,undefined8 *param_5)

{
  char cVar1;
  byte bVar2;
  longlong *plVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined1 (*pauVar10) [32];
  byte *pbVar11;
  longlong lVar12;
  code *pcVar13;
  char *pcVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  char *pcVar18;
  undefined **ppuVar19;
  undefined1 auStackY_78 [32];
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14012ea80 ^ (ulonglong)auStackY_78;
  lVar12 = *(longlong *)(param_4 + 0xe);
  local_44 = 0;
  uVar7 = *param_4;
  if ((uVar7 & 1) == 0) {
    iVar6 = strncmp(param_1,"STARTFONT",9);
    uVar9 = 0xb0;
    if (iVar6 == 0) {
      *param_4 = uVar7 | 1;
      pauVar10 = FUN_14001c423(lVar12,0xc0,(int *)&local_44);
      *(undefined1 (**) [32])(param_4 + 0xc) = pauVar10;
      uVar9 = local_44;
      if (local_44 == 0) {
        *(longlong *)pauVar10[4] = lVar12;
LAB_14005f1ac:
        uVar9 = 0;
      }
    }
  }
  else {
    plVar3 = *(longlong **)(param_4 + 0xc);
    iVar6 = strncmp(param_1,"COMMENT",7);
    if (iVar6 == 0) {
      uVar9 = 0;
      if ((uVar7 >> 0xd & 1) != 0) {
        if (DAT_14012ea80 == (local_40 ^ (ulonglong)auStackY_78)) {
          uVar7 = FUN_14005f1df((longlong)plVar3,(longlong)param_1,param_2);
          return uVar7;
        }
        goto LAB_14005f1d1;
      }
    }
    else if (((uVar7 & 0x10) == 0) && (iVar6 = strncmp(param_1,"STARTPROPERTIES ",0x10), iVar6 == 0)
            ) {
      pbVar11 = (byte *)FUN_14005f2ae(param_1);
      uVar9 = FUN_14005f2d6(pbVar11);
      uVar7 = 2;
      if (2 < uVar9) {
        uVar7 = uVar9;
      }
      *(uint *)(plVar3 + 10) = uVar7;
      if (param_4[0x10] >> 2 < uVar7) {
        *(undefined4 *)(plVar3 + 10) = 0;
        uVar9 = 6;
      }
      else {
        lVar16 = FUN_14001c617(lVar12,0x18,0,uVar7,0,(int *)&local_44);
        plVar3[0xb] = lVar16;
        if (local_44 == 0) {
          puVar17 = (undefined8 *)FUN_14001e961(lVar12,0x28,(int *)&local_44);
          plVar3[0xe] = (longlong)puVar17;
          uVar9 = local_44;
          if ((local_44 == 0) &&
             (uVar9 = FUN_14001ca9f(puVar17,lVar12), local_44 = uVar9, uVar9 == 0)) {
            uVar9 = FUN_14001ca9f(plVar3 + 0x13,lVar12);
            local_44 = uVar9;
            if (uVar9 == 0) {
              ppuVar19 = &PTR_s_ADD_STYLE_NAME_1400f9010;
              lVar16 = 0;
              do {
                local_44 = 0;
                uVar9 = FUN_14001cbca(*ppuVar19,lVar16,(uint *)(plVar3 + 0x13),lVar12);
                local_44 = uVar9;
                if (uVar9 != 0) goto LAB_14005f1ae;
                lVar16 = lVar16 + 1;
                ppuVar19 = ppuVar19 + 3;
              } while (lVar16 != 0x52);
              *(byte *)param_4 = (byte)*param_4 | 0x10;
              pcVar13 = FUN_14005f345;
LAB_14005f190:
              *param_5 = pcVar13;
              goto LAB_14005f1ac;
            }
          }
        }
        else {
          *(undefined4 *)(plVar3 + 10) = 0;
          uVar9 = local_44;
        }
      }
    }
    else {
      iVar6 = strncmp(param_1,"FONTBOUNDINGBOX ",0x10);
      if (iVar6 == 0) {
        pbVar11 = (byte *)FUN_14005f2ae(param_1);
        uVar15 = FUN_14005f4b5(pbVar11);
        *(short *)(plVar3 + 1) = (short)uVar15;
        pbVar11 = (byte *)FUN_14005f2ae((char *)pbVar11);
        uVar15 = FUN_14005f4b5(pbVar11);
        *(short *)((longlong)plVar3 + 10) = (short)uVar15;
        pcVar14 = (char *)FUN_14005f2ae((char *)pbVar11);
        uVar15 = FUN_14005f52b(pcVar14);
        *(short *)((longlong)plVar3 + 0xc) = (short)uVar15;
        pcVar14 = (char *)FUN_14005f2ae(pcVar14);
        uVar15 = FUN_14005f52b(pcVar14);
        sVar4 = (short)uVar15;
        *(short *)((longlong)plVar3 + 0xe) = sVar4;
        *(short *)(plVar3 + 2) = sVar4 + *(short *)((longlong)plVar3 + 10);
        *(short *)((longlong)plVar3 + 0x12) = -sVar4;
        *(byte *)param_4 = (byte)*param_4 | 8;
        goto LAB_14005f1ac;
      }
      iVar6 = strncmp(param_1,"FONT ",5);
      if (iVar6 == 0) {
        pcVar14 = (char *)FUN_14005f2ae(param_1);
        FUN_14001c53d(lVar12,*plVar3);
        *plVar3 = 0;
        lVar12 = FUN_140021e43(lVar12,pcVar14,(int *)&local_44);
        *plVar3 = lVar12;
        uVar9 = local_44;
        if (local_44 == 0) {
          iVar6 = 0;
          do {
            while ((pcVar18 = pcVar14, cVar1 = *pcVar18, cVar1 != '\0' && (cVar1 != '-'))) {
              pcVar14 = pcVar18 + 1;
            }
            iVar6 = iVar6 + 1;
            pcVar14 = pcVar18 + (cVar1 != '\0');
          } while (iVar6 != 0xb);
          bVar2 = pcVar18[cVar1 != '\0'];
          uVar8 = 0x20;
          if (bVar2 < 99) {
            if (bVar2 != 0x43) {
              if (bVar2 == 0x4d) goto LAB_14005f0f4;
LAB_14005efe4:
              uVar8 = 8;
            }
          }
          else if (bVar2 != 99) {
            if (bVar2 != 0x6d) goto LAB_14005efe4;
LAB_14005f0f4:
            uVar8 = 0x10;
          }
          *(undefined4 *)(plVar3 + 4) = uVar8;
          *(byte *)param_4 = (byte)*param_4 | 2;
          goto LAB_14005f1ac;
        }
      }
      else {
        iVar6 = strncmp(param_1,"SIZE ",5);
        if (iVar6 == 0) {
          pbVar11 = (byte *)FUN_14005f2ae(param_1);
          uVar7 = FUN_14005f2d6(pbVar11);
          *(uint *)((longlong)plVar3 + 0x14) = uVar7;
          pbVar11 = (byte *)FUN_14005f2ae((char *)pbVar11);
          uVar7 = FUN_14005f2d6(pbVar11);
          *(uint *)(plVar3 + 3) = uVar7;
          pbVar11 = (byte *)FUN_14005f2ae((char *)pbVar11);
          uVar7 = FUN_14005f2d6(pbVar11);
          *(uint *)((longlong)plVar3 + 0x1c) = uVar7;
          pbVar11 = (byte *)FUN_14005f2ae((char *)pbVar11);
          if (*pbVar11 == 0) {
LAB_14005f1a3:
            *(undefined2 *)(plVar3 + 0xf) = 1;
          }
          else {
            uVar15 = FUN_14005f4b5(pbVar11);
            uVar5 = (ushort)uVar15;
            if (uVar5 < 5) {
              if (uVar5 < 3) {
                if (uVar5 != 2) goto LAB_14005f1a3;
                *(undefined2 *)(plVar3 + 0xf) = 2;
              }
              else {
                *(undefined2 *)(plVar3 + 0xf) = 4;
              }
            }
            else {
              *(undefined2 *)(plVar3 + 0xf) = 8;
            }
          }
          *(byte *)param_4 = (byte)*param_4 | 4;
          goto LAB_14005f1ac;
        }
        iVar6 = strncmp(param_1,"CHARS ",6);
        uVar9 = 3;
        if ((((iVar6 == 0) && (uVar9 = 0xb1, (uVar7 & 2) != 0)) && (uVar9 = 0xb2, (uVar7 & 4) != 0))
           && (uVar9 = 0xb3, (uVar7 & 8) != 0)) {
          pbVar11 = (byte *)FUN_14005f2ae(param_1);
          uVar7 = FUN_14005f2d6(pbVar11);
          *(uint *)(plVar3 + 6) = uVar7;
          param_4[1] = uVar7;
          if (param_4[0x10] / 0x14 < uVar7) {
            uVar7 = param_4[0x10] / 0x14;
            *(uint *)(plVar3 + 6) = uVar7;
            param_4[1] = uVar7;
          }
          if (uVar7 == 0) {
            *(undefined4 *)(plVar3 + 6) = 0x40;
            uVar7 = param_4[1];
          }
          uVar9 = 6;
          if (uVar7 < 0x110000) {
            lVar12 = FUN_14001c617(lVar12,0x30,0,*(uint *)(plVar3 + 6),0,(int *)&local_44);
            plVar3[7] = lVar12;
            uVar9 = local_44;
            if (local_44 == 0) {
              *(byte *)param_4 = (byte)*param_4 | 0x20;
              pcVar13 = FUN_14005f5c0;
              goto LAB_14005f190;
            }
          }
        }
      }
    }
  }
LAB_14005f1ae:
  if (DAT_14012ea80 == (local_40 ^ (ulonglong)auStackY_78)) {
    return uVar9;
  }
LAB_14005f1d1:
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_40 ^ (ulonglong)auStackY_78);
}

