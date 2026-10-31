/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027aaf9 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    __alloc_osfhnd
   
   Library: Visual Studio 2019 Release */

int __cdecl __alloc_osfhnd(void)

{
  LPCRITICAL_SECTION p_Var1;
  int iVar2;
  uint uVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar4;
  void *local_14;
  
  ___acrt_lock(7);
  uVar3 = 0xffffffff;
  iVar4 = 0;
  do {
    if (0x7f < iVar4) {
LAB_1027ab67:
      FUN_1027ac03();
      ExceptionList = local_14;
      return uVar3;
    }
    p_Var1 = (LPCRITICAL_SECTION)(&DAT_103a5230)[iVar4];
    if (p_Var1 == (LPCRITICAL_SECTION)0x0) {
      iVar2 = ___acrt_lowio_create_handle_array();
      (&DAT_103a5230)[iVar4] = iVar2;
      if (iVar2 != 0) {
        DAT_103a5430 = DAT_103a5430 + 0x40;
        uVar3 = iVar4 << 6;
        ___acrt_lowio_lock_fh(uVar3);
        *(undefined1 *)((&DAT_103a5230)[(int)uVar3 >> 6] + 0x28) = 1;
      }
      goto LAB_1027ab67;
    }
    for (lpCriticalSection = p_Var1;
        lpCriticalSection != (LPCRITICAL_SECTION)&p_Var1[0x95].RecursionCount;
        lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[2].RecursionCount) {
      if (((uint)lpCriticalSection[1].LockSemaphore & 1) == 0) {
        EnterCriticalSection(lpCriticalSection);
        if (((uint)lpCriticalSection[1].LockSemaphore & 1) == 0) {
          uVar3 = iVar4 * 0x40 + ((int)lpCriticalSection - (int)p_Var1) / 0x38;
          iVar4 = (uVar3 & 0x3f) * 0x38;
          *(undefined1 *)((&DAT_103a5230)[(int)uVar3 >> 6] + 0x28 + iVar4) = 1;
          *(undefined4 *)((&DAT_103a5230)[(int)uVar3 >> 6] + 0x18 + iVar4) = 0xffffffff;
          goto LAB_1027ab67;
        }
        LeaveCriticalSection(lpCriticalSection);
      }
    }
    iVar4 = iVar4 + 1;
  } while( true );
}

