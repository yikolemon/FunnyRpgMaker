/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140160d30 */

ulonglong FUN_140160d30(char *param_1,undefined4 param_2,undefined8 param_3,uint *param_4,
                       undefined8 *param_5)

{
  char cVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined2 uVar4;
  short sVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  code *pcVar15;
  char *pcVar16;
  char *pcVar17;
  undefined **ppuVar18;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  uint *local_50;
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  uVar14 = *(undefined8 *)(param_4 + 0xe);
  local_44 = 0;
  uVar8 = *param_4;
  if ((uVar8 & 1) == 0) {
    iVar7 = strncmp(param_1,"STARTFONT",9);
    uVar11 = 0xb0;
    if (iVar7 == 0) {
      *param_4 = uVar8 | 1;
      lVar12 = FUN_140128a1f(uVar14,0xc0,&local_44);
      *(longlong *)(param_4 + 0xc) = lVar12;
      uVar11 = (ulonglong)local_44;
      if (local_44 == 0) {
        *(undefined8 *)(lVar12 + 0x80) = uVar14;
LAB_14016125c:
        uVar11 = 0;
      }
    }
  }
  else {
    puVar3 = *(undefined8 **)(param_4 + 0xc);
    iVar7 = strncmp(param_1,"COMMENT",7);
    if (iVar7 == 0) {
      uVar11 = 0;
      if ((uVar8 >> 0xd & 1) != 0) {
        if (DAT_140f17b40 == (local_40 ^ (ulonglong)auStack_78)) {
          uVar11 = FUN_14016128f(puVar3,param_1,param_2);
          return uVar11;
        }
        goto LAB_140161281;
      }
    }
    else if (((uVar8 & 0x10) == 0) && (iVar7 = strncmp(param_1,"STARTPROPERTIES ",0x10), iVar7 == 0)
            ) {
      uVar13 = FUN_14016135e(param_1);
      uVar9 = FUN_140161386(uVar13);
      uVar8 = 2;
      if (2 < uVar9) {
        uVar8 = uVar9;
      }
      *(uint *)(puVar3 + 10) = uVar8;
      if (param_4[0x10] >> 2 < uVar8) {
        *(undefined4 *)(puVar3 + 10) = 0;
        uVar11 = 6;
      }
      else {
        local_50 = &local_44;
        local_58 = 0;
        uVar13 = FUN_140128c13(uVar14,0x18,0);
        puVar3[0xb] = uVar13;
        uVar11 = (ulonglong)local_44;
        if (local_44 == 0) {
          uVar13 = FUN_14012afda(uVar14,0x28,&local_44);
          puVar3[0xe] = uVar13;
          uVar11 = (ulonglong)local_44;
          if (local_44 == 0) {
            uVar11 = FUN_14012909b(uVar13,uVar14);
            local_44 = (uint)uVar11;
            if (local_44 == 0) {
              uVar11 = FUN_14012909b(puVar3 + 0x13,uVar14);
              local_44 = (uint)uVar11;
              if (local_44 == 0) {
                ppuVar18 = &PTR_s_ADD_STYLE_NAME_140ea0250;
                lVar12 = 0;
                do {
                  local_44 = 0;
                  uVar11 = FUN_1401291c6(*ppuVar18,lVar12,puVar3 + 0x13,uVar14);
                  local_44 = (uint)uVar11;
                  if (local_44 != 0) goto LAB_14016125e;
                  lVar12 = lVar12 + 1;
                  ppuVar18 = ppuVar18 + 3;
                } while (lVar12 != 0x52);
                *(byte *)param_4 = (byte)*param_4 | 0x10;
                pcVar15 = FUN_1401613f5;
LAB_140161240:
                *param_5 = pcVar15;
                goto LAB_14016125c;
              }
            }
          }
        }
        else {
          *(undefined4 *)(puVar3 + 10) = 0;
        }
      }
    }
    else {
      iVar7 = strncmp(param_1,"FONTBOUNDINGBOX ",0x10);
      if (iVar7 == 0) {
        uVar14 = FUN_14016135e(param_1);
        uVar4 = FUN_140161565(uVar14);
        *(undefined2 *)(puVar3 + 1) = uVar4;
        uVar14 = FUN_14016135e(uVar14);
        uVar4 = FUN_140161565(uVar14);
        *(undefined2 *)((longlong)puVar3 + 10) = uVar4;
        uVar14 = FUN_14016135e(uVar14);
        uVar4 = FUN_1401615db(uVar14);
        *(undefined2 *)((longlong)puVar3 + 0xc) = uVar4;
        uVar14 = FUN_14016135e(uVar14);
        sVar5 = FUN_1401615db(uVar14);
        *(short *)((longlong)puVar3 + 0xe) = sVar5;
        *(short *)(puVar3 + 2) = sVar5 + *(short *)((longlong)puVar3 + 10);
        *(short *)((longlong)puVar3 + 0x12) = -sVar5;
        *(byte *)param_4 = (byte)*param_4 | 8;
        goto LAB_14016125c;
      }
      iVar7 = strncmp(param_1,"FONT ",5);
      if (iVar7 == 0) {
        pcVar16 = (char *)FUN_14016135e(param_1);
        FUN_140128b39(uVar14,*puVar3);
        *puVar3 = 0;
        uVar14 = FUN_14012ea14(uVar14,pcVar16,&local_44);
        *puVar3 = uVar14;
        uVar11 = (ulonglong)local_44;
        if (local_44 == 0) {
          iVar7 = 0;
          do {
            while ((pcVar17 = pcVar16, cVar1 = *pcVar17, cVar1 != '\0' && (cVar1 != '-'))) {
              pcVar16 = pcVar17 + 1;
            }
            iVar7 = iVar7 + 1;
            pcVar16 = pcVar17 + (cVar1 != '\0');
          } while (iVar7 != 0xb);
          bVar2 = pcVar17[cVar1 != '\0'];
          uVar10 = 0x20;
          if (bVar2 < 99) {
            if (bVar2 != 0x43) {
              if (bVar2 == 0x4d) goto LAB_1401611a4;
LAB_140161094:
              uVar10 = 8;
            }
          }
          else if (bVar2 != 99) {
            if (bVar2 != 0x6d) goto LAB_140161094;
LAB_1401611a4:
            uVar10 = 0x10;
          }
          *(undefined4 *)(puVar3 + 4) = uVar10;
          *(byte *)param_4 = (byte)*param_4 | 2;
          goto LAB_14016125c;
        }
      }
      else {
        iVar7 = strncmp(param_1,"SIZE ",5);
        if (iVar7 == 0) {
          uVar14 = FUN_14016135e(param_1);
          uVar10 = FUN_140161386(uVar14);
          *(undefined4 *)((longlong)puVar3 + 0x14) = uVar10;
          uVar14 = FUN_14016135e(uVar14);
          uVar10 = FUN_140161386(uVar14);
          *(undefined4 *)(puVar3 + 3) = uVar10;
          uVar14 = FUN_14016135e(uVar14);
          uVar10 = FUN_140161386(uVar14);
          *(undefined4 *)((longlong)puVar3 + 0x1c) = uVar10;
          pcVar16 = (char *)FUN_14016135e(uVar14);
          if (*pcVar16 == '\0') {
LAB_140161253:
            *(undefined2 *)(puVar3 + 0xf) = 1;
          }
          else {
            uVar6 = FUN_140161565(pcVar16);
            if (uVar6 < 5) {
              if (uVar6 < 3) {
                if (uVar6 != 2) goto LAB_140161253;
                *(undefined2 *)(puVar3 + 0xf) = 2;
              }
              else {
                *(undefined2 *)(puVar3 + 0xf) = 4;
              }
            }
            else {
              *(undefined2 *)(puVar3 + 0xf) = 8;
            }
          }
          *(byte *)param_4 = (byte)*param_4 | 4;
          goto LAB_14016125c;
        }
        iVar7 = strncmp(param_1,"CHARS ",6);
        uVar11 = 3;
        if ((((iVar7 == 0) && (uVar11 = 0xb1, (uVar8 & 2) != 0)) &&
            (uVar11 = 0xb2, (uVar8 & 4) != 0)) && (uVar11 = 0xb3, (uVar8 & 8) != 0)) {
          uVar13 = FUN_14016135e(param_1);
          uVar8 = FUN_140161386(uVar13);
          *(uint *)(puVar3 + 6) = uVar8;
          param_4[1] = uVar8;
          if (param_4[0x10] / 0x14 < uVar8) {
            uVar8 = param_4[0x10] / 0x14;
            *(uint *)(puVar3 + 6) = uVar8;
            param_4[1] = uVar8;
          }
          if (uVar8 == 0) {
            *(undefined4 *)(puVar3 + 6) = 0x40;
            uVar8 = param_4[1];
          }
          uVar11 = 6;
          if (uVar8 < 0x110000) {
            local_50 = &local_44;
            local_58 = 0;
            uVar14 = FUN_140128c13(uVar14,0x30,0,*(undefined4 *)(puVar3 + 6));
            puVar3[7] = uVar14;
            uVar11 = (ulonglong)local_44;
            if (local_44 == 0) {
              *(byte *)param_4 = (byte)*param_4 | 0x20;
              pcVar15 = FUN_140161670;
              goto LAB_140161240;
            }
          }
        }
      }
    }
  }
LAB_14016125e:
  if (DAT_140f17b40 == (local_40 ^ (ulonglong)auStack_78)) {
    return uVar11;
  }
LAB_140161281:
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_40 ^ (ulonglong)auStack_78);
}

