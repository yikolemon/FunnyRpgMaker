/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404af6fc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404af6fc(undefined8 *param_1,uint param_2,byte *param_3,ulonglong param_4,
                  undefined1 *param_5)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  char *pcVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined2 local_c8 [2];
  undefined4 local_c4;
  uint local_c0 [2];
  byte *local_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  int local_9c;
  byte *local_98;
  longlong local_90;
  undefined8 local_88;
  undefined1 *local_80;
  byte *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  byte local_50;
  byte local_4f;
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_60 = 0xfffffffffffffffe;
  local_40 = ram0x000140613b10 ^ (ulonglong)auStack_108;
  local_b0 = param_5;
  lVar17 = (longlong)(int)param_2 >> 6;
  uVar6 = (ulonglong)(param_2 & 0x3f);
  local_70 = *(undefined8 *)((&DAT_1406328d0)[lVar17] + 0x28 + uVar6 * 0x48);
  local_b8 = param_3 + (param_4 & 0xffffffff);
  local_98 = param_3;
  local_90 = lVar17;
  local_a0 = (*(code *)s_GetFinalPathNameByHandleW_14059deb2._6_8_)();
  uVar13 = 0;
  if (local_b0[0x28] == '\0') {
    FUN_140484290(local_b0);
  }
  local_9c = *(int *)(*(longlong *)(local_b0 + 0x18) + 0xc);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar8 = uVar13;
  lVar14 = lVar17;
  if (local_98 < param_3 + (param_4 & 0xffffffff)) {
    do {
      local_68 = lVar14;
      local_c8[0] = CONCAT11(local_c8[0]._1_1_,*param_3);
      local_c4 = 0;
      cVar3 = '\x01';
      if (local_9c == 0xfde9) {
        pcVar7 = (char *)(uVar6 * 0x48 + 0x3e + (&DAT_1406328d0)[local_68]);
        uVar8 = uVar13;
        uVar18 = uVar13;
        do {
          uVar9 = (uint)uVar8;
          if (*pcVar7 == '\0') break;
          uVar9 = uVar9 + 1;
          uVar8 = (ulonglong)uVar9;
          uVar18 = uVar18 + 1;
          pcVar7 = pcVar7 + 1;
        } while ((longlong)uVar18 < 5);
        if ((longlong)uVar18 < 1) {
          cVar1 = (&DAT_140627c40)[*param_3];
          iVar4 = cVar1 + 1;
          lVar17 = (longlong)local_b8 - (longlong)param_3;
          if (lVar17 < iVar4) {
            uVar8 = uVar13;
            if (0 < lVar17) {
              do {
                *(byte *)(uVar8 + uVar6 * 0x48 + 0x3e + (&DAT_1406328d0)[local_90]) = param_3[uVar8]
                ;
                uVar9 = (int)uVar13 + 1;
                uVar13 = (ulonglong)uVar9;
                uVar8 = uVar8 + 1;
              } while ((int)uVar9 < lVar17);
            }
            *(int *)((longlong)param_1 + 4) = *(int *)((longlong)param_1 + 4) + (int)lVar17;
            break;
          }
          local_a8 = 0;
          cVar3 = (iVar4 == 4) + '\x01';
          local_e8 = local_b0;
          local_78 = param_3;
          lVar17 = FUN_1404a7a5c(&local_c4,&local_78,cVar3,&local_a8);
          if (lVar17 == -1) break;
          pbVar12 = param_3 + cVar1;
          lVar17 = local_90;
        }
        else {
          cVar3 = (&DAT_140627c40)[*(byte *)((&DAT_1406328d0)[lVar17] + 0x3e + uVar6 * 0x48)];
          iVar4 = (cVar3 + 1) - uVar9;
          local_a8 = CONCAT44(local_a8._4_4_,iVar4);
          lVar14 = (longlong)local_b8 - (longlong)param_3;
          lVar16 = (longlong)iVar4;
          if (lVar14 < lVar16) {
            if (0 < lVar14) {
              uVar8 = uVar18;
              do {
                *(byte *)(uVar8 + uVar6 * 0x48 + 0x3e + (&DAT_1406328d0)[lVar17]) =
                     param_3[uVar8 - uVar18];
                uVar9 = (int)uVar13 + 1;
                uVar13 = (ulonglong)uVar9;
                uVar8 = uVar8 + 1;
              } while ((int)uVar9 < lVar14);
            }
            *(int *)((longlong)param_1 + 4) = *(int *)((longlong)param_1 + 4) + (int)lVar14;
            break;
          }
          puVar11 = (undefined1 *)(uVar6 * 0x48 + 0x3e + (&DAT_1406328d0)[local_68]);
          uVar8 = uVar13;
          do {
            local_58[uVar8] = *puVar11;
            uVar8 = uVar8 + 1;
            puVar11 = puVar11 + 1;
          } while ((longlong)uVar8 < (longlong)uVar18);
          uVar8 = uVar13;
          if (0 < lVar16) {
            FUN_1404b97c0(local_58 + uVar18,param_3,lVar16);
          }
          do {
            *(undefined1 *)(uVar8 + uVar6 * 0x48 + 0x3e + (&DAT_1406328d0)[lVar17]) = 0;
            uVar8 = uVar8 + 1;
          } while ((longlong)uVar8 < (longlong)uVar18);
          local_88 = 0;
          local_80 = local_58;
          cVar3 = (cVar3 + 1 == 4) + '\x01';
          local_e8 = local_b0;
          lVar14 = FUN_1404a7a5c(&local_c4,&local_80,cVar3,&local_88);
          if (lVar14 == -1) break;
          pbVar12 = param_3 + ((int)local_a8 + -1);
        }
      }
      else {
        lVar14 = (&DAT_1406328d0)[lVar17];
        bVar2 = *(byte *)(lVar14 + 0x3d + uVar6 * 0x48);
        if ((bVar2 & 4) == 0) {
          if (*(short *)(**(longlong **)(local_b0 + 0x18) + (ulonglong)*param_3 * 2) < 0) {
            pbVar12 = param_3 + 1;
            if (pbVar12 < local_b8) {
              iVar4 = FUN_1404a7600(&local_c4,param_3,2,local_b0);
              if (iVar4 != -1) goto LAB_1404afa04;
            }
            else {
              *(byte *)(lVar14 + 0x3e + uVar6 * 0x48) = *param_3;
              pbVar12 = (byte *)((&DAT_1406328d0)[lVar17] + 0x3d + uVar6 * 0x48);
              *pbVar12 = *pbVar12 | 4;
              *(int *)((longlong)param_1 + 4) = (int)uVar8 + 1;
            }
            break;
          }
          uVar15 = 1;
          pbVar12 = param_3;
        }
        else {
          local_50 = *(byte *)(lVar14 + 0x3e + uVar6 * 0x48);
          local_4f = *param_3;
          *(byte *)(lVar14 + 0x3d + uVar6 * 0x48) = bVar2 & 0xfb;
          uVar15 = 2;
          pbVar12 = &local_50;
        }
        iVar4 = FUN_1404a7600(&local_c4,pbVar12,uVar15,local_b0);
        pbVar12 = param_3;
        if (iVar4 == -1) break;
      }
LAB_1404afa04:
      param_3 = pbVar12 + 1;
      local_d0 = 0;
      local_d8 = 0;
      local_e0 = 5;
      local_e8 = local_48;
      uVar9 = FUN_1404a2460(local_a0,0,&local_c4,cVar3);
      uVar15 = local_70;
      if (uVar9 == 0) break;
      local_c0[0] = 0;
      local_e8 = (undefined1 *)0x0;
      iVar4 = (*(code *)s_MapViewOfFile_14059e29e._2_8_)(local_70,local_48,uVar9,local_c0);
      if (iVar4 == 0) {
LAB_1404afb5d:
        uVar5 = (*_DAT_14059df60)();
        *(undefined4 *)param_1 = uVar5;
        break;
      }
      uVar10 = (*(int *)(param_1 + 1) - (int)local_98) + (int)param_3;
      *(uint *)((longlong)param_1 + 4) = uVar10;
      if (local_c0[0] < uVar9) break;
      if ((char)local_c8[0] == '\n') {
        local_c8[0] = 0xd;
        local_e8 = (undefined1 *)0x0;
        iVar4 = (*(code *)s_MapViewOfFile_14059e29e._2_8_)(uVar15,local_c8,1,local_c0);
        if (iVar4 == 0) goto LAB_1404afb5d;
        if (local_c0[0] == 0) break;
        *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
        *(int *)((longlong)param_1 + 4) = *(int *)((longlong)param_1 + 4) + 1;
        uVar10 = *(uint *)((longlong)param_1 + 4);
      }
      uVar8 = (ulonglong)uVar10;
      lVar14 = local_68;
    } while (param_3 < local_b8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_40 ^ (ulonglong)auStack_108);
}

