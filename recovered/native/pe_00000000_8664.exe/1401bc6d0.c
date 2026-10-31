/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401bc6d0 */

int FUN_1401bc6d0(uint param_1,short *param_2,ulonglong param_3)

{
  short *psVar1;
  byte *pbVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  BOOL BVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  short *psVar11;
  undefined8 uVar12;
  short *psVar13;
  short sVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  uint uVar18;
  short *psVar19;
  DWORD local_res20 [2];
  DWORD local_68 [2];
  HANDLE local_60;
  ulonglong local_58;
  ulonglong local_50;
  short *local_48;
  
  if (param_1 == 0xfffffffe) {
    puVar9 = (undefined4 *)FUN_14019e8f0();
    *puVar9 = 0;
    puVar9 = (undefined4 *)FUN_14019e8cc();
    *puVar9 = 9;
    return -1;
  }
  psVar11 = (short *)0x0;
  iVar16 = 0;
  if ((-1 < (int)param_1) && (param_1 < DAT_140f331b0)) {
    uVar10 = (ulonglong)(param_1 & 0x3f);
    local_50 = 1;
    local_58 = (ulonglong)(longlong)(int)param_1 >> 6;
    lVar17 = (&DAT_140f32db0)[local_58];
    if ((*(byte *)(lVar17 + 0x38 + uVar10 * 0x48) & 1) != 0) {
      uVar18 = (uint)param_3;
      if (uVar18 < 0x80000000) {
        if ((uVar18 == 0) || ((*(byte *)(lVar17 + 0x38 + uVar10 * 0x48) & 2) != 0)) {
          return 0;
        }
        if (param_2 != (short *)0x0) {
          local_60 = *(HANDLE *)(lVar17 + 0x28 + uVar10 * 0x48);
          cVar3 = *(char *)(lVar17 + 0x39 + uVar10 * 0x48);
          if (cVar3 == '\x01') {
            if ((~(byte)param_3 & 1) == 0) goto LAB_1401bc7ca;
            uVar15 = param_3 >> 1 & 0x7fffffff;
            if ((uint)uVar15 < 4) {
              uVar15 = 4;
            }
            psVar11 = (short *)_malloc_base(uVar15);
            FUN_1401aea30(0);
            FUN_1401aea30(0);
            if (psVar11 != (short *)0x0) {
              uVar12 = FUN_1401b7cf4(param_1,0,1);
              *(undefined8 *)((&DAT_140f32db0)[local_58] + 0x30 + uVar10 * 0x48) = uVar12;
              local_48 = psVar11;
              goto LAB_1401bc86c;
            }
            puVar9 = (undefined4 *)FUN_14019e8cc();
            *puVar9 = 0xc;
            puVar9 = (undefined4 *)FUN_14019e8f0();
            *puVar9 = 8;
          }
          else if ((cVar3 == '\x02') && ((~(byte)param_3 & 1) == 0)) {
LAB_1401bc7ca:
            puVar9 = (undefined4 *)FUN_14019e8f0();
            *puVar9 = 0;
            puVar9 = (undefined4 *)FUN_14019e8cc();
            *puVar9 = 0x16;
            FUN_1401ae640();
          }
          else {
            uVar15 = param_3 & 0xffffffff;
            local_48 = param_2;
LAB_1401bc86c:
            psVar19 = local_48;
            if ((((*(byte *)((&DAT_140f32db0)[local_58] + 0x38 + uVar10 * 0x48) & 0x48) != 0) &&
                (cVar4 = *(char *)((&DAT_140f32db0)[local_58] + 0x3a + uVar10 * 0x48), cVar4 != '\n'
                )) && (iVar6 = (int)uVar15, iVar6 != 0)) {
              *(char *)local_48 = cVar4;
              uVar15 = (ulonglong)(iVar6 - 1U);
              psVar19 = (short *)((longlong)local_48 + 1);
              iVar16 = 1;
              *(undefined1 *)((&DAT_140f32db0)[local_58] + 0x3a + uVar10 * 0x48) = 10;
              if (((cVar3 != '\0') &&
                  (cVar4 = *(char *)((&DAT_140f32db0)[local_58] + 0x3b + uVar10 * 0x48),
                  cVar4 != '\n')) && (iVar6 - 1U != 0)) {
                *(char *)psVar19 = cVar4;
                psVar19 = local_48 + 1;
                uVar15 = (ulonglong)(iVar6 - 2U);
                *(undefined1 *)((&DAT_140f32db0)[local_58] + 0x3b + uVar10 * 0x48) = 10;
                iVar16 = 2;
                if (((cVar3 == '\x01') &&
                    (cVar4 = *(char *)((&DAT_140f32db0)[local_58] + 0x3c + uVar10 * 0x48),
                    cVar4 != '\n')) && (iVar16 = 2, iVar6 - 2U != 0)) {
                  *(char *)psVar19 = cVar4;
                  iVar16 = 3;
                  psVar19 = (short *)((longlong)local_48 + 3);
                  uVar15 = (ulonglong)(iVar6 - 3);
                  *(undefined1 *)((&DAT_140f32db0)[local_58] + 0x3c + uVar10 * 0x48) = 10;
                }
              }
            }
            local_68[0] = 0;
            iVar6 = FUN_1401c09b0(param_1);
            if (((iVar6 == 0) || (-1 < *(char *)((&DAT_140f32db0)[local_58] + 0x38 + uVar10 * 0x48))
                ) || (BVar7 = GetConsoleMode(local_60,local_68), BVar7 == 0)) {
              local_50 = local_50 & 0xffffffffffffff00;
LAB_1401bc9a2:
              local_res20[0] = 0;
              BVar7 = ReadFile(local_60,psVar19,(DWORD)uVar15,local_res20,(LPOVERLAPPED)0x0);
              if ((BVar7 != 0) && (uVar5 = local_res20[0], local_res20[0] <= uVar18)) {
LAB_1401bc9e4:
                iVar16 = iVar16 + uVar5;
                if (*(char *)((&DAT_140f32db0)[local_58] + 0x38 + uVar10 * 0x48) < '\0') {
                  if (cVar3 == '\x02') {
                    if ((char)local_50 == '\0') {
                      iVar16 = FUN_1401bce60(param_1,local_48);
                    }
                    else {
                      psVar1 = (short *)((longlong)local_48 +
                                        ((longlong)iVar16 & 0xfffffffffffffffeU));
                      psVar19 = local_48;
                      for (psVar13 = local_48; psVar13 < psVar1;
                          psVar13 = (short *)((longlong)psVar13 + lVar17)) {
                        sVar14 = *psVar13;
                        if (sVar14 == 0x1a) {
                          pbVar2 = (byte *)((&DAT_140f32db0)[local_58] + 0x38 + uVar10 * 0x48);
                          *pbVar2 = *pbVar2 | 2;
                          break;
                        }
                        if (((sVar14 == 0xd) && (psVar13 + 1 < psVar1)) && (psVar13[1] == 10)) {
                          sVar14 = 10;
                          lVar17 = 4;
                        }
                        else {
                          lVar17 = 2;
                        }
                        *psVar19 = sVar14;
                        psVar19 = psVar19 + 1;
                      }
                      iVar16 = (int)((longlong)psVar19 - (longlong)local_48 >> 1) * 2;
                    }
                  }
                  else {
                    iVar16 = FUN_1401bcb30(param_1,psVar19,(longlong)iVar16,param_2,
                                           (param_3 & 0xffffffff) >> 1);
                  }
                }
                goto LAB_1401bc982;
              }
              DVar8 = GetLastError();
              if (DVar8 != 5) {
                if (DVar8 == 0x6d) {
                  iVar16 = 0;
                  goto LAB_1401bc982;
                }
                goto LAB_1401bc978;
              }
              puVar9 = (undefined4 *)FUN_14019e8cc();
              *puVar9 = 9;
              puVar9 = (undefined4 *)FUN_14019e8f0();
              *puVar9 = 5;
            }
            else {
              if (cVar3 != '\x02') goto LAB_1401bc9a2;
              local_res20[0] = 0;
              BVar7 = ReadConsoleW(local_60,psVar19,(DWORD)(uVar15 >> 1),local_res20,
                                   (PCONSOLE_READCONSOLE_CONTROL)0x0);
              if (BVar7 != 0) {
                uVar5 = local_res20[0] * 2;
                goto LAB_1401bc9e4;
              }
              DVar8 = GetLastError();
LAB_1401bc978:
              FUN_14019e914(DVar8);
            }
          }
          iVar16 = -1;
LAB_1401bc982:
          FUN_1401aea30(psVar11);
          return iVar16;
        }
      }
      puVar9 = (undefined4 *)FUN_14019e8f0();
      *puVar9 = 0;
      puVar9 = (undefined4 *)FUN_14019e8cc();
      *puVar9 = 0x16;
      goto LAB_1401bcb0f;
    }
  }
  puVar9 = (undefined4 *)FUN_14019e8f0();
  *puVar9 = 0;
  puVar9 = (undefined4 *)FUN_14019e8cc();
  *puVar9 = 9;
LAB_1401bcb0f:
  FUN_1401ae640();
  return -1;
}

