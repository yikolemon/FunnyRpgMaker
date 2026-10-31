/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404b07a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1404b07a0(uint param_1,short *param_2,ulonglong param_3)

{
  short *psVar1;
  byte *pbVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  short *psVar10;
  undefined8 uVar11;
  short *psVar12;
  short sVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  short *psVar17;
  uint local_res20 [2];
  undefined4 local_68 [2];
  undefined8 local_60;
  ulonglong local_58;
  ulonglong local_50;
  short *local_48;
  
  if (param_1 == 0xfffffffe) {
    puVar8 = (undefined4 *)FUN_14048fb60();
    *puVar8 = 0;
    puVar8 = (undefined4 *)FUN_14048fb3c();
    *puVar8 = 9;
    return -1;
  }
  psVar10 = (short *)0x0;
  iVar7 = 0;
  if ((-1 < (int)param_1) && (param_1 < DAT_140632cd0)) {
    uVar9 = (ulonglong)(param_1 & 0x3f);
    local_50 = 1;
    local_58 = (ulonglong)(longlong)(int)param_1 >> 6;
    lVar15 = (&DAT_1406328d0)[local_58];
    if ((*(byte *)(lVar15 + 0x38 + uVar9 * 0x48) & 1) != 0) {
      uVar16 = (uint)param_3;
      if (uVar16 < 0x80000000) {
        if ((uVar16 == 0) || ((*(byte *)(lVar15 + 0x38 + uVar9 * 0x48) & 2) != 0)) {
          return 0;
        }
        if (param_2 != (short *)0x0) {
          local_60 = *(undefined8 *)(lVar15 + 0x28 + uVar9 * 0x48);
          cVar3 = *(char *)(lVar15 + 0x39 + uVar9 * 0x48);
          if (cVar3 == '\x01') {
            if ((~(byte)param_3 & 1) == 0) goto LAB_1404b089a;
            uVar14 = param_3 >> 1 & 0x7fffffff;
            if ((uint)uVar14 < 4) {
              uVar14 = 4;
            }
            psVar10 = (short *)_malloc_base(uVar14);
            FUN_1404a2310(0);
            FUN_1404a2310(0);
            if (psVar10 != (short *)0x0) {
              uVar11 = FUN_1404a8b34(param_1,0,1);
              *(undefined8 *)((&DAT_1406328d0)[local_58] + 0x30 + uVar9 * 0x48) = uVar11;
              local_48 = psVar10;
              goto LAB_1404b093c;
            }
            puVar8 = (undefined4 *)FUN_14048fb3c();
            *puVar8 = 0xc;
            puVar8 = (undefined4 *)FUN_14048fb60();
            *puVar8 = 8;
          }
          else if ((cVar3 == '\x02') && ((~(byte)param_3 & 1) == 0)) {
LAB_1404b089a:
            puVar8 = (undefined4 *)FUN_14048fb60();
            *puVar8 = 0;
            puVar8 = (undefined4 *)FUN_14048fb3c();
            *puVar8 = 0x16;
            FUN_1404a1f20();
          }
          else {
            uVar14 = param_3 & 0xffffffff;
            local_48 = param_2;
LAB_1404b093c:
            psVar17 = local_48;
            if ((((*(byte *)((&DAT_1406328d0)[local_58] + 0x38 + uVar9 * 0x48) & 0x48) != 0) &&
                (cVar4 = *(char *)((&DAT_1406328d0)[local_58] + 0x3a + uVar9 * 0x48), cVar4 != '\n')
                ) && (iVar6 = (int)uVar14, iVar6 != 0)) {
              *(char *)local_48 = cVar4;
              uVar14 = (ulonglong)(iVar6 - 1U);
              psVar17 = (short *)((longlong)local_48 + 1);
              iVar7 = 1;
              *(undefined1 *)((&DAT_1406328d0)[local_58] + 0x3a + uVar9 * 0x48) = 10;
              if (((cVar3 != '\0') &&
                  (cVar4 = *(char *)((&DAT_1406328d0)[local_58] + 0x3b + uVar9 * 0x48),
                  cVar4 != '\n')) && (iVar6 - 1U != 0)) {
                *(char *)psVar17 = cVar4;
                psVar17 = local_48 + 1;
                uVar14 = (ulonglong)(iVar6 - 2U);
                *(undefined1 *)((&DAT_1406328d0)[local_58] + 0x3b + uVar9 * 0x48) = 10;
                iVar7 = 2;
                if (((cVar3 == '\x01') &&
                    (cVar4 = *(char *)((&DAT_1406328d0)[local_58] + 0x3c + uVar9 * 0x48),
                    cVar4 != '\n')) && (iVar7 = 2, iVar6 - 2U != 0)) {
                  *(char *)psVar17 = cVar4;
                  iVar7 = 3;
                  psVar17 = (short *)((longlong)local_48 + 3);
                  uVar14 = (ulonglong)(iVar6 - 3);
                  *(undefined1 *)((&DAT_1406328d0)[local_58] + 0x3c + uVar9 * 0x48) = 10;
                }
              }
            }
            local_68[0] = 0;
            iVar6 = FUN_1404b4cb0(param_1);
            if (((iVar6 == 0) || (-1 < *(char *)((&DAT_1406328d0)[local_58] + 0x38 + uVar9 * 0x48)))
               || (iVar6 = (*_DAT_14059deb0)(local_60,local_68), iVar6 == 0)) {
              local_50 = local_50 & 0xffffffffffffff00;
LAB_1404b0a72:
              local_res20[0] = 0;
              iVar6 = (*_DAT_14059e140)(local_60,psVar17,uVar14,local_res20,0);
              if ((iVar6 != 0) && (uVar5 = local_res20[0], local_res20[0] <= uVar16)) {
LAB_1404b0ab4:
                iVar7 = iVar7 + uVar5;
                if (*(char *)((&DAT_1406328d0)[local_58] + 0x38 + uVar9 * 0x48) < '\0') {
                  if (cVar3 == '\x02') {
                    if ((char)local_50 == '\0') {
                      iVar7 = FUN_1404b0f30(param_1,local_48);
                    }
                    else {
                      psVar1 = (short *)((longlong)local_48 +
                                        ((longlong)iVar7 & 0xfffffffffffffffeU));
                      psVar17 = local_48;
                      for (psVar12 = local_48; psVar12 < psVar1;
                          psVar12 = (short *)((longlong)psVar12 + lVar15)) {
                        sVar13 = *psVar12;
                        if (sVar13 == 0x1a) {
                          pbVar2 = (byte *)((&DAT_1406328d0)[local_58] + 0x38 + uVar9 * 0x48);
                          *pbVar2 = *pbVar2 | 2;
                          break;
                        }
                        if (((sVar13 == 0xd) && (psVar12 + 1 < psVar1)) && (psVar12[1] == 10)) {
                          sVar13 = 10;
                          lVar15 = 4;
                        }
                        else {
                          lVar15 = 2;
                        }
                        *psVar17 = sVar13;
                        psVar17 = psVar17 + 1;
                      }
                      iVar7 = (int)((longlong)psVar17 - (longlong)local_48 >> 1) * 2;
                    }
                  }
                  else {
                    iVar7 = FUN_1404b0c00(param_1,psVar17,(longlong)iVar7,param_2,
                                          (param_3 & 0xffffffff) >> 1);
                  }
                }
                goto LAB_1404b0a52;
              }
              iVar7 = (*_DAT_14059df60)();
              if (iVar7 != 5) {
                if (iVar7 == 0x6d) {
                  iVar7 = 0;
                  goto LAB_1404b0a52;
                }
                goto LAB_1404b0a48;
              }
              puVar8 = (undefined4 *)FUN_14048fb3c();
              *puVar8 = 9;
              puVar8 = (undefined4 *)FUN_14048fb60();
              *puVar8 = 5;
            }
            else {
              if (cVar3 != '\x02') goto LAB_1404b0a72;
              local_res20[0] = 0;
              iVar6 = (*(code *)s_HeapReAlloc_14059e134._4_8_)
                                (local_60,psVar17,uVar14 >> 1,local_res20,0);
              if (iVar6 != 0) {
                uVar5 = local_res20[0] * 2;
                goto LAB_1404b0ab4;
              }
              iVar7 = (*_DAT_14059df60)();
LAB_1404b0a48:
              FUN_14048fb84(iVar7);
            }
          }
          iVar7 = -1;
LAB_1404b0a52:
          FUN_1404a2310(psVar10);
          return iVar7;
        }
      }
      puVar8 = (undefined4 *)FUN_14048fb60();
      *puVar8 = 0;
      puVar8 = (undefined4 *)FUN_14048fb3c();
      *puVar8 = 0x16;
      goto LAB_1404b0bdf;
    }
  }
  puVar8 = (undefined4 *)FUN_14048fb60();
  *puVar8 = 0;
  puVar8 = (undefined4 *)FUN_14048fb3c();
  *puVar8 = 9;
LAB_1404b0bdf:
  FUN_1404a1f20();
  return -1;
}

