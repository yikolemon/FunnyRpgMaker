/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14019fbe0 */

void FUN_14019fbe0(int *param_1,char param_2)

{
  int iVar1;
  ulonglong uVar2;
  char cVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStackY_88 [32];
  ulonglong local_58;
  int local_50;
  int local_4c;
  tm local_48;
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStackY_88;
  if (param_1 == (int *)0x0) {
    puVar4 = (undefined4 *)FUN_14019e8cc();
    *puVar4 = 0x16;
    FUN_1401ae640();
    goto LAB_14019fd57;
  }
  local_58 = (ulonglong)param_1[5];
  if ((0x44 < (longlong)local_58) && (local_58 < 0x44f)) {
    iVar8 = param_1[4];
    if ((iVar8 < 0) || (0xb < iVar8)) {
      iVar1 = iVar8 / 0xc;
      iVar8 = iVar8 % 0xc;
      local_58 = local_58 + (longlong)iVar1;
      param_1[4] = iVar8;
      if (iVar8 < 0) {
        iVar8 = iVar8 + 0xc;
        local_58 = local_58 - 1;
        param_1[4] = iVar8;
      }
      if (((longlong)local_58 < 0x45) || (0x44e < local_58)) goto LAB_14019fd48;
    }
    uVar2 = local_58;
    lVar9 = (longlong)*(int *)(&DAT_140eb80c0 + (longlong)iVar8 * 4);
    cVar3 = FUN_14019ff28(local_58);
    if ((cVar3 != '\0') && (1 < iVar8)) {
      lVar9 = lVar9 + 1;
    }
    lVar6 = uVar2 - 1;
    lVar5 = uVar2 + 299 + SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((longlong)(uVar2 + 299)),8);
    lVar7 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar6),8) + lVar6;
    iVar8 = param_1[3];
    lVar6 = uVar2 * 0x16d +
            ((longlong)((ulonglong)((uint)(lVar6 >> 0x3f) & 3) + lVar6) >> 2) + -0x63df + lVar9 +
            (((lVar5 >> 8) - (lVar5 >> 0x3f)) - ((lVar7 >> 6) - (lVar7 >> 0x3f)));
    lVar9 = lVar6 + iVar8;
    if (lVar6 < 0) {
      if ((-1 < iVar8) || (lVar9 < 0)) goto LAB_14019fd87;
    }
    else if ((iVar8 < 0) || (-1 < lVar9)) {
LAB_14019fd87:
      lVar6 = lVar9 * 0x18;
      if ((lVar9 == 0) || (lVar6 / lVar9 == 0x18)) {
        lVar5 = (longlong)param_1[2];
        lVar9 = lVar5 + lVar6;
        if (lVar6 < 0) {
          if ((-1 < lVar5) || (lVar9 < 0)) goto LAB_14019fdc5;
        }
        else if ((lVar5 < 0) || (-1 < lVar9)) {
LAB_14019fdc5:
          lVar6 = lVar9 * 0x3c;
          if ((lVar9 == 0) || (lVar6 / lVar9 == 0x3c)) {
            lVar5 = (longlong)param_1[1];
            lVar9 = lVar5 + lVar6;
            if (lVar6 < 0) {
              if ((-1 < lVar5) || (lVar9 < 0)) goto LAB_14019fe0b;
            }
            else if ((lVar5 < 0) || (-1 < lVar9)) {
LAB_14019fe0b:
              lVar6 = lVar9 * 0x3c;
              if ((lVar9 == 0) || (lVar6 / lVar9 == 0x3c)) {
                lVar9 = (longlong)*param_1;
                local_58 = lVar9 + lVar6;
                if (lVar6 < 0) {
                  if ((-1 < lVar9) || ((longlong)local_58 < 0)) goto LAB_14019fe54;
                }
                else if ((lVar9 < 0) || (-1 < (longlong)local_58)) {
LAB_14019fe54:
                  local_48.tm_isdst = 0;
                  local_48.tm_sec = 0;
                  local_48.tm_min = 0;
                  local_48.tm_hour = 0;
                  local_48.tm_mday = 0;
                  local_48.tm_mon = 0;
                  local_48.tm_year = 0;
                  local_48.tm_wday = 0;
                  local_48.tm_yday = 0;
                  if (param_2 == '\0') {
                    iVar8 = common_gmtime_s<__int64>(&local_48,(__int64 *)&local_58);
LAB_14019feda:
                    if (iVar8 == 0) {
LAB_14019fee5:
                      *param_1 = local_48.tm_sec;
                      param_1[1] = local_48.tm_min;
                      param_1[2] = local_48.tm_hour;
                      param_1[3] = local_48.tm_mday;
                      param_1[4] = local_48.tm_mon;
                      param_1[5] = local_48.tm_year;
                      param_1[6] = local_48.tm_wday;
                      param_1[7] = local_48.tm_yday;
                      param_1[8] = local_48.tm_isdst;
                      goto LAB_14019fd57;
                    }
                  }
                  else {
                    __tzset();
                    local_4c = 0;
                    local_50 = 0;
                    iVar8 = FUN_1401b00c4();
                    if ((iVar8 != 0) || (iVar8 = FUN_1401b00f4(), iVar8 != 0)) {
                    /* WARNING: Subroutine does not return */
                      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                    }
                    local_58 = local_58 + (longlong)local_50;
                    iVar8 = thunk_FUN_14019f7ec(&local_48,&local_58);
                    if (iVar8 == 0) {
                      if ((0 < param_1[8]) || ((param_1[8] < 0 && (0 < local_48.tm_isdst)))) {
                        local_58 = local_58 + (longlong)local_4c;
                        iVar8 = thunk_FUN_14019f7ec(&local_48,&local_58);
                        goto LAB_14019feda;
                      }
                      goto LAB_14019fee5;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_14019fd48:
  puVar4 = (undefined4 *)FUN_14019e8cc();
  *puVar4 = 0x16;
LAB_14019fd57:
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStackY_88);
}

