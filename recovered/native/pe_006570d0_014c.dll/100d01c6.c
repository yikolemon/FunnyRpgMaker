/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d01c6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_100d01c6(undefined4 param_1,int param_2,undefined4 param_3,code *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  DWORD DVar3;
  int iVar4;
  int iVar5;
  LPWSTR lpBuffer;
  bool bVar6;
  DWORD DStack_688;
  undefined4 *local_684;
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
  undefined1 local_424 [520];
  WCHAR local_21c [260];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&DStack_688;
  local_684 = (undefined4 *)0x0;
  lpBuffer = local_21c;
  DVar3 = GetEnvironmentVariableW(L"WINDIR",lpBuffer,0x104);
  if (0xffffefff < param_2 - 0x1001U) {
    iVar4 = FUN_100cfe8c(&local_684,param_1,param_2,param_3);
    puVar1 = local_684;
    bVar6 = false;
    if ((iVar4 != 0) && (0xfffffefc < DVar3 - 0x104)) {
      iVar4 = 0x104;
      do {
        if (*lpBuffer == L'\0') {
          iVar2 = 0;
          goto LAB_100d0294;
        }
        lpBuffer = lpBuffer + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    goto LAB_100d021b;
  }
  SetLastError(0x57);
  goto LAB_100d0219;
  while( true ) {
    lpBuffer[iVar5] = L"\\sysnative\\rundll32.exe"[iVar5];
    iVar2 = iVar5 + 1;
    if (iVar4 == iVar5 + 1) break;
LAB_100d0294:
    iVar5 = iVar2;
    if (L"\\sysnative\\rundll32.exe"[iVar5] == L'\0') {
      lpBuffer[iVar5] = L'\0';
      bVar6 = false;
      iVar4 = MultiByteToWideChar(0,0,(LPCSTR)(local_684 + 3),-1,local_62c,0x104);
      if (0xfffffefc < iVar4 - 0x104U) {
        iVar4 = FUN_100d03f5(local_424,0x104,L"rundll32.exe \"%s\",#1",local_62c);
        if (-1 < iVar4) {
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
          bVar6 = false;
          iVar4 = (*param_4)(local_21c,local_424,_DAT_10299a30,_UNK_10299a34,_UNK_10299a38,
                             _UNK_10299a3c,0,0,&local_680,&local_63c);
          if (iVar4 != 0) {
            iVar4 = FUN_100cfabf(local_63c,&DAT_10299a20,puVar1,*puVar1);
            if (iVar4 == 0) {
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
              bVar6 = DStack_688 == 0;
            }
          }
        }
      }
      goto LAB_100d021b;
    }
  }
  lpBuffer[iVar5] = L'\0';
LAB_100d0219:
  bVar6 = false;
LAB_100d021b:
  FUN_100d0106(&local_684);
  if (DAT_10388d00 != (local_14 ^ (uint)&DStack_688)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return bVar6;
}

