/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140103be0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_140103be0(LPCWSTR param_1,uint param_2,char *param_3,int param_4,undefined8 param_5,
                  int param_6,UINT param_7,int param_8)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  DWORD dwFlags;
  ulonglong uVar7;
  LPCWSTR lpSrcStr;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  LPCWSTR lpWideCharStr;
  undefined1 auStackY_a8 [32];
  ulonglong local_58 [3];
  
  puVar8 = auStackY_a8;
  local_58[0] = DAT_1401c9640 ^ (ulonglong)local_58;
  iVar3 = param_4;
  if (0 < param_4) {
    sVar4 = __strncnt(param_3,(longlong)param_4);
    iVar2 = (int)sVar4;
    iVar3 = iVar2 + 1;
    if (param_4 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  dwFlags = 1;
  if (param_8 != 0) {
    dwFlags = 9;
  }
  iVar2 = MultiByteToWideChar(param_7,dwFlags,param_3,iVar3,(LPWSTR)0x0,0);
  puVar9 = auStackY_a8;
  if (iVar2 == 0) goto LAB_140103d18;
  uVar5 = (longlong)iVar2 * 2 + 0x10;
  uVar7 = 0;
  if ((ulonglong)((longlong)iVar2 * 2) < uVar5) {
    uVar7 = uVar5;
  }
  puVar9 = auStackY_a8;
  if (uVar7 == 0) goto LAB_140103d18;
  if (uVar7 < 0x401) {
    uVar5 = uVar7 + 0xf;
    if (uVar5 <= uVar7) {
      uVar5 = 0xffffffffffffff0;
    }
    lVar1 = -(uVar5 & 0xfffffffffffffff0);
    puVar9 = auStackY_a8 + lVar1;
    puVar8 = auStackY_a8 + lVar1;
    puVar6 = (undefined4 *)((longlong)local_58 + lVar1);
    if (puVar6 == (undefined4 *)0x0) goto LAB_140103d18;
    *puVar6 = 0xcccc;
LAB_140103cd9:
    lpSrcStr = (LPCWSTR)(puVar6 + 4);
    puVar9 = puVar8;
  }
  else {
    puVar6 = (undefined4 *)_malloc_base(uVar7);
    lpSrcStr = (LPCWSTR)0x0;
    puVar9 = auStackY_a8;
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = 0xdddd;
      goto LAB_140103cd9;
    }
  }
  if (lpSrcStr == (LPCWSTR)0x0) goto LAB_140103d18;
  *(int *)(puVar9 + 0x28) = iVar2;
  *(LPCWSTR *)(puVar9 + 0x20) = lpSrcStr;
  *(undefined8 *)(puVar9 + -8) = 0x140103d00;
  iVar3 = MultiByteToWideChar(param_7,1,param_3,iVar3,*(LPWSTR *)(puVar9 + 0x20),
                              *(int *)(puVar9 + 0x28));
  if (iVar3 != 0) {
    *(undefined8 *)(puVar9 + 0x40) = 0;
    *(undefined8 *)(puVar9 + 0x38) = 0;
    *(undefined8 *)(puVar9 + 0x30) = 0;
    *(undefined4 *)(puVar9 + 0x28) = 0;
    *(undefined8 *)(puVar9 + 0x20) = 0;
    *(undefined8 *)(puVar9 + -8) = 0x140103d61;
    iVar3 = LCMapStringEx(param_1,param_2,lpSrcStr,iVar2,*(LPWSTR *)(puVar9 + 0x20),
                          *(int *)(puVar9 + 0x28),*(LPNLSVERSIONINFO *)(puVar9 + 0x30),
                          *(LPVOID *)(puVar9 + 0x38),*(LPARAM *)(puVar9 + 0x40));
    if (iVar3 != 0) {
      puVar10 = puVar9;
      if ((param_2 >> 10 & 1) == 0) {
        uVar5 = (longlong)iVar3 * 2 + 0x10;
        uVar7 = 0;
        if ((ulonglong)((longlong)iVar3 * 2) < uVar5) {
          uVar7 = uVar5;
        }
        if (uVar7 != 0) {
          if (uVar7 < 0x401) {
            uVar5 = uVar7 + 0xf;
            if (uVar5 <= uVar7) {
              uVar5 = 0xffffffffffffff0;
            }
            *(undefined8 *)(puVar9 + -8) = 0x140103dfd;
            lVar1 = -(uVar5 & 0xfffffffffffffff0);
            puVar10 = puVar9 + lVar1;
            puVar6 = (undefined4 *)(puVar9 + lVar1 + 0x50);
            if (puVar6 == (undefined4 *)0x0) goto LAB_140103ec6;
            *puVar6 = 0xcccc;
            puVar9 = puVar9 + lVar1;
LAB_140103e2c:
            lpWideCharStr = (LPCWSTR)(puVar6 + 4);
            puVar10 = puVar9;
          }
          else {
            *(undefined8 *)(puVar9 + -8) = 0x140103e1e;
            puVar6 = (undefined4 *)_malloc_base(uVar7);
            lpWideCharStr = (LPCWSTR)0x0;
            if (puVar6 != (undefined4 *)0x0) {
              *puVar6 = 0xdddd;
              goto LAB_140103e2c;
            }
          }
          if (lpWideCharStr != (LPCWSTR)0x0) {
            *(undefined8 *)(puVar10 + 0x40) = 0;
            *(undefined8 *)(puVar10 + 0x38) = 0;
            *(undefined8 *)(puVar10 + 0x30) = 0;
            *(int *)(puVar10 + 0x28) = iVar3;
            *(LPCWSTR *)(puVar10 + 0x20) = lpWideCharStr;
            *(undefined8 *)(puVar10 + -8) = 0x140103e65;
            iVar2 = LCMapStringEx(param_1,param_2,lpSrcStr,iVar2,*(LPWSTR *)(puVar10 + 0x20),
                                  *(int *)(puVar10 + 0x28),*(LPNLSVERSIONINFO *)(puVar10 + 0x30),
                                  *(LPVOID *)(puVar10 + 0x38),*(LPARAM *)(puVar10 + 0x40));
            if (iVar2 != 0) {
              if (param_6 == 0) {
                param_5 = 0;
                *(undefined8 *)(puVar10 + 0x38) = 0;
                *(undefined8 *)(puVar10 + 0x30) = 0;
                *(undefined4 *)(puVar10 + 0x28) = 0;
              }
              else {
                *(undefined8 *)(puVar10 + 0x38) = 0;
                *(undefined8 *)(puVar10 + 0x30) = 0;
                *(int *)(puVar10 + 0x28) = param_6;
              }
              *(undefined8 *)(puVar10 + 0x20) = param_5;
              *(undefined8 *)(puVar10 + -8) = 0x140103eb2;
              WideCharToMultiByte(param_7,0,lpWideCharStr,iVar3,*(LPSTR *)(puVar10 + 0x20),
                                  *(int *)(puVar10 + 0x28),*(LPCSTR *)(puVar10 + 0x30),
                                  *(LPBOOL *)(puVar10 + 0x38));
            }
            if (*(int *)(lpWideCharStr + -8) == 0xdddd) {
              *(undefined8 *)(puVar10 + -8) = 0x140103ec6;
              thunk_FUN_1401212e0(lpWideCharStr + -8);
            }
          }
        }
      }
      else if ((param_6 != 0) && (iVar3 <= param_6)) {
        *(undefined8 *)(puVar9 + 0x40) = 0;
        *(undefined8 *)(puVar9 + 0x38) = 0;
        *(undefined8 *)(puVar9 + 0x30) = 0;
        *(int *)(puVar9 + 0x28) = param_6;
        *(undefined8 *)(puVar9 + 0x20) = param_5;
        *(undefined8 *)(puVar9 + -8) = 0x140103db6;
        LCMapStringEx(param_1,param_2,lpSrcStr,iVar2,*(LPWSTR *)(puVar9 + 0x20),
                      *(int *)(puVar9 + 0x28),*(LPNLSVERSIONINFO *)(puVar9 + 0x30),
                      *(LPVOID *)(puVar9 + 0x38),*(LPARAM *)(puVar9 + 0x40));
      }
LAB_140103ec6:
      puVar9 = puVar10;
      if (*(int *)(lpSrcStr + -8) == 0xdddd) {
        *(undefined8 *)(puVar10 + -8) = 0x140103ed8;
        thunk_FUN_1401212e0(lpSrcStr + -8);
      }
      goto LAB_140103d18;
    }
  }
  if (*(int *)(lpSrcStr + -8) == 0xdddd) {
    *(undefined8 *)(puVar9 + -8) = 0x140103d16;
    thunk_FUN_1401212e0(lpSrcStr + -8);
  }
LAB_140103d18:
  uVar5 = local_58[0] ^ (ulonglong)local_58;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar9 + -8) = &UNK_140103d24;
  FUN_1400d3720(uVar5);
}

