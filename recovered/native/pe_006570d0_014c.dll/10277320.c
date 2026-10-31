/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10277320 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

int FUN_10277320(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_14;
  
  local_20 = 0;
  ___acrt_lock(8);
  for (iVar2 = 3; iVar2 != DAT_103a4d48; iVar2 = iVar2 + 1) {
    iVar1 = *(int *)(DAT_103a4d4c + iVar2 * 4);
    if (iVar1 != 0) {
      if ((*(uint *)(iVar1 + 0xc) >> 0xd & 1) != 0) {
        iVar1 = FUN_1026d543(*(undefined4 *)(DAT_103a4d4c + iVar2 * 4));
        if (iVar1 != -1) {
          local_20 = local_20 + 1;
        }
      }
      DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_103a4d4c + iVar2 * 4) + 0x20));
      FUN_10274120(*(undefined4 *)(DAT_103a4d4c + iVar2 * 4));
      *(undefined4 *)(DAT_103a4d4c + iVar2 * 4) = 0;
    }
  }
  FUN_102773c2();
  ExceptionList = local_14;
  return local_20;
}

