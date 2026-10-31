/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140095564 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140095564(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  short *psVar4;
  
  __acrt_lock(*param_2);
  FUN_140094e6c(*(undefined8 **)*param_3,*(undefined8 **)(*(longlong *)param_3[1] + 0x90));
  lVar3 = FUN_140094ba4(*(longlong *)*param_3,*(int *)param_3[3],*(wchar_t **)param_3[4]);
  *(longlong *)param_3[2] = lVar3;
  if (lVar3 == 0) {
    __acrt_release_locale_ref(*(longlong *)*param_3);
    __acrt_free_locale(*(LPVOID *)*param_3);
  }
  else {
    psVar4 = *(short **)param_3[4];
    if (psVar4 != (short *)0x0) {
      lVar3 = (longlong)&DAT_14013bd68 - (longlong)psVar4;
      do {
        sVar1 = *psVar4;
        sVar2 = *(short *)((longlong)psVar4 + lVar3);
        if (sVar1 != sVar2) break;
        psVar4 = psVar4 + 1;
      } while (sVar2 != 0);
      if (sVar1 != sVar2) {
        LOCK();
        DAT_140142c48 = 1;
        UNLOCK();
      }
    }
    _updatetlocinfoEx_nolock
              ((undefined8 *)(*(longlong *)param_3[1] + 0x90),*(undefined ***)*param_3);
    __acrt_release_locale_ref(*(longlong *)*param_3);
    if (((*(byte *)(*(longlong *)param_3[1] + 0x3a8) & 2) == 0) && (((byte)DAT_14013c4a0 & 1) == 0))
    {
      _updatetlocinfoEx_nolock(&DAT_1401431e8,*(undefined ***)(*(longlong *)param_3[1] + 0x90));
      PTR_PTR_14013bbc8 = (undefined *)DAT_1401431e8[0x1f];
      PTR_DAT_14013bb08 = (undefined *)*DAT_1401431e8;
      _DAT_14013bd6c = *(undefined4 *)(DAT_1401431e8 + 1);
    }
  }
  __acrt_unlock(*param_4);
  return;
}

