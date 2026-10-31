/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801599d0 */

ulonglong FUN_1801599d0(longlong param_1,ulonglong param_2,float param_3)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  float local_a0 [2];
  float local_98 [2];
  ulonglong local_90;
  
  local_90 = DAT_180402640 ^ (ulonglong)auStack_c8;
  lVar3 = FUN_18010128e();
  if (param_2 != 0 && param_3 != 0.0) {
    uVar5 = 0;
    fVar6 = param_3;
    do {
      local_a8 = 0xbf800000;
      FUN_1801023ca(local_98,*(undefined8 *)(param_1 + uVar5 * 8),0,0);
      param_3 = *(float *)(lVar3 + 0x4c) + *(float *)(lVar3 + 0x4c) + local_98[0];
      if (param_3 <= fVar6) {
        param_3 = fVar6;
      }
      uVar5 = uVar5 + 1;
      fVar6 = param_3;
    } while (param_2 != uVar5);
  }
  FUN_180119e05(local_98);
  fVar6 = local_98[0];
  FUN_180111069(local_a0);
  uVar1 = DAT_1802bb8e0;
  if (param_2 == 0) {
    uVar5 = 0xffffffffffffffff;
  }
  else {
    uVar5 = 0xffffffffffffffff;
    uVar4 = 0;
    fVar7 = param_3;
    do {
      FUN_18011810d(uVar4 & 0xffffffff);
      if ((param_3 == 0.0) && (!NAN(param_3))) {
        local_a8 = 0xbf800000;
        FUN_1801023ca(local_98,*(undefined8 *)(param_1 + uVar4 * 8),0,0);
        fVar7 = *(float *)(lVar3 + 0x4c) + *(float *)(lVar3 + 0x4c) + local_98[0];
      }
      local_98[1] = 0.0;
      local_98[0] = fVar7;
      cVar2 = FUN_180134257(*(undefined8 *)(param_1 + uVar4 * 8),local_98);
      if (cVar2 != '\0') {
        uVar5 = uVar4;
      }
      FUN_180110cdb(local_98);
      uVar4 = uVar4 + 1;
      if ((uVar4 < param_2) &&
         (local_98[0] + *(float *)(lVar3 + 0x5c) + fVar7 < fVar6 + local_a0[0])) {
        FUN_180119893(0,uVar1);
      }
      FUN_18011834f();
    } while (param_2 != uVar4);
  }
  if (DAT_180402640 != (local_90 ^ (ulonglong)auStack_c8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_90 ^ (ulonglong)auStack_c8);
  }
  return uVar5;
}

