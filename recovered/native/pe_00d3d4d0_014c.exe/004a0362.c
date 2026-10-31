/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004a0362 */

uint __cdecl FUN_004a0362(uint param_1,LPWSTR param_2,uint param_3)

{
  byte bVar1;
  __acrt_ptd *p_Var2;
  LPWSTR pWVar3;
  undefined3 extraout_var;
  BOOL BVar4;
  LPWSTR pWVar5;
  SIZE_T nNumberOfBytesToRead;
  LPWSTR pWVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  DWORD local_28;
  LPWSTR local_24;
  uint local_20;
  uint local_1c;
  HANDLE local_18;
  int local_14;
  LPWSTR local_10;
  uint local_c;
  byte local_5;
  
  if (param_1 == 0xfffffffe) {
    p_Var2 = FUN_0048f682();
    *(undefined4 *)p_Var2 = 0;
    p_Var2 = FUN_0048f66d();
    *(undefined4 *)p_Var2 = 9;
    return 0xffffffff;
  }
  if ((-1 < (int)param_1) && (param_1 < DAT_00521ec8)) {
    local_c = param_1 >> 6;
    iVar7 = (param_1 & 0x3f) * 0x38;
    local_20 = 1;
    iVar8 = (&DAT_00521cc8)[local_c];
    local_5 = *(byte *)(iVar7 + 0x28 + iVar8);
    local_14 = iVar7;
    if ((local_5 & 1) != 0) {
      if (param_3 < 0x80000000) {
        if ((param_3 == 0) || ((local_5 & 2) != 0)) {
          return 0;
        }
        if (param_2 != (LPWSTR)0x0) {
          local_18 = *(HANDLE *)(iVar7 + 0x18 + iVar8);
          local_5 = *(char *)(iVar7 + 0x29 + iVar8);
          if (local_5 == '\x01') {
            if ((~(byte)param_3 & 1) == 0) goto LAB_004a0430;
            uVar9 = param_3 >> 1;
            if (param_3 >> 1 < 4) {
              uVar9 = 4;
            }
            pWVar3 = FUN_00495f50(uVar9);
            FUN_00495f00((LPVOID)0x0);
            FUN_00495f00((LPVOID)0x0);
            local_10 = pWVar3;
            if (pWVar3 != (LPWSTR)0x0) {
              uVar10 = FUN_0049cd94(param_1,0,0,(PLARGE_INTEGER)0x1);
              iVar8 = (&DAT_00521cc8)[local_c];
              *(int *)(iVar7 + 0x20 + iVar8) = (int)uVar10;
              *(int *)(iVar7 + 0x24 + iVar8) = (int)((ulonglong)uVar10 >> 0x20);
              pWVar6 = pWVar3;
              goto LAB_004a04ca;
            }
            p_Var2 = FUN_0048f66d();
            *(undefined4 *)p_Var2 = 0xc;
            p_Var2 = FUN_0048f682();
            *(undefined4 *)p_Var2 = 8;
          }
          else if ((local_5 == '\x02') && ((~(byte)param_3 & 1) == 0)) {
LAB_004a0430:
            p_Var2 = FUN_0048f682();
            *(undefined4 *)p_Var2 = 0;
            p_Var2 = FUN_0048f66d();
            *(undefined4 *)p_Var2 = 0x16;
            FUN_00495c88();
            pWVar3 = (LPWSTR)0x0;
          }
          else {
            local_10 = param_2;
            pWVar3 = param_2;
            uVar9 = param_3;
            pWVar6 = (LPWSTR)0x0;
LAB_004a04ca:
            iVar8 = 0;
            local_1c = (&DAT_00521cc8)[local_c];
            nNumberOfBytesToRead = uVar9;
            pWVar5 = local_10;
            if ((((*(byte *)(local_14 + 0x28 + local_1c) & 0x48) != 0) &&
                (bVar1 = *(byte *)(local_14 + 0x2a + local_1c), bVar1 != 10)) && (uVar9 != 0)) {
              iVar8 = 1;
              *(byte *)local_10 = bVar1;
              pWVar5 = (LPWSTR)((int)local_10 + 1);
              nNumberOfBytesToRead = uVar9 - 1;
              *(undefined1 *)(local_14 + 0x2a + (&DAT_00521cc8)[local_c]) = 10;
              if (((local_5 != '\0') &&
                  (bVar1 = *(byte *)(local_14 + 0x2b + (&DAT_00521cc8)[local_c]), bVar1 != 10)) &&
                 (nNumberOfBytesToRead != 0)) {
                *(byte *)pWVar5 = bVar1;
                pWVar5 = local_10 + 1;
                nNumberOfBytesToRead = uVar9 - 2;
                iVar8 = 2;
                *(undefined1 *)(local_14 + 0x2b + (&DAT_00521cc8)[local_c]) = 10;
                if (((local_5 == '\x01') &&
                    (bVar1 = *(byte *)(local_14 + 0x2c + (&DAT_00521cc8)[local_c]), bVar1 != 10)) &&
                   (nNumberOfBytesToRead != 0)) {
                  *(byte *)pWVar5 = bVar1;
                  nNumberOfBytesToRead = uVar9 - 3;
                  iVar8 = 3;
                  *(undefined1 *)(local_14 + 0x2c + (&DAT_00521cc8)[local_c]) = 10;
                  pWVar5 = (LPWSTR)((int)local_10 + 3);
                }
              }
            }
            local_10 = pWVar5;
            local_24 = pWVar3;
            bVar1 = FUN_004a38de(param_1);
            pWVar3 = pWVar6;
            if (((CONCAT31(extraout_var,bVar1) == 0) ||
                (-1 < *(char *)(local_14 + 0x28 + (&DAT_00521cc8)[local_c]))) ||
               (BVar4 = GetConsoleMode(local_18,&local_28), pWVar5 = local_10, BVar4 == 0)) {
              local_20 = local_20 & 0xffffff00;
LAB_004a0623:
              pWVar5 = local_10;
              BVar4 = ReadFile(local_18,local_10,nNumberOfBytesToRead,&local_1c,(LPOVERLAPPED)0x0);
              if ((BVar4 != 0) && (uVar9 = local_1c, local_1c <= param_3)) {
LAB_004a0646:
                uVar9 = iVar8 + uVar9;
                if (*(char *)(local_14 + 0x28 + (&DAT_00521cc8)[local_c]) < '\0') {
                  if (local_5 == '\x02') {
                    if ((char)local_20 == '\0') {
                      uVar9 = FUN_004a0a15(param_1,(ushort *)local_24,uVar9 >> 1);
                    }
                    else {
                      uVar9 = FUN_004a06ee(param_1,local_24,uVar9 >> 1);
                    }
                  }
                  else {
                    uVar9 = FUN_004a076b(param_1,(byte *)pWVar5,uVar9,param_2,param_3 >> 1);
                  }
                }
                goto LAB_004a0605;
              }
              uVar9 = GetLastError();
              if (uVar9 != 5) {
                if (uVar9 == 0x6d) {
                  uVar9 = 0;
                  goto LAB_004a0605;
                }
                goto LAB_004a05fb;
              }
              p_Var2 = FUN_0048f66d();
              *(undefined4 *)p_Var2 = 9;
              p_Var2 = FUN_0048f682();
              *(undefined4 *)p_Var2 = 5;
            }
            else {
              if (local_5 != '\x02') goto LAB_004a0623;
              BVar4 = ReadConsoleW(local_18,local_10,nNumberOfBytesToRead >> 1,&local_1c,
                                   (PCONSOLE_READCONSOLE_CONTROL)0x0);
              if (BVar4 != 0) {
                uVar9 = local_1c * 2;
                goto LAB_004a0646;
              }
              uVar9 = GetLastError();
LAB_004a05fb:
              ___acrt_errno_map_os_error(uVar9);
            }
          }
          uVar9 = 0xffffffff;
          pWVar6 = pWVar3;
LAB_004a0605:
          FUN_00495f00(pWVar6);
          return uVar9;
        }
      }
      p_Var2 = FUN_0048f682();
      *(undefined4 *)p_Var2 = 0;
      p_Var2 = FUN_0048f66d();
      *(undefined4 *)p_Var2 = 0x16;
      goto LAB_004a06e2;
    }
  }
  p_Var2 = FUN_0048f682();
  *(undefined4 *)p_Var2 = 0;
  p_Var2 = FUN_0048f66d();
  *(undefined4 *)p_Var2 = 9;
LAB_004a06e2:
  FUN_00495c88();
  return 0xffffffff;
}

