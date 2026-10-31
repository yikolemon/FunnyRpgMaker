/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400ae504 */

byte * FUN_1400ae504(LPWSTR param_1,byte *param_2,byte *param_3,longlong *param_4)

{
  UINT UVar1;
  int iVar2;
  DWORD DVar3;
  byte *pbVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint local_res8 [2];
  byte *local_res10;
  
  pbVar4 = (byte *)0x0;
  if (param_1 != (LPWSTR)0x0) {
    if (param_3 == (byte *)0x0) {
      return (byte *)0x0;
    }
    *param_1 = L'\0';
  }
  local_res10 = param_2;
  if (param_2 == (byte *)0x0) {
    *(undefined1 *)(param_4 + 6) = 1;
    *(undefined4 *)((longlong)param_4 + 0x2c) = 0x16;
    FUN_1400a1080((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_4);
    pbVar4 = (byte *)0xffffffffffffffff;
  }
  else {
    if ((char)param_4[5] == '\0') {
      FUN_14008f0b0(param_4);
    }
    UVar1 = *(UINT *)(param_4[3] + 0xc);
    if (UVar1 == 0xfde9) {
      local_res8[0] = 0;
      local_res8[1] = 0;
      pbVar4 = FUN_1400a59fc((ushort *)param_1,&local_res10,(ulonglong)param_3,local_res8,
                             (longlong)param_4);
    }
    else {
      lVar5 = *(longlong *)(param_4[3] + 0x138);
      if (param_1 == (LPWSTR)0x0) {
        pbVar4 = (byte *)0xffffffffffffffff;
        if (lVar5 == 0) {
          do {
            pbVar4 = pbVar4 + 1;
          } while (local_res10[(longlong)pbVar4] != 0);
          return pbVar4;
        }
        iVar2 = FUN_1400a1350(UVar1,9,(LPCSTR)local_res10,-1,(LPWSTR)0x0,0);
        lVar5 = (longlong)iVar2;
        if (lVar5 == 0) {
          *(undefined1 *)(param_4 + 6) = 1;
          *(undefined4 *)((longlong)param_4 + 0x2c) = 0x2a;
          return (byte *)0xffffffffffffffff;
        }
      }
      else {
        if (lVar5 == 0) {
          if (param_3 == (byte *)0x0) {
            return (byte *)0x0;
          }
          do {
            *param_1 = (ushort)pbVar4[(longlong)local_res10];
            if (pbVar4[(longlong)local_res10] == 0) {
              return pbVar4;
            }
            pbVar4 = pbVar4 + 1;
            param_1 = param_1 + 1;
          } while (pbVar4 < param_3);
          return pbVar4;
        }
        uVar6 = (uint)param_3;
        iVar2 = FUN_1400a1350(UVar1,9,(LPCSTR)local_res10,-1,param_1,uVar6);
        lVar5 = (longlong)iVar2;
        if (lVar5 == 0) {
          DVar3 = GetLastError();
          if (DVar3 == 0x7a) {
            uVar8 = (ulonglong)param_3 & 0xffffffff;
            pbVar4 = local_res10;
            uVar7 = uVar6;
            while (uVar7 != 0) {
              uVar7 = (int)uVar8 - 1;
              uVar8 = (ulonglong)uVar7;
              if (*pbVar4 == 0) break;
              if ((*(short *)(*(longlong *)param_4[3] + (ulonglong)*pbVar4 * 2) < 0) &&
                 (pbVar4 = pbVar4 + 1, *pbVar4 == 0)) goto LAB_1400ae62b;
              pbVar4 = pbVar4 + 1;
            }
            iVar2 = FUN_1400a1350(*(UINT *)(param_4[3] + 0xc),1,(LPCSTR)local_res10,
                                  (int)pbVar4 - (int)local_res10,param_1,uVar6);
            if ((byte *)(longlong)iVar2 != (byte *)0x0) {
              return (byte *)(longlong)iVar2;
            }
          }
LAB_1400ae62b:
          *(undefined1 *)(param_4 + 6) = 1;
          *(undefined4 *)((longlong)param_4 + 0x2c) = 0x2a;
          *param_1 = L'\0';
          return (byte *)0xffffffffffffffff;
        }
      }
      pbVar4 = (byte *)(lVar5 + -1);
    }
  }
  return pbVar4;
}

