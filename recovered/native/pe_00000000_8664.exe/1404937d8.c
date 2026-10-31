/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404937d8 */

void FUN_1404937d8(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  short *psVar4;
  
  FID_conflict___acrt_lock(*param_2);
  FUN_1404930e0(*(undefined8 *)*param_3,*(undefined8 *)(*(longlong *)param_3[1] + 0x90));
  lVar3 = FUN_140492e18(*(undefined8 *)*param_3,*(undefined4 *)param_3[3],*(undefined8 *)param_3[4])
  ;
  *(longlong *)param_3[2] = lVar3;
  if (lVar3 == 0) {
    __acrt_release_locale_ref(*(undefined8 *)*param_3);
    __acrt_free_locale(*(undefined8 *)*param_3);
  }
  else {
    psVar4 = *(short **)param_3[4];
    if (psVar4 != (short *)0x0) {
      lVar3 = 0x10 - (longlong)psVar4;
      do {
        sVar1 = *psVar4;
        sVar2 = *(short *)((longlong)psVar4 + (longlong)(".?AV?$collate@G@std@@" + lVar3));
        if (sVar1 != sVar2) break;
        psVar4 = psVar4 + 1;
      } while (sVar2 != 0);
      if (sVar1 != sVar2) {
        LOCK();
        DAT_14063263c = 1;
        UNLOCK();
      }
    }
    _updatetlocinfoEx_nolock(*(longlong *)param_3[1] + 0x90,*(undefined8 *)*param_3);
    __acrt_release_locale_ref(*(undefined8 *)*param_3);
    if (((*(byte *)(*(longlong *)param_3[1] + 0x3a8) & 2) == 0) && (((byte)DAT_140627c30 & 1) == 0))
    {
      _updatetlocinfoEx_nolock(&DAT_140632718,*(undefined8 *)(*(longlong *)param_3[1] + 0x90));
      s___AV__time_get__WV__istreambuf_i_140627320._24_8_ = *(undefined8 *)(DAT_140632718 + 0xf8);
      s___AV__money_put__WV__ostreambuf__140627230._72_8_ = *(undefined8 *)DAT_140632718;
      s___AV__collate_G_std___1406274c8._20_4_ = *(undefined4 *)(DAT_140632718 + 8);
    }
  }
  FID_conflict___acrt_lock(*param_4);
  return;
}

