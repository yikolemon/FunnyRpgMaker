/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801767ac */

undefined8 FUN_1801767ac(undefined8 *param_1)

{
  uint *puVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  longlong lVar13;
  undefined1 *puVar14;
  byte bVar15;
  undefined1 uVar16;
  undefined1 *puVar17;
  uint7 uVar19;
  char *pcVar18;
  uint uVar20;
  undefined8 uVar21;
  uint uVar22;
  ulonglong uVar23;
  bool bVar24;
  undefined1 auStack_4b8 [32];
  uint local_498;
  undefined4 local_490;
  uint local_488;
  uint local_47c;
  uint local_478;
  int local_474;
  ulonglong local_470;
  undefined8 local_468;
  ulonglong local_460;
  int local_458;
  undefined2 local_452 [3];
  char local_44c [4];
  undefined1 local_448 [1024];
  ulonglong local_48;
  ulonglong uVar12;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_4b8;
  local_44c[2] = 0;
  local_44c[0] = '\0';
  local_44c[1] = '\0';
  puVar1 = (uint *)*param_1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  iVar5 = FUN_1801765eb(puVar1);
  if (iVar5 == 0) {
LAB_180176e91:
    uVar21 = 0;
LAB_180176e93:
    if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_4b8)) {
                    /* WARNING: Subroutine does not return */
      FUN_1802396d0(local_48 ^ (ulonglong)auStack_4b8);
    }
    return uVar21;
  }
  bVar24 = true;
  local_460 = 0;
  local_478 = 0;
  local_474 = 0;
  local_470 = 0;
  uVar7 = 0;
  uVar20 = 0;
  local_468 = 0;
  local_47c = 0;
