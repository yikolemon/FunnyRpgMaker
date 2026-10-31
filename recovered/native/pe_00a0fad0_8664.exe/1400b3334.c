/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400b3334 */

undefined8
FUN_1400b3334(longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong *param_5,
             undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  HANDLE hFile;
  int iVar4;
  LPCWSTR pWVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  WCHAR local_298 [260];
  FILETIME local_90;
  FILETIME local_88;
  FILETIME local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  LPCWSTR local_58;
  LPCWSTR local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_78 = param_2;
  local_70 = param_4;
  local_68 = param_3;
  local_60 = param_1;
  GetCurrentDirectoryW(0x104,local_298);
  lVar3 = *param_5;
  if ((lVar3 != -1) && (param_5[1] != -1)) {
    local_50 = (LPCWSTR)FUN_1400afcf6(*(longlong *)(local_68 + lVar3) + local_60);
    CreateDirectoryW(local_50,(LPSECURITY_ATTRIBUTES)0x0);
    thunk_FUN_1400ddcd0(local_50);
    local_50 = (LPCWSTR)FUN_1400afcf6(*(longlong *)(local_68 + lVar3) + local_60);
    SetCurrentDirectoryW(local_50);
    thunk_FUN_1400ddcd0();
  }
  if (param_5[2] != 0) {
    plVar7 = (longlong *)(param_5[3] + local_68);
    pWVar5 = (LPCWSTR)0x0;
    do {
      local_50 = pWVar5;
      if ((*(byte *)(plVar7 + 1) & 0x10) == 0) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 4) < DAT_1401cca28) && (FUN_1400dd790(&DAT_1401cca28), DAT_1401cca28 == -1))
        {
          DAT_1401cca20 = _malloc_base(0x1000000);
          _Init_thread_footer(&DAT_1401cca28);
        }
        if (DAT_1401cca20 == 0) {
          return 0xffffffff;
        }
        uVar2 = FUN_1400afcf6(*plVar7 + local_60);
        cVar1 = FUN_1400b6615(uVar2);
        iVar4 = (int)local_50;
        if (cVar1 == '\0') {
          local_58 = (LPCWSTR)uVar2;
          uVar2 = FUN_140114300(uVar2,&DAT_140173b02);
          thunk_FUN_1400ddcd0(local_58);
          if (plVar7[6] != 0) {
            lVar3 = FUN_140114548(param_6);
            lVar6 = plVar7[5] + *(longlong *)(local_70 + 8);
            if (lVar3 != (int)lVar6) {
              FUN_140113fe4(param_6,lVar6,0);
            }
            uVar10 = plVar7[6];
            lVar3 = plVar7[7];
            if (lVar3 == -1) {
              if (uVar10 != 0) {
                uVar9 = 0;
                do {
                  uVar8 = uVar10 - uVar9;
                  if (0xffffff < uVar8) {
                    uVar8 = 0x1000000;
                  }
                  FUN_1400b246c(DAT_1401cca20,uVar8,param_6,param_7,uVar10 + uVar9);
                  FUN_1400b21f0(DAT_1401cca20,uVar8,uVar2);
                  uVar9 = uVar8 + uVar9;
                  uVar10 = plVar7[6];
                } while (uVar9 < uVar10);
              }
            }
            else {
              lVar6 = _malloc_base(uVar10 + lVar3);
              FUN_1400b246c(lVar6,lVar3,param_6,param_7,uVar10);
              lVar3 = plVar7[7];
              FUN_1400b1612(lVar6,lVar3 + lVar6);
              FUN_1400b21f0(lVar3 + lVar6,plVar7[6],uVar2);
              thunk_FUN_1401212e0(lVar6);
            }
          }
          FUN_140115998(uVar2);
          local_58 = (LPCWSTR)FUN_1400afcf6(*plVar7 + local_60);
          hFile = CreateFileW(local_58,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
          thunk_FUN_1400ddcd0(local_58);
          local_90 = *(FILETIME *)(plVar7 + 2);
          local_88 = *(FILETIME *)(plVar7 + 3);
          local_80 = *(FILETIME *)(plVar7 + 4);
          SetFileTime(hFile,&local_90,&local_88,&local_80);
          CloseHandle(hFile);
          local_58 = (LPCWSTR)FUN_1400afcf6(*plVar7 + local_60);
          SetFileAttributesW(local_58,*(uint *)(plVar7 + 1) & 0xfffffff9);
          thunk_FUN_1400ddcd0(local_58);
          iVar4 = (int)local_50;
        }
      }
      else {
        FUN_1400b3334(local_60,local_78,local_68,local_70,plVar7[5] + local_78,param_6,param_7);
        iVar4 = (int)local_50;
      }
      pWVar5 = (LPCWSTR)(ulonglong)(iVar4 + 1);
      plVar7 = plVar7 + 8;
    } while (pWVar5 < (LPCWSTR)param_5[2]);
  }
  SetCurrentDirectoryW(local_298);
  return 0;
}

