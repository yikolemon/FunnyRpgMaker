/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041b245 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0041b245(int param_1,int param_2,int param_3,undefined *param_4)

{
  SIZE_T *pSVar1;
  int iVar2;
  bool bVar3;
  DWORD DVar4;
  int iVar5;
  undefined3 extraout_var;
  int iVar6;
  LPWSTR lpBuffer;
  bool bVar7;
  DWORD DStack_688;
  SIZE_T *local_684;
  undefined4 local_680;
  undefined4 local_67c;
  undefined4 uStack_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined4 local_66c;
  undefined4 uStack_668;
  undefined4 uStack_664;
  undefined4 uStack_660;
  undefined4 local_65c;
  undefined4 uStack_658;
  undefined4 uStack_654;
  undefined4 uStack_650;
  undefined4 local_64c;
  undefined4 uStack_648;
  undefined4 uStack_644;
  undefined4 uStack_640;
  HANDLE local_63c;
  HANDLE pvStack_638;
  undefined4 uStack_634;
  undefined4 uStack_630;
  WCHAR local_62c [260];
  undefined2 ***local_424 [130];
  WCHAR local_21c [260];
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&DStack_688;
  local_684 = (SIZE_T *)0x0;
  lpBuffer = local_21c;
  DVar4 = GetEnvironmentVariableW(L"WINDIR",lpBuffer,0x104);
  if (0xffffefff < param_2 - 0x1001U) {
    iVar5 = FUN_0041af0b(&local_684,param_1,param_2,param_3);
    pSVar1 = local_684;
    bVar7 = false;
    if ((iVar5 != 0) && (0xfffffefc < DVar4 - 0x104)) {
      iVar5 = 0x104;
      do {
        if (*lpBuffer == L'\0') {
          iVar2 = 0;
          goto LAB_0041b313;
        }
        lpBuffer = lpBuffer + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    goto LAB_0041b29a;
  }
  SetLastError(0x57);
  goto LAB_0041b298;
  while( true ) {
    lpBuffer[iVar6] = L"\\sysnative\\rundll32.exe"[iVar6];
    iVar2 = iVar6 + 1;
    if (iVar5 == iVar6 + 1) break;
LAB_0041b313:
    iVar6 = iVar2;
    if (L"\\sysnative\\rundll32.exe"[iVar6] == L'\0') {
      lpBuffer[iVar6] = L'\0';
      bVar7 = false;
      iVar5 = MultiByteToWideChar(0,0,(LPCSTR)(local_684 + 3),-1,local_62c,0x104);
      if (0xfffffefc < iVar5 - 0x104U) {
        iVar5 = FUN_0041b474(local_424,0x104,0x504dfc);
        if (-1 < iVar5) {
          local_63c = (HANDLE)0x0;
          pvStack_638 = (HANDLE)0x0;
          uStack_634 = 0;
          uStack_630 = 0;
          local_67c = 0;
          uStack_678 = 0;
          uStack_674 = 0;
          uStack_670 = 0;
          local_66c = 0;
          uStack_668 = 0;
          uStack_664 = 0;
          uStack_660 = 0;
          local_65c = 0;
          uStack_658 = 0;
          uStack_654 = 0;
          uStack_650 = 0;
          local_64c = 0;
          uStack_648 = 0;
          uStack_644 = 0;
          uStack_640 = 0;
          local_680 = 0x44;
          bVar7 = false;
          iVar5 = (*(code *)param_4)(local_21c,local_424,_DAT_004acec0,_UNK_004acec4,_UNK_004acec8,
                                     _UNK_004acecc,0,0,&local_680,&local_63c);
          if (iVar5 != 0) {
            bVar3 = FUN_0041acab(local_63c,(undefined4 *)&DAT_004aceac,pSVar1,*pSVar1);
            if (CONCAT31(extraout_var,bVar3) == 0) {
              TerminateProcess(local_63c,0xffffffff);
              CloseHandle(local_63c);
              CloseHandle(pvStack_638);
            }
            else {
              ResumeThread(pvStack_638);
              WaitForSingleObject(local_63c,0xffffffff);
              DStack_688 = 500;
              GetExitCodeProcess(local_63c,&DStack_688);
              CloseHandle(local_63c);
              CloseHandle(pvStack_638);
              bVar7 = DStack_688 == 0;
            }
          }
        }
      }
      goto LAB_0041b29a;
    }
  }
  lpBuffer[iVar6] = L'\0';
LAB_0041b298:
  bVar7 = false;
LAB_0041b29a:
  FUN_0041b185(&local_684);
  if (DAT_0050e8c0 != (local_14 ^ (uint)&DStack_688)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&DStack_688);
  }
  return bVar7;
}

