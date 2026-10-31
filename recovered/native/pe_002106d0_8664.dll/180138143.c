/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180138143 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180138143(undefined8 *param_1,ulonglong param_2,int param_3,float *param_4,
                       float *param_5,undefined4 param_6,undefined8 param_7,float param_8,
                       float param_9,uint param_10)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  char local_c2;
  char local_c1;
  ulonglong local_c0;
  
  lVar2 = DAT_180419160;
  local_c0 = DAT_180402640 ^ (ulonglong)auStack_128;
  lVar1 = *(longlong *)(DAT_180419160 + 0x1608);
  uVar6 = 0;
  cVar3 = FUN_1801116b6(param_1,param_2,0,2);
  if (cVar3 == '\0') goto LAB_18013844f;
  if (param_3 == 1) {
    fVar8 = 0.0;
    fVar9 = param_8;
  }
  else {
    fVar9 = 0.0;
    fVar8 = param_8;
  }
  local_d8 = (float)*param_1;
  fStack_d4 = (float)((ulonglong)*param_1 >> 0x20);
  fStack_d0 = (float)param_1[1];
  fStack_cc = (float)((ulonglong)param_1[1] >> 0x20);
  _local_d8 = CONCAT44(fStack_d4 - fVar9,local_d8 - fVar8);
  _fStack_d0 = CONCAT44(fVar9 + fStack_cc,fVar8 + fStack_d0);
  local_108 = 0x1800;
  FUN_18013386b(&local_d8,param_2 & 0xffffffff,&local_c1,&local_c2);
  if (local_c1 == '\x01') {
    *(byte *)(lVar2 + 0x1fe8) = *(byte *)(lVar2 + 0x1fe8) | 1;
    if (local_c2 == '\0') {
      if ((*(int *)(lVar2 + 0x1668) == (int)param_2) && (param_9 <= *(float *)(lVar2 + 0x1670))) {
        FUN_180118f36((param_3 != 1) + '\x03');
      }
      goto LAB_1801383b7;
    }
LAB_18013828b:
    FUN_180118f36((param_3 != 1) + '\x03');
    local_e8 = *param_1;
    uStack_e0 = param_1[1];
    local_f0 = CONCAT44(((float)((ulonglong)*(undefined8 *)(lVar2 + 0x118) >> 0x20) -
                        (float)((ulonglong)*(undefined8 *)(lVar2 + 0x1694) >> 0x20)) -
                        (float)((ulonglong)_local_d8 >> 0x20),
                        ((float)*(undefined8 *)(lVar2 + 0x118) -
                        (float)*(undefined8 *)(lVar2 + 0x1694)) - (float)_local_d8);
    fVar9 = *(float *)((longlong)&local_f0 + (longlong)param_3 * 4);
    uVar7 = FUN_180102463();
    fVar8 = (float)FUN_180102463();
    fVar10 = (float)(uVar7 ^ _DAT_1802b0ce0);
    if ((float)(uVar7 ^ _DAT_1802b0ce0) <= fVar9) {
      fVar10 = fVar9;
    }
    if (fVar10 <= fVar8) {
      fVar8 = fVar10;
    }
    uVar6 = CONCAT71((int7)((ulonglong)param_5 >> 8),1);
    if ((fVar8 != 0.0) || (NAN(fVar8))) {
      fVar9 = (float)FUN_180102463(*param_4 + fVar8,param_6);
      *param_4 = fVar9;
      fVar9 = (float)FUN_180102463(*param_5 - fVar8);
      *param_5 = fVar9;
      fVar9 = (float)((uint)fVar8 & (int)((uint)(param_3 == 0) << 0x1f) >> 0x1f);
      fVar8 = (float)(~((int)((uint)(param_3 == 0) << 0x1f) >> 0x1f) & (uint)fVar8);
      local_e8 = CONCAT44(fVar8 + local_e8._4_4_,fVar9 + (float)local_e8);
      uStack_e0 = CONCAT44(fVar8 + uStack_e0._4_4_,fVar9 + (float)uStack_e0);
      FUN_18010748b(param_2 & 0xffffffff);
    }
  }
  else {
    if (local_c2 != '\0') goto LAB_18013828b;
LAB_1801383b7:
    local_e8 = *param_1;
    uStack_e0 = param_1[1];
    uVar6 = 0;
  }
  if (0xffffff < param_10) {
    local_100 = 0;
    local_108 = 0;
    FUN_180192d20(*(undefined8 *)(lVar1 + 800),&local_e8,&uStack_e0);
  }
  if (local_c1 == '\x01' && (char)uVar6 == '\0') {
    iVar5 = 0x1d - (uint)(*(float *)(lVar2 + 0x1670) < param_9);
  }
  else {
    iVar5 = ((uint)uVar6 & 0xff) * 2 + 0x1c;
  }
  uVar4 = FUN_18010129b(iVar5,DAT_1802ac570);
  local_100 = 0;
  local_108 = 0;
  FUN_180192d20(*(undefined8 *)(lVar1 + 800),&local_e8,&uStack_e0,uVar4);
LAB_18013844f:
  if (DAT_180402640 == (local_c0 ^ (ulonglong)auStack_128)) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_c0 ^ (ulonglong)auStack_128);
}

