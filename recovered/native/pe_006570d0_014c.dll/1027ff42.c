/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027ff42 */

uint FUN_1027ff42(uint param_1,char *param_2,uint param_3)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  BOOL BVar4;
  DWORD DVar5;
  char *pcVar6;
  uint nNumberOfBytesToRead;
  char *pcVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  DWORD local_28;
  char *local_24;
  uint local_20;
  uint local_1c;
  HANDLE local_18;
  int local_14;
  char *local_10;
  uint local_c;
  byte local_5;
  
  if (param_1 == 0xfffffffe) {
    puVar2 = (undefined4 *)FUN_10269012();
    *puVar2 = 0;
    puVar2 = (undefined4 *)FUN_10268ffd();
    *puVar2 = 9;
    return 0xffffffff;
  }
  if ((-1 < (int)param_1) && (param_1 < DAT_103a5430)) {
    local_c = param_1 >> 6;
    iVar8 = (param_1 & 0x3f) * 0x38;
    local_20 = 1;
    iVar9 = (&DAT_103a5230)[local_c];
    local_5 = *(byte *)(iVar8 + 0x28 + iVar9);
    local_14 = iVar8;
    if ((local_5 & 1) != 0) {
      if (param_3 < 0x80000000) {
        if ((param_3 == 0) || ((local_5 & 2) != 0)) {
          return 0;
        }
        if (param_2 != (char *)0x0) {
          local_18 = *(HANDLE *)(iVar8 + 0x18 + iVar9);
          local_5 = *(char *)(iVar8 + 0x29 + iVar9);
          if (local_5 == '\x01') {
            if ((~(byte)param_3 & 1) == 0) goto LAB_10280010;
            uVar10 = param_3 >> 1;
            if (param_3 >> 1 < 4) {
              uVar10 = 4;
            }
            pcVar3 = (char *)FUN_10274170(uVar10);
            FUN_10274120(0);
            FUN_10274120(0);
            local_10 = pcVar3;
            if (pcVar3 != (char *)0x0) {
              uVar11 = FUN_1027938a(param_1,0,0,1);
              iVar9 = (&DAT_103a5230)[local_c];
              *(int *)(iVar8 + 0x20 + iVar9) = (int)uVar11;
              *(int *)(iVar8 + 0x24 + iVar9) = (int)((ulonglong)uVar11 >> 0x20);
              pcVar7 = pcVar3;
              goto LAB_102800aa;
            }
            puVar2 = (undefined4 *)FUN_10268ffd();
            *puVar2 = 0xc;
            puVar2 = (undefined4 *)FUN_10269012();
            *puVar2 = 8;
          }
          else if ((local_5 == '\x02') && ((~(byte)param_3 & 1) == 0)) {
LAB_10280010:
            puVar2 = (undefined4 *)FUN_10269012();
            *puVar2 = 0;
            puVar2 = (undefined4 *)FUN_10268ffd();
            *puVar2 = 0x16;
            FUN_10273ea8();
            pcVar3 = (char *)0x0;
          }
          else {
            local_10 = param_2;
            pcVar3 = param_2;
            uVar10 = param_3;
            pcVar7 = (char *)0x0;
LAB_102800aa:
            iVar9 = 0;
            local_1c = (&DAT_103a5230)[local_c];
            nNumberOfBytesToRead = uVar10;
            pcVar6 = local_10;
            if ((((*(byte *)(local_14 + 0x28 + local_1c) & 0x48) != 0) &&
                (cVar1 = *(char *)(local_14 + 0x2a + local_1c), cVar1 != '\n')) && (uVar10 != 0)) {
              iVar9 = 1;
              *local_10 = cVar1;
              pcVar6 = local_10 + 1;
              nNumberOfBytesToRead = uVar10 - 1;
              *(undefined1 *)(local_14 + 0x2a + (&DAT_103a5230)[local_c]) = 10;
              if (((local_5 != '\0') &&
                  (cVar1 = *(char *)(local_14 + 0x2b + (&DAT_103a5230)[local_c]), cVar1 != '\n')) &&
                 (nNumberOfBytesToRead != 0)) {
                *pcVar6 = cVar1;
                pcVar6 = local_10 + 2;
                nNumberOfBytesToRead = uVar10 - 2;
                iVar9 = 2;
                *(undefined1 *)(local_14 + 0x2b + (&DAT_103a5230)[local_c]) = 10;
                if (((local_5 == '\x01') &&
                    (cVar1 = *(char *)(local_14 + 0x2c + (&DAT_103a5230)[local_c]), cVar1 != '\n'))
                   && (nNumberOfBytesToRead != 0)) {
                  *pcVar6 = cVar1;
                  nNumberOfBytesToRead = uVar10 - 3;
                  iVar9 = 3;
                  *(undefined1 *)(local_14 + 0x2c + (&DAT_103a5230)[local_c]) = 10;
                  pcVar6 = local_10 + 3;
                }
              }
            }
            local_10 = pcVar6;
            local_24 = pcVar3;
            iVar8 = FUN_1028375e(param_1);
            pcVar3 = pcVar7;
            if (((iVar8 == 0) || (-1 < *(char *)(local_14 + 0x28 + (&DAT_103a5230)[local_c]))) ||
               (BVar4 = GetConsoleMode(local_18,&local_28), pcVar6 = local_10, BVar4 == 0)) {
              local_20 = local_20 & 0xffffff00;
LAB_10280203:
              pcVar6 = local_10;
              BVar4 = ReadFile(local_18,local_10,nNumberOfBytesToRead,&local_1c,(LPOVERLAPPED)0x0);
              if ((BVar4 != 0) && (uVar10 = local_1c, local_1c <= param_3)) {
LAB_10280226:
                uVar10 = iVar9 + uVar10;
                if (*(char *)(local_14 + 0x28 + (&DAT_103a5230)[local_c]) < '\0') {
                  if (local_5 == '\x02') {
                    if ((char)local_20 == '\0') {
                      uVar10 = FUN_102805f5(param_1,local_24,uVar10 >> 1);
                    }
                    else {
                      uVar10 = FUN_102802ce();
                    }
                  }
                  else {
                    uVar10 = FUN_1028034b(param_1,pcVar6,uVar10,param_2,param_3 >> 1);
                  }
                }
                goto LAB_102801e5;
              }
              DVar5 = GetLastError();
              if (DVar5 != 5) {
                if (DVar5 == 0x6d) {
                  uVar10 = 0;
                  goto LAB_102801e5;
                }
                goto LAB_102801db;
              }
              puVar2 = (undefined4 *)FUN_10268ffd();
              *puVar2 = 9;
              puVar2 = (undefined4 *)FUN_10269012();
              *puVar2 = 5;
            }
            else {
              if (local_5 != '\x02') goto LAB_10280203;
              BVar4 = ReadConsoleW(local_18,local_10,nNumberOfBytesToRead >> 1,&local_1c,
                                   (PCONSOLE_READCONSOLE_CONTROL)0x0);
              if (BVar4 != 0) {
                uVar10 = local_1c * 2;
                goto LAB_10280226;
              }
              DVar5 = GetLastError();
LAB_102801db:
              ___acrt_errno_map_os_error(DVar5);
            }
          }
          uVar10 = 0xffffffff;
          pcVar7 = pcVar3;
LAB_102801e5:
          FUN_10274120(pcVar7);
          return uVar10;
        }
      }
      puVar2 = (undefined4 *)FUN_10269012();
      *puVar2 = 0;
      puVar2 = (undefined4 *)FUN_10268ffd();
      *puVar2 = 0x16;
      goto LAB_102802c2;
    }
  }
  puVar2 = (undefined4 *)FUN_10269012();
  *puVar2 = 0;
  puVar2 = (undefined4 *)FUN_10268ffd();
  *puVar2 = 9;
LAB_102802c2:
  FUN_10273ea8();
  return 0xffffffff;
}

