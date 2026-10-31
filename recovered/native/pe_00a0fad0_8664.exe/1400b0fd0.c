/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400b0fd0 */

undefined8
FUN_1400b0fd0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,uint *param_5,
             undefined8 param_6,undefined8 param_7)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  HANDLE hFile;
  LPCWSTR pWVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  uint *puVar13;
  longlong in_stack_fffffffffffffd38;
  undefined4 uVar15;
  undefined8 uVar14;
  WCHAR local_2a8 [264];
  FILETIME local_98;
  FILETIME local_90;
  FILETIME local_88;
  longlong local_80;
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
  GetCurrentDirectoryW(0x104,local_2a8);
  uVar12 = (ulonglong)*param_5;
  if ((uVar12 != 0xffffffff) && (param_5[1] != 0xffffffff)) {
    local_50 = (LPCWSTR)FUN_1400afcf6((ulonglong)*(uint *)(local_68 + uVar12) + local_60);
    CreateDirectoryW(local_50,(LPSECURITY_ATTRIBUTES)0x0);
    thunk_FUN_1400ddcd0(local_50);
    local_50 = (LPCWSTR)FUN_1400afcf6((ulonglong)*(uint *)(local_68 + uVar12) + local_60);
    SetCurrentDirectoryW(local_50);
    thunk_FUN_1400ddcd0(local_50);
  }
  if (param_5[2] != 0) {
    puVar13 = (uint *)((ulonglong)param_5[3] + local_68);
    local_80 = (ulonglong)(1 < *(ushort *)(local_70 + 2)) * 4 + 0x28;
    pWVar9 = (LPCWSTR)0x0;
    do {
      local_50 = pWVar9;
      if ((puVar13[1] & 0x10) == 0) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 4) < DAT_1401cca18) && (FUN_1400dd790(&DAT_1401cca18), DAT_1401cca18 == -1))
        {
          DAT_1401cca10 = _malloc_base(0x1000000);
          _Init_thread_footer(&DAT_1401cca18);
        }
        if (DAT_1401cca10 == 0) {
          return 0xffffffff;
        }
        uVar7 = FUN_1400afcf6((ulonglong)*puVar13 + local_60);
        cVar4 = FUN_1400b6615(uVar7);
        iVar5 = (int)local_50;
        if (cVar4 == '\0') {
          local_58 = (LPCWSTR)uVar7;
          uVar7 = FUN_140114300(uVar7,&DAT_140173b02);
          thunk_FUN_1400ddcd0(local_58);
          lVar8 = local_70;
          uVar15 = (undefined4)((ulonglong)in_stack_fffffffffffffd38 >> 0x20);
          if (puVar13[9] != 0) {
            iVar5 = FUN_1401144b0(param_6);
            iVar10 = puVar13[8] + *(int *)(lVar8 + 8);
            if (iVar5 != iVar10) {
              FUN_140113f48(param_6,iVar10,0);
            }
            lVar3 = local_70;
            uVar15 = (undefined4)((ulonglong)in_stack_fffffffffffffd38 >> 0x20);
            uVar1 = *(ushort *)(lVar8 + 2);
            if ((uVar1 < 2) || (uVar6 = puVar13[10], uVar6 == 0xffffffff)) {
              uVar6 = puVar13[9];
              if (uVar6 != 0) {
                uVar11 = 0;
                do {
                  uVar2 = uVar6 - uVar11;
                  if (0xffffff < uVar6 - uVar11) {
                    uVar2 = 0x1000000;
                  }
                  iVar5 = uVar6 + uVar11;
                  if (*(ushort *)(lVar3 + 2) < 5) {
                    iVar5 = -1;
                  }
                  in_stack_fffffffffffffd38 =
                       CONCAT44((int)((ulonglong)in_stack_fffffffffffffd38 >> 0x20),iVar5);
                  FUN_1400aff7c(DAT_1401cca10,uVar2,param_6,param_7,in_stack_fffffffffffffd38);
                  FUN_140116e20(DAT_1401cca10,uVar2,1,uVar7);
                  uVar15 = (undefined4)((ulonglong)in_stack_fffffffffffffd38 >> 0x20);
                  uVar11 = uVar2 + uVar11;
                  uVar6 = puVar13[9];
                } while (uVar11 < uVar6);
              }
            }
            else {
              uVar11 = puVar13[9];
              lVar8 = _malloc_base(uVar11 + uVar6);
              if (uVar1 < 5) {
                uVar11 = 0xffffffff;
              }
              uVar14 = CONCAT44(uVar15,uVar11);
              FUN_1400aff7c(lVar8,uVar6,param_6,param_7,uVar14);
              uVar15 = (undefined4)((ulonglong)uVar14 >> 0x20);
              uVar6 = puVar13[10];
              FUN_1400b1612(lVar8,(ulonglong)uVar6 + lVar8);
              FUN_140116e20((ulonglong)uVar6 + lVar8,puVar13[9],1,uVar7);
              thunk_FUN_1401212e0(lVar8);
            }
          }
          FUN_140115998(uVar7);
          local_58 = (LPCWSTR)FUN_1400afcf6((ulonglong)*puVar13 + local_60);
          in_stack_fffffffffffffd38 = CONCAT44(uVar15,3);
          hFile = CreateFileW(local_58,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
          thunk_FUN_1400ddcd0(local_58);
          local_98 = *(FILETIME *)(puVar13 + 2);
          local_90 = *(FILETIME *)(puVar13 + 4);
          local_88 = *(FILETIME *)(puVar13 + 6);
          SetFileTime(hFile,&local_98,&local_90,&local_88);
          CloseHandle(hFile);
          local_58 = (LPCWSTR)FUN_1400afcf6((ulonglong)*puVar13 + local_60);
          SetFileAttributesW(local_58,puVar13[1] & 0xfffffff9);
          thunk_FUN_1400ddcd0(local_58);
          iVar5 = (int)local_50;
        }
      }
      else {
        in_stack_fffffffffffffd38 = (ulonglong)puVar13[8] + local_78;
        FUN_1400b0fd0(local_60,local_78,local_68,local_70,in_stack_fffffffffffffd38,param_6,param_7)
        ;
        iVar5 = (int)local_50;
      }
      pWVar9 = (LPCWSTR)(ulonglong)(iVar5 + 1U);
      puVar13 = (uint *)((longlong)puVar13 + local_80);
    } while (iVar5 + 1U < param_5[2]);
  }
  SetCurrentDirectoryW(local_2a8);
  return 0;
}

