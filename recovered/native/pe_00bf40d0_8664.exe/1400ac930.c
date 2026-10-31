/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400ac930 */

int FUN_1400ac930(uint param_1,byte *param_2,longlong param_3,LPWSTR param_4,int param_5)

{
  byte bVar1;
  longlong lVar2;
  HANDLE hFile;
  BOOL BVar3;
  DWORD DVar4;
  byte *pbVar5;
  __acrt_ptd *p_Var6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  char local_res8 [8];
  DWORD local_res10 [2];
  
  lVar13 = (longlong)(int)param_1 >> 6;
  uVar12 = (ulonglong)(param_1 & 0x3f);
  lVar2 = (&DAT_1401433a0)[lVar13];
  hFile = *(HANDLE *)(lVar2 + 0x28 + uVar12 * 0x48);
  if ((param_3 == 0) || (*param_2 != 10)) {
    pbVar9 = (byte *)(lVar2 + 0x38 + uVar12 * 0x48);
    *pbVar9 = *pbVar9 & 0xfb;
  }
  else {
    pbVar9 = (byte *)(lVar2 + 0x38 + uVar12 * 0x48);
    *pbVar9 = *pbVar9 | 4;
  }
  pbVar9 = param_2;
  pbVar10 = param_2;
  do {
    if (param_2 + param_3 <= pbVar10) {
LAB_1400aca9c:
      iVar7 = (int)pbVar9 - (int)param_2;
      if (iVar7 == 0) {
        return 0;
      }
      if (*(char *)((&DAT_1401433a0)[lVar13] + 0x39 + uVar12 * 0x48) != '\0') {
        pbVar9 = param_2 + iVar7;
        if ((char)pbVar9[-1] < '\0') {
          uVar11 = 1;
          for (pbVar9 = pbVar9 + -1;
              (((&DAT_14013c4b0)[*pbVar9] == '\0' && (uVar11 < 5)) && (param_2 <= pbVar9));
              pbVar9 = pbVar9 + -1) {
            uVar11 = uVar11 + 1;
          }
          if ((&DAT_14013c4b0)[*pbVar9] == '\0') {
            p_Var6 = FUN_140095e5c();
            *(undefined4 *)p_Var6 = 0x2a;
            return -1;
          }
          if ((int)(char)(&DAT_14013c4b0)[*pbVar9] + 1U == uVar11) {
            pbVar9 = pbVar9 + uVar11;
          }
          else if ((*(byte *)((&DAT_1401433a0)[lVar13] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48)
                   & 0x48) == 0) {
            FUN_1400a9134(param_1,(LARGE_INTEGER)(longlong)(int)-uVar11,1);
          }
          else {
            pbVar10 = pbVar9 + 1;
            *(byte *)((&DAT_1401433a0)[lVar13] + 0x3a + (ulonglong)(param_1 & 0x3f) * 0x48) =
                 *pbVar9;
            if (1 < uVar11) {
              bVar1 = *pbVar10;
              pbVar10 = pbVar9 + 2;
              *(byte *)((&DAT_1401433a0)[lVar13] + 0x3b + (ulonglong)(param_1 & 0x3f) * 0x48) =
                   bVar1;
            }
            if (uVar11 == 3) {
              bVar1 = *pbVar10;
              pbVar10 = pbVar10 + 1;
              *(byte *)((&DAT_1401433a0)[lVar13] + 0x3c + (ulonglong)(param_1 & 0x3f) * 0x48) =
                   bVar1;
            }
            pbVar9 = pbVar10 + -(ulonglong)uVar11;
          }
        }
        iVar8 = (int)pbVar9 - (int)param_2;
        iVar7 = FUN_1400a1350(0xfde9,0,(LPCSTR)param_2,iVar8,param_4,param_5);
        if (iVar7 == 0) {
          DVar4 = GetLastError();
          FUN_140095ea4(DVar4);
          return -1;
        }
        *(byte *)((&DAT_1401433a0)[lVar13] + 0x3d + (ulonglong)(param_1 & 0x3f) * 0x48) =
             -(iVar7 != iVar8) & 2U |
             *(byte *)((&DAT_1401433a0)[lVar13] + 0x3d + (ulonglong)(param_1 & 0x3f) * 0x48) & 0xfd;
        return iVar7 * 2;
      }
      return iVar7;
    }
    bVar1 = *pbVar10;
    if (bVar1 == 0x1a) {
      bVar1 = *(byte *)((&DAT_1401433a0)[lVar13] + 0x38 + uVar12 * 0x48);
      if ((bVar1 & 0x40) != 0) {
        *pbVar9 = 0x1a;
        goto LAB_1400aca99;
      }
      *(byte *)((&DAT_1401433a0)[lVar13] + 0x38 + uVar12 * 0x48) = bVar1 | 2;
      goto LAB_1400aca9c;
    }
    pbVar5 = pbVar10 + 1;
    if (bVar1 == 0xd) {
      if (param_2 + param_3 <= pbVar5) {
        local_res8[0] = '\0';
        local_res10[0] = 0;
        BVar3 = ReadFile(hFile,local_res8,1,local_res10,(LPOVERLAPPED)0x0);
        if ((BVar3 == 0) || (local_res10[0] == 0)) {
          *pbVar9 = 0xd;
        }
        else if ((*(byte *)((&DAT_1401433a0)[lVar13] + 0x38 + uVar12 * 0x48) & 0x48) == 0) {
          if ((local_res8[0] == '\n') && (pbVar9 == param_2)) goto LAB_1400aca2a;
          FUN_1400a9134(param_1,(LARGE_INTEGER)0xffffffffffffffff,1);
          if (local_res8[0] == '\n') goto LAB_1400aca9c;
          *pbVar9 = 0xd;
        }
        else if (local_res8[0] == '\n') {
LAB_1400aca2a:
          *pbVar9 = 10;
        }
        else {
          *pbVar9 = 0xd;
          *(char *)((&DAT_1401433a0)[lVar13] + 0x3a + uVar12 * 0x48) = local_res8[0];
        }
LAB_1400aca99:
        pbVar9 = pbVar9 + 1;
        goto LAB_1400aca9c;
      }
      if (*pbVar5 != 10) goto LAB_1400ac9c9;
      pbVar5 = pbVar10 + 2;
      *pbVar9 = 10;
    }
    else {
LAB_1400ac9c9:
      *pbVar9 = bVar1;
    }
    pbVar9 = pbVar9 + 1;
    pbVar10 = pbVar5;
  } while( true );
}

