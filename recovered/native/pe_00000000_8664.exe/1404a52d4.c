/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404a52d4 */

int * FUN_1404a52d4(void)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  
  lVar2 = FUN_1404a25a8();
  if (((*(uint *)(lVar2 + 0x3a8) & DAT_140627c30) == 0) || (*(longlong *)(lVar2 + 0x90) == 0)) {
    FID_conflict___acrt_lock(5);
    piVar3 = *(int **)(lVar2 + 0x88);
    if (piVar3 != DAT_140632d18) {
      if (piVar3 != (int *)0x0) {
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if ((iVar1 == 1) && (piVar3 != (int *)0x1406276f0)) {
          FUN_1404a2310();
        }
      }
      piVar3 = DAT_140632d18;
      *(int **)(lVar2 + 0x88) = DAT_140632d18;
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + 1;
      iVar1 = *piVar3;
      iVar1 = *piVar3;
      iVar1 = *piVar3;
      UNLOCK();
    }
    FID_conflict___acrt_lock(5);
  }
  else {
    piVar3 = *(int **)(lVar2 + 0x88);
  }
  if (piVar3 != (int *)0x0) {
    return piVar3;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

