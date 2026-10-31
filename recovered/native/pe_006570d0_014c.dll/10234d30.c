/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10234d30 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_10234d30(LPCWSTR param_1,DWORD param_2,byte *param_3,int param_4,byte *param_5,int param_6,
                 UINT param_7)

{
  BOOL BVar1;
  BYTE *pBVar2;
  int cchWideChar;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  LPWSTR lpWideCharStr;
  LPCWSTR lpWideCharStr_00;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  if (param_4 < 1) {
    if (param_4 < -1) goto LAB_10234fc7;
  }
  else {
    param_4 = FUN_102682c0(param_3,param_4);
  }
  if (param_6 < 1) {
    if (param_6 < -1) goto LAB_10234fc7;
  }
  else {
    param_6 = FUN_102682c0(param_5,param_6);
  }
  if ((param_4 == 0) || (param_6 == 0)) {
    if (param_4 == param_6) {
LAB_10234fe6:
                    /* WARNING: Subroutine does not return */
      FUN_102283e0();
    }
    if (1 < param_6) {
LAB_10234e4d:
                    /* WARNING: Subroutine does not return */
      FUN_102283e0();
    }
    if (1 < param_4) {
LAB_10234dfd:
                    /* WARNING: Subroutine does not return */
      FUN_102283e0();
    }
    BVar1 = GetCPInfo(param_7,&local_1c);
    if (BVar1 == 0) goto LAB_10234fc7;
    if (0 < param_4) {
      if (1 < local_1c.MaxCharSize) {
        pBVar2 = local_1c.LeadByte;
        while ((local_1c.LeadByte[0] != 0 && (pBVar2[1] != 0))) {
          if ((*pBVar2 <= *param_3) && (*param_3 <= pBVar2[1])) goto LAB_10234fe6;
          pBVar2 = pBVar2 + 2;
          local_1c.LeadByte[0] = *pBVar2;
        }
      }
      goto LAB_10234dfd;
    }
    if (0 < param_6) {
      if (1 < local_1c.MaxCharSize) {
        pBVar2 = local_1c.LeadByte;
        while ((local_1c.LeadByte[0] != 0 && (pBVar2[1] != 0))) {
          if ((*pBVar2 <= *param_5) && (*param_5 <= pBVar2[1])) goto LAB_10234fe6;
          pBVar2 = pBVar2 + 2;
          local_1c.LeadByte[0] = *pBVar2;
        }
      }
      goto LAB_10234e4d;
    }
  }
  cchWideChar = MultiByteToWideChar(param_7,9,(LPCSTR)param_3,param_4,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_10234fc7;
  uVar3 = cchWideChar * 2 + 8;
  uVar3 = -(uint)((uint)(cchWideChar * 2) < uVar3) & uVar3;
  if (uVar3 != 0) {
    if (uVar3 < 0x401) {
      puVar5 = (undefined4 *)&stack0xffffffc0;
      lpWideCharStr_00 = (LPCWSTR)&stack0xffffffc0;
      if (&stack0x00000000 != (undefined1 *)0x40) {
LAB_10234ec4:
        lpWideCharStr_00 = (LPCWSTR)(puVar5 + 2);
      }
    }
    else {
      puVar5 = (undefined4 *)FUN_1026faa0(uVar3);
      lpWideCharStr_00 = (LPCWSTR)0x0;
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0xdddd;
        goto LAB_10234ec4;
      }
    }
    if (((lpWideCharStr_00 != (LPCWSTR)0x0) &&
        (iVar4 = MultiByteToWideChar(param_7,1,(LPCSTR)param_3,param_4,lpWideCharStr_00,cchWideChar)
        , iVar4 != 0)) &&
       (iVar4 = MultiByteToWideChar(param_7,9,(LPCSTR)param_5,param_6,(LPWSTR)0x0,0), iVar4 != 0)) {
      uVar3 = iVar4 * 2 + 8;
      uVar3 = -(uint)((uint)(iVar4 * 2) < uVar3) & uVar3;
      if (uVar3 != 0) {
        if (uVar3 < 0x401) {
          puVar5 = (undefined4 *)&stack0xffffffc0;
          lpWideCharStr = (LPWSTR)&stack0xffffffc0;
          if (&stack0x00000000 != (undefined1 *)0x40) {
LAB_10234f4d:
            lpWideCharStr = (LPWSTR)(puVar5 + 2);
          }
        }
        else {
          puVar5 = (undefined4 *)FUN_1026faa0(uVar3);
          lpWideCharStr = (LPWSTR)0x0;
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = 0xdddd;
            goto LAB_10234f4d;
          }
        }
        if ((lpWideCharStr != (LPWSTR)0x0) &&
           (iVar6 = MultiByteToWideChar(param_7,1,(LPCSTR)param_5,param_6,lpWideCharStr,iVar4),
           iVar6 != 0)) {
          CompareStringEx(param_1,param_2,lpWideCharStr_00,cchWideChar,lpWideCharStr,iVar4,
                          (LPNLSVERSIONINFO)0x0,(LPVOID)0x0,0);
          FUN_10235000();
          FUN_10235000();
                    /* WARNING: Subroutine does not return */
          FUN_102283e0();
        }
      }
      FUN_10235000();
    }
  }
  FUN_10235000();
LAB_10234fc7:
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

