/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00498567 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

int FUN_00498567(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_14;
  
  local_20 = 0;
  ___acrt_lock(8);
  for (iVar2 = 3; iVar2 != DAT_005216c0; iVar2 = iVar2 + 1) {
    iVar1 = *(int *)(DAT_005216c4 + iVar2 * 4);
    if (iVar1 != 0) {
      if ((*(uint *)(iVar1 + 0xc) >> 0xd & 1) != 0) {
        iVar1 = FUN_00490653(*(FILE **)(DAT_005216c4 + iVar2 * 4));
        if (iVar1 != -1) {
          local_20 = local_20 + 1;
        }
      }
      DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_005216c4 + iVar2 * 4) + 0x20));
      FUN_00495f00(*(LPVOID *)(DAT_005216c4 + iVar2 * 4));
      *(undefined4 *)(DAT_005216c4 + iVar2 * 4) = 0;
    }
  }
  FUN_00498609();
  ExceptionList = local_14;
  return local_20;
}

