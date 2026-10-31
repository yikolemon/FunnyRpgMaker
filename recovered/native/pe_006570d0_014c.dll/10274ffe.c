/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10274ffe */

FARPROC __thiscall FUN_10274ffe(DWORD param_1,int param_2,LPCSTR param_3,int *param_4,int *param_5)

{
  int *piVar1;
  int iVar2;
  HMODULE hLibModule;
  BOOL BVar3;
  FARPROC pFVar4;
  FARPROC pFVar5;
  DWORD local_8;
  
  local_8 = param_1;
  do {
    if (param_4 == param_5) {
      pFVar5 = (FARPROC)0x0;
LAB_1027504d:
      ___acrt_lock(0xe);
      BVar3 = VirtualProtect(&DAT_103a9000,0x80,4,&local_8);
      if (BVar3 != 0) {
        pFVar4 = pFVar5;
        if (pFVar5 == (FARPROC)0x0) {
          pFVar4 = (FARPROC)0xffffffff;
        }
        LOCK();
        (&DAT_103a9000)[param_2] = pFVar4;
        UNLOCK();
        BVar3 = VirtualProtect(&DAT_103a9000,0x80,2,&local_8);
        if (BVar3 != 0) {
          ___acrt_unlock(0xe);
          return pFVar5;
        }
      }
                    /* WARNING: Subroutine does not return */
      _abort();
    }
    piVar1 = &DAT_103a50f8 + *param_4;
    hLibModule = (HMODULE)*piVar1;
    if (hLibModule == (HMODULE)0x0) {
      hLibModule = try_load_library_from_system_directory
                             ((wchar_t *)(&PTR_u_api_ms_win_core_datetime_l1_1_1_10325478)[*param_4]
                             );
      if (hLibModule != (HINSTANCE__ *)0x0) {
        LOCK();
        iVar2 = *piVar1;
        *piVar1 = (int)hLibModule;
        UNLOCK();
        if (iVar2 != 0) {
          FreeLibrary(hLibModule);
        }
        goto LAB_102750b7;
      }
      LOCK();
      *piVar1 = -1;
      UNLOCK();
    }
    else if (hLibModule != (HMODULE)0xffffffff) {
LAB_102750b7:
      pFVar5 = GetProcAddress(hLibModule,param_3);
      goto LAB_1027504d;
    }
    param_4 = param_4 + 1;
  } while( true );
}

