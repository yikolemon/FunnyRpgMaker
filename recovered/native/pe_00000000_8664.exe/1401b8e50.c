/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401b8e50 */

/* Library Function - Single Match
    _alloc_osfhnd
   
   Library: Visual Studio 2019 Release */

int __cdecl _alloc_osfhnd(void)

{
  LPCRITICAL_SECTION p_Var1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  
  __acrt_lock(7);
  uVar3 = 0xffffffff;
  iVar4 = 0;
  do {
    if (0x7f < iVar4) {
LAB_1401b8f67:
      __acrt_unlock(7);
      return uVar3;
    }
    p_Var1 = (LPCRITICAL_SECTION)(&DAT_140f32db0)[iVar4];
    if (p_Var1 == (LPCRITICAL_SECTION)0x0) {
      lVar2 = __acrt_lowio_create_handle_array();
      (&DAT_140f32db0)[iVar4] = lVar2;
      if (lVar2 != 0) {
        DAT_140f331b0 = DAT_140f331b0 + 0x40;
        uVar3 = iVar4 << 6;
        __acrt_lowio_lock_fh(uVar3);
        *(undefined1 *)((&DAT_140f32db0)[(longlong)(int)uVar3 >> 6] + 0x38) = 1;
      }
      goto LAB_1401b8f67;
    }
    for (lpCriticalSection = p_Var1;
        lpCriticalSection != (LPCRITICAL_SECTION)&p_Var1[0x73].LockCount;
        lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[1].SpinCount) {
      if (((ulonglong)lpCriticalSection[1].OwningThread & 1) == 0) {
        EnterCriticalSection(lpCriticalSection);
        if (((ulonglong)lpCriticalSection[1].OwningThread & 1) == 0) {
          uVar3 = (int)(((longlong)lpCriticalSection - (longlong)p_Var1) / 0x48) + iVar4 * 0x40;
          *(undefined1 *)
           ((&DAT_140f32db0)[(longlong)(int)uVar3 >> 6] + 0x38 + (ulonglong)(uVar3 & 0x3f) * 0x48) =
               1;
          *(undefined8 *)
           ((&DAT_140f32db0)[(longlong)(int)uVar3 >> 6] + 0x28 + (ulonglong)(uVar3 & 0x3f) * 0x48) =
               0xffffffffffffffff;
          goto LAB_1401b8f67;
        }
        LeaveCriticalSection(lpCriticalSection);
      }
    }
    iVar4 = iVar4 + 1;
  } while( true );
}

