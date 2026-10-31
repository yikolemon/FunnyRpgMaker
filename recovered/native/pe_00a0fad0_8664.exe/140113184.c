/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140113184 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140113184(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  short *psVar4;
  
  __acrt_lock(*param_2);
  FUN_140112a8c(*(undefined8 *)*param_3,*(undefined8 *)(*(longlong *)param_3[1] + 0x90));
  lVar3 = FUN_1401127c4(*(undefined8 *)*param_3,*(undefined4 *)param_3[3],*(undefined8 *)param_3[4])
  ;
  *(longlong *)param_3[2] = lVar3;
  if (lVar3 == 0) {
    __acrt_release_locale_ref(*(undefined8 *)*param_3);
    __acrt_free_locale(*(undefined8 *)*param_3);
  }
  else {
    psVar4 = *(short **)param_3[4];
    if (psVar4 != (short *)0x0) {
      lVar3 = (longlong)&DAT_1401ca7a8 - (longlong)psVar4;
      do {
        sVar1 = *psVar4;
        sVar2 = *(short *)((longlong)psVar4 + lVar3);
        if (sVar1 != sVar2) break;
        psVar4 = psVar4 + 1;
      } while (sVar2 != 0);
      if (sVar1 != sVar2) {
        LOCK();
        DAT_140354b80 = 1;
        UNLOCK();
      }
    }
    _updatetlocinfoEx_nolock(*(longlong *)param_3[1] + 0x90,*(undefined8 *)*param_3);
    __acrt_release_locale_ref(*(undefined8 *)*param_3);
    if (((*(byte *)(*(longlong *)param_3[1] + 0x3a8) & 2) == 0) && (((byte)DAT_1401caf00 & 1) == 0))
    {
      _updatetlocinfoEx_nolock(&DAT_140355028,*(undefined8 *)(*(longlong *)param_3[1] + 0x90));
      PTR_PTR_1401ca618 = (undefined *)DAT_140355028[0x1f];
      PTR_DAT_1401ca558 = (undefined *)*DAT_140355028;
      _DAT_1401ca7ac = *(undefined4 *)(DAT_140355028 + 1);
    }
  }
  __acrt_unlock(*param_4);
  return;
}