LAB_180176846:
  uVar9 = FUN_180177460();
  uVar6 = (uint)(uVar9 >> 0x20);
  uVar22 = (uint)uVar9;
  uVar8 = (uint)local_470;
  if ((int)uVar6 < 0x49484452) {
    if (uVar6 == 0x43674249) {
      local_474 = 1;
LAB_180176c1f:
      FUN_180177488(puVar1);
LAB_180176c2d:
      FUN_1801774e1(puVar1);
      goto LAB_180176846;
    }
    if (uVar6 == 0x49444154) {
      if (bVar24) goto LAB_180176e85;
      if (((char)local_47c == '\0') || (uVar8 != 0)) {
        if (uVar22 < 0x40000001) {
          uVar6 = uVar20 + uVar22;
          uVar21 = 0;
          if ((int)uVar6 < (int)uVar20) goto LAB_180176e93;
          if (uVar7 < uVar6) {
            uVar23 = 0x1000;
            if (0x1000 < uVar22) {
              uVar23 = uVar9 & 0xffffffff;
            }
            if (uVar7 != 0) {
              uVar23 = (ulonglong)uVar7;
            }
            do {
              uVar12 = uVar23;
              uVar7 = (uint)uVar12;
              uVar23 = (ulonglong)(uVar7 * 2);
            } while (uVar7 < uVar6);
            lVar13 = _realloc_base(param_1[1],uVar12);
            if (lVar13 == 0) {
              FUN_1801765d0("outofmem");
              goto LAB_180176e93;
            }
            param_1[1] = lVar13;
          }
          else {
            lVar13 = param_1[1];
          }
          iVar5 = FUN_18017759e(puVar1,(ulonglong)uVar20 + lVar13,uVar9 & 0xffffffff);
          bVar24 = false;
          uVar20 = uVar6;
          if (iVar5 != 0) goto LAB_180176c2d;
          pcVar18 = "outofdata";
          goto LAB_180176e8c;
        }
        pcVar18 = "IDAT size limit";
      }
      else {
        pcVar18 = "no PLTE";
      }
      goto LAB_180176e8c;
    }
    if (uVar6 == 0x49454e44) {
      if (!bVar24) {
        if (param_1[1] != 0) {
          local_458 = puVar1[2] * puVar1[1] * (*(int *)(param_1 + 4) * *puVar1 + 7 >> 3) + puVar1[1]
          ;
          local_498 = (uint)(local_474 == 0);
          lVar13 = FUN_180177643(param_1[1],uVar20);
          param_1[2] = lVar13;
          uVar21 = 0;
          if (lVar13 == 0) goto LAB_180176e93;
          thunk_FUN_180290e40(param_1[1]);
          param_1[1] = 0;
          uVar20 = puVar1[2] + 1;
          cVar3 = (char)local_468;
          uVar7 = puVar1[2];
          if (cVar3 != '\0') {
            uVar7 = uVar20;
          }
          uVar6 = uVar7;
          if ((char)local_47c == '\0') {
            uVar6 = uVar20;
          }
          if (uVar20 != 4) {
            uVar6 = uVar7;
          }
          puVar1[3] = uVar6;
          local_498 = *(uint *)(param_1 + 4);
          local_488 = local_478;
          local_490 = (undefined4)local_460;
          iVar5 = FUN_1801776f6(param_1,param_1[2],local_458);
          uVar21 = 0;
          if (iVar5 == 0) goto LAB_180176e93;
          if (cVar3 == '\0') {
            if ((char)local_47c != '\0') goto LAB_1801770aa;
          }
          else {
            if (*(int *)(param_1 + 4) == 0x10) {
              FUN_1801779a8(param_1,local_452);
            }
            else {
              FUN_180177a28(param_1,local_44c,puVar1[3]);
            }
            if ((char)local_47c == '\0') {
              puVar1[2] = puVar1[2] + 1;
            }
            else {
LAB_1801770aa:
              puVar1[2] = local_47c & 0xff;
              puVar1[3] = 4;
              iVar5 = FUN_180177a9a(param_1,local_448,4);
              if (iVar5 == 0) goto LAB_180176e93;
            }
          }
          thunk_FUN_180290e40(param_1[2]);
          param_1[2] = 0;
          FUN_1801774e1(puVar1);
          uVar21 = 1;
          goto LAB_180176e93;
        }
        pcVar18 = "no IDAT";
LAB_180176e8c:
        FUN_1801765d0(pcVar18);
        goto LAB_180176e91;
      }
    }
    else {
LAB_180176c0b:
      if (!bVar24) {
        bVar24 = false;
        if ((uVar6 >> 0x1d & 1) != 0) goto LAB_180176c1f;
        s_XXXX_PNG_chunk_not_known_180403c10[0] = (char)(uVar9 >> 0x38);
        pcVar18 = s_XXXX_PNG_chunk_not_known_180403c10;
        s_XXXX_PNG_chunk_not_known_180403c10[1] = (char)(uVar9 >> 0x30);
        s_XXXX_PNG_chunk_not_known_180403c10[2] = (char)(uVar9 >> 0x28);
        s_XXXX_PNG_chunk_not_known_180403c10[3] = (char)(uVar9 >> 0x20);
        goto LAB_180176e8c;
      }
    }
  }
  else if (uVar6 == 0x74524e53) {
    if (!bVar24) {
      if (param_1[1] != 0) {
        pcVar18 = "tRNS after IDAT";
        goto LAB_180176e8c;
      }
      if ((char)local_47c == '\0') {
        uVar6 = puVar1[2];
        if ((uVar6 & 1) == 0) {
          pcVar18 = "tRNS with alpha";
          goto LAB_180176e8c;
        }
        if (uVar6 * 2 == uVar22) {
          uVar19 = (uint7)(uint3)(uVar6 * 2 >> 8);
          if (*(int *)(param_1 + 4) == 0x10) {
            local_468 = CONCAT71(uVar19,1);
            if ((int)uVar6 < 1) {
LAB_180176e47:
              local_468 = CONCAT71(uVar19,1);
            }
            else {
              uVar9 = 0;
              do {
                uVar4 = FUN_180177505(puVar1);
                local_452[uVar9] = uVar4;
                if ((longlong)(int)puVar1[2] <= (longlong)(uVar9 + 1)) break;
                bVar24 = uVar9 < 2;
                uVar9 = uVar9 + 1;
              } while (bVar24);
            }
          }
          else {
            local_468 = CONCAT71(uVar19,1);
            if ((int)uVar6 < 1) goto LAB_180176e47;
            uVar9 = 0;
            do {
              cVar3 = FUN_180177505(puVar1);
              local_44c[uVar9] = (&DAT_1802e0898)[*(int *)(param_1 + 4)] * cVar3;
              if ((longlong)(int)puVar1[2] <= (longlong)(uVar9 + 1)) break;
              bVar24 = uVar9 < 2;
              uVar9 = uVar9 + 1;
            } while (bVar24);
          }
          local_47c = 0;
          bVar24 = false;
          goto LAB_180176c2d;
        }
      }
      else {
        if (uVar8 == 0) {
          pcVar18 = "tRNS before PLTE";
          goto LAB_180176e8c;
        }
        if (uVar22 <= uVar8) {
          local_47c = (uint)CONCAT71((int7)(local_470 >> 8),4);
          bVar24 = false;
          if (uVar22 != 0) {
            puVar14 = *(undefined1 **)(puVar1 + 0x30);
            uVar23 = 0;
            do {
              if (puVar14 < *(undefined1 **)(puVar1 + 0x32)) {
LAB_180176a99:
                *(undefined1 **)(puVar1 + 0x30) = puVar14 + 1;
                uVar16 = *puVar14;
                puVar14 = puVar14 + 1;
              }
              else {
                if (puVar1[0xc] != 0) {
                  FUN_180176673(puVar1);
                  puVar14 = *(undefined1 **)(puVar1 + 0x30);
                  goto LAB_180176a99;
                }
                uVar16 = 0;
              }
              local_448[uVar23 * 4 + 3] = uVar16;
              uVar23 = uVar23 + 1;
            } while ((uVar9 & 0xffffffff) != uVar23);
          }
          goto LAB_180176c2d;
        }
      }
      pcVar18 = "bad tRNS len";
      goto LAB_180176e8c;
    }
  }
  else {
    if (uVar6 != 0x504c5445) {
      if (uVar6 != 0x49484452) goto LAB_180176c0b;
      if (bVar24) {
        if (uVar22 == 0xd) {
          uVar6 = FUN_1801774e1(puVar1);
          *puVar1 = uVar6;
          uVar6 = FUN_1801774e1(puVar1);
          puVar1[1] = uVar6;
          if ((uVar6 < 0x1000001) && (*puVar1 < 0x1000001)) {
            pbVar10 = *(byte **)(puVar1 + 0x30);
            if (pbVar10 < *(byte **)(puVar1 + 0x32)) {
LAB_1801768e8:
              *(byte **)(puVar1 + 0x30) = pbVar10 + 1;
              uVar6 = (uint)*pbVar10;
            }
            else {
              if (puVar1[0xc] != 0) {
                FUN_180176673(puVar1);
                pbVar10 = *(byte **)(puVar1 + 0x30);
                goto LAB_1801768e8;
              }
              uVar6 = 0;
            }
            *(uint *)(param_1 + 4) = uVar6;
            bVar15 = (byte)uVar6 - 1;
            if (((byte)((byte)uVar6 ^ bVar15) <= bVar15) || ((uVar6 & 0x1f) == 0)) {
              pcVar18 = "1/2/4/8/16-bit only";
              goto LAB_180176e8c;
            }
            pbVar10 = *(byte **)(puVar1 + 0x30);
            if (*(byte **)(puVar1 + 0x32) <= pbVar10) {
              if (puVar1[0xc] != 0) {
                FUN_180176673(puVar1);
                pbVar10 = *(byte **)(puVar1 + 0x30);
                goto LAB_18017693a;
              }
              bVar15 = 0;
              uVar9 = 0;
              pbVar11 = pbVar10;
              goto LAB_180176d25;
            }
LAB_18017693a:
            pbVar11 = pbVar10 + 1;
            *(byte **)(puVar1 + 0x30) = pbVar11;
            bVar15 = *pbVar10;
            if (6 < bVar15) {
LAB_180176e74:
              pcVar18 = "bad ctype";
              goto LAB_180176e8c;
            }
            if (bVar15 == 3) {
              if (*(int *)(param_1 + 4) == 0x10) goto LAB_180176e74;
              uVar9 = 3;
              bVar15 = 3;
              local_47c = (uint)CONCAT71((int7)((ulonglong)pbVar10 >> 8),3);
            }
            else {
              uVar9 = (ulonglong)(uint)bVar15;
              if ((bVar15 & 1) != 0) goto LAB_180176e74;
            }
LAB_180176d25:
            if (pbVar11 < *(byte **)(puVar1 + 0x32)) {
LAB_180176d47:
              pbVar10 = pbVar11 + 1;
              *(byte **)(puVar1 + 0x30) = pbVar10;
              if (*pbVar11 != 0) {
                pcVar18 = "bad comp method";
                goto LAB_180176e8c;
              }
              if (*(byte **)(puVar1 + 0x32) <= pbVar10) {
                if (puVar1[0xc] == 0) goto LAB_180176dc4;
                FUN_180176673(puVar1);
                pbVar10 = *(byte **)(puVar1 + 0x30);
              }
              pbVar11 = pbVar10 + 1;
              *(byte **)(puVar1 + 0x30) = pbVar11;
              if (*pbVar10 != 0) {
                pcVar18 = "bad filter method";
                goto LAB_180176e8c;
              }
              if (*(byte **)(puVar1 + 0x32) <= pbVar11) {
                if (puVar1[0xc] == 0) goto LAB_180176dc4;
                FUN_180176673(puVar1);
                pbVar11 = *(byte **)(puVar1 + 0x30);
              }
              *(byte **)(puVar1 + 0x30) = pbVar11 + 1;
              uVar6 = (uint)*pbVar11;
              if (1 < *pbVar11) {
                pcVar18 = "bad interlace method";
                goto LAB_180176e8c;
              }
            }
            else {
              if (puVar1[0xc] != 0) {
                FUN_180176673(puVar1);
                pbVar11 = *(byte **)(puVar1 + 0x30);
                goto LAB_180176d47;
              }
LAB_180176dc4:
              uVar6 = 0;
            }
            uVar8 = *puVar1;
            if ((uVar8 == 0) || (puVar1[1] == 0)) {
              pcVar18 = "0-pixel image";
              goto LAB_180176e8c;
            }
            if ((char)local_47c == '\0') {
              uVar22 = (uint)(3 < bVar15) + ((uint)uVar9 & 2) + 1;
              puVar1[2] = uVar22;
              uVar8 = (uint)((0x40000000 / (ulonglong)uVar8) / (ulonglong)uVar22);
              local_47c = 0;
            }
            else {
              puVar1[2] = 1;
              uVar8 = (uint)(0x40000000 / (ulonglong)uVar8 >> 2);
            }
            local_478 = uVar6;
            local_460 = uVar9;
            bVar24 = false;
            if (puVar1[1] <= uVar8) goto LAB_180176c2d;
          }
          pcVar18 = "too large";
        }
        else {
          pcVar18 = "bad IHDR len";
        }
      }
      else {
        pcVar18 = "multiple IHDR";
      }
      goto LAB_180176e8c;
    }
    if (!bVar24) {
      if (uVar22 < 0x301) {
        uVar6 = (uVar22 & 0xffff) / 3;
        local_470 = (ulonglong)uVar6;
        if (uVar6 * 3 == uVar22) {
          bVar24 = false;
          if (2 < (ushort)uVar9) {
            puVar14 = *(undefined1 **)(puVar1 + 0x30);
            uVar9 = 0;
            do {
              puVar17 = *(undefined1 **)(puVar1 + 0x32);
              if (puVar14 < puVar17) {
                *(undefined1 **)(puVar1 + 0x30) = puVar14 + 1;
                uVar16 = *puVar14;
                puVar14 = puVar14 + 1;
              }
              else if (puVar1[0xc] == 0) {
                uVar16 = 0;
              }
              else {
                FUN_180176673(puVar1);
                puVar2 = *(undefined1 **)(puVar1 + 0x30);
                puVar17 = *(undefined1 **)(puVar1 + 0x32);
                puVar14 = puVar2 + 1;
                *(undefined1 **)(puVar1 + 0x30) = puVar14;
                uVar16 = *puVar2;
              }
              local_448[uVar9 * 4] = uVar16;
              if (puVar14 < puVar17) {
                *(undefined1 **)(puVar1 + 0x30) = puVar14 + 1;
                uVar16 = *puVar14;
                puVar14 = puVar14 + 1;
              }
              else if (puVar1[0xc] == 0) {
                uVar16 = 0;
              }
              else {
                FUN_180176673(puVar1);
                puVar2 = *(undefined1 **)(puVar1 + 0x30);
                puVar17 = *(undefined1 **)(puVar1 + 0x32);
                puVar14 = puVar2 + 1;
                *(undefined1 **)(puVar1 + 0x30) = puVar14;
                uVar16 = *puVar2;
              }
              local_448[uVar9 * 4 + 1] = uVar16;
              if (puVar14 < puVar17) {
LAB_180176bca:
                *(undefined1 **)(puVar1 + 0x30) = puVar14 + 1;
                uVar16 = *puVar14;
                puVar14 = puVar14 + 1;
              }
              else {
                if (puVar1[0xc] != 0) {
                  FUN_180176673(puVar1);
                  puVar14 = *(undefined1 **)(puVar1 + 0x30);
                  goto LAB_180176bca;
                }
                uVar16 = 0;
              }
              local_448[uVar9 * 4 + 2] = uVar16;
              local_448[uVar9 * 4 + 3] = 0xff;
              uVar9 = uVar9 + 1;
              bVar24 = false;
            } while (uVar6 + (uVar6 == 0) != uVar9);
          }
          goto LAB_180176c2d;
        }
      }
      pcVar18 = "invalid PLTE";
      goto LAB_180176e8c;
    }
  }
LAB_180176e85:
  pcVar18 = "first not IHDR";
  goto LAB_180176e8c;
}

