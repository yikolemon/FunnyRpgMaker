/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c0c80 */

void FUN_1801c0c80(uint *param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_180402640 ^ (ulonglong)auStack_88;
  ppuVar3 = &PTR_s_Default_180361bd6_7_180328c48;
  lVar5 = 0;
  puVar4 = &DAT_1803861e4;
  do {
    if (*(uint *)(ppuVar3 + -1) == (*param_1 & 0xe000)) {
      lVar6 = 0xf;
      if (lVar5 == 0) {
        lVar6 = 0;
      }
      puVar4 = *ppuVar3 + lVar6;
      goto LAB_1801c0ce7;
    }
    lVar5 = lVar5 + 1;
    ppuVar3 = ppuVar3 + 3;
  } while (lVar5 != 5);
  lVar5 = 5;
LAB_1801c0ce7:
  cVar2 = FUN_180138722("Sizing Policy",puVar4,0);
  if (cVar2 != '\0') {
    lVar6 = 0;
    do {
      local_68 = 0;
      cVar2 = FUN_1801391f6(*(undefined8 *)((longlong)&PTR_s_Default_180361bd6_7_180328c48 + lVar6),
                            lVar5 * 0x18 == lVar6,0,&local_68);
      if (cVar2 != '\0') {
        *param_1 = *param_1 & 0xffff1fff | *(uint *)((longlong)&DAT_180328c40 + lVar6);
      }
      lVar6 = lVar6 + 0x18;
    } while (lVar6 != 0x78);
    FUN_180138f6c();
  }
  FUN_180119893(0,DAT_1802bb8e0);
  FUN_18013320f(&DAT_18037972e);
  cVar2 = FUN_18011aab1();
  if (cVar2 != '\0') {
    fVar7 = (float)FUN_180116c08();
    FUN_1801166df(fVar7 * DAT_1802dbb44);
    fVar7 = DAT_1802dbb2c;
    lVar5 = 0;
    do {
      FUN_180137ca1();
      uVar1 = *(undefined8 *)((longlong)&PTR_s_Use_default_sizing_policy____ImG_180328c50 + lVar5);
      FUN_1801330a5("%s:",*(undefined8 *)((longlong)&PTR_s_Default_180361bd6_7_180328c48 + lVar5));
      FUN_180137ca1();
      fVar8 = (float)FUN_180119e82();
      lVar6 = FUN_18010128e();
      FUN_180119f0f(*(float *)(lVar6 + 0x7c) * fVar7 + fVar8);
      FUN_18013309a(uVar1,0);
      lVar5 = lVar5 + 0x18;
    } while (lVar5 != 0x78);
    FUN_1801167a4();
    thunk_FUN_18010f900();
  }
  if (DAT_180402640 == (local_60 ^ (ulonglong)auStack_88)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_60 ^ (ulonglong)auStack_88);
}

