/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404a3748 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1404a3748(uint param_1,undefined8 param_2,uint *param_3,uint *param_4)

{
  wchar_t *_Str1;
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 local_res18 [2];
  
  do {
    if (param_3 == param_4) {
      lVar3 = 0;
LAB_1404a383a:
      FID_conflict___acrt_lock(0xe);
      local_res18[0] = 0;
      iVar1 = (*(code *)s_LeaveCriticalSection_14059e248._0_8_)(&DAT_1406614d0,0x100,4,local_res18);
      if (iVar1 != 0) {
        lVar2 = lVar3;
        if (lVar3 == 0) {
          lVar2 = -1;
        }
        LOCK();
        (&DAT_1406614d0)[param_1] = lVar2;
        UNLOCK();
        iVar1 = (*(code *)s_LeaveCriticalSection_14059e248._0_8_)
                          (&DAT_1406614d0,0x100,2,local_res18);
        if (iVar1 != 0) {
          FID_conflict___acrt_lock(0xe);
          return lVar3;
        }
      }
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar4 = (ulonglong)*param_3;
    lVar3 = *(longlong *)(&DAT_140632720 + uVar4 * 8);
    if (lVar3 == 0) {
      _Str1 = *(wchar_t **)(&DAT_140564ae0 + uVar4 * 8);
      lVar3 = (*(code *)s_GetWindowsDirectoryW_14059e0ca._14_8_)(_Str1,0,0x800);
      if ((lVar3 != 0) ||
         ((((iVar1 = (*_DAT_14059df60)(), iVar1 == 0x57 &&
            (iVar1 = wcsncmp(_Str1,L"ms-win-security-systemfunctions-l1-1-0",7), iVar1 != 0)) &&
           (iVar1 = wcsncmp(_Str1,L"-0",7), iVar1 != 0)) &&
          (lVar3 = (*(code *)s_GetWindowsDirectoryW_14059e0ca._14_8_)(_Str1,0,0), lVar3 != 0)))) {
        LOCK();
        lVar2 = *(longlong *)(&DAT_140632720 + uVar4 * 8);
        *(longlong *)(&DAT_140632720 + uVar4 * 8) = lVar3;
        UNLOCK();
        if (lVar2 != 0) {
          (*(code *)s_GetFileInformationByHandleEx_14059de74._12_8_)(lVar3);
        }
        goto LAB_1404a38e0;
      }
      LOCK();
      *(undefined8 *)(&DAT_140632720 + uVar4 * 8) = 0xffffffffffffffff;
      UNLOCK();
    }
    else if (lVar3 != -1) {
LAB_1404a38e0:
      lVar3 = (*(code *)s_GetProcAddress_14059dfac._4_8_)(lVar3,param_2);
      goto LAB_1404a383a;
    }
    param_3 = param_3 + 1;
  } while( true );
}

