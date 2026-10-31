/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403491d8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403491d8(undefined4 param_1,undefined8 param_2,undefined8 param_3,float param_4)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  char cVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined8 local_140;
  float *local_138;
  undefined8 local_128;
  float local_120;
  float local_11c;
  undefined8 local_118;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  ulonglong local_f0;
  
  lVar4 = DAT_14062a630;
  local_f0 = ram0x000140613b10 ^ (ulonglong)auStack_168;
  lVar3 = *(longlong *)(DAT_14062a630 + 0x1608);
  local_148 = CONCAT44(local_148._4_4_,0xbf800000);
  local_128 = param_2;
  FUN_14031389a(&local_f8,param_2,param_3,0);
  fVar2 = *(float *)(lVar3 + 0x158);
  fVar9 = *(float *)(lVar3 + 0x15c);
  fVar1 = *(float *)(lVar4 + 0xeac);
  fVar12 = *(float *)(lVar4 + 0xeb8);
  local_fc = (float)FUN_140313933(*(float *)(lVar4 + 0xebc) + *(float *)(lVar4 + 0xebc) + local_f4,
                                  fVar1);
  local_100 = local_f8 + param_4 + fVar12 + fVar12;
  local_104 = local_fc + fVar9;
  local_108 = *(float *)(lVar3 + 0x2a0);
  fVar11 = (float)(int)(((local_104 - fVar9) - local_f4) * *(float *)(lVar4 + 0xeb4) +
                       _DAT_1404efaf0);
  local_110 = fVar2;
  local_10c = fVar9;
  FUN_1403229e4(&local_100,fVar11);
  cVar6 = FUN_140322b86(&local_110,param_1,0,0);
  fVar5 = local_108;
  if (cVar6 != '\0') {
    fVar10 = (float)(int)((local_10c + local_104) * DAT_1404ecffc + _DAT_1404efaf0);
    fVar8 = (float)FUN_140313933(0,(local_108 - fVar2) - (fVar12 + fVar12));
    fVar8 = (float)FUN_140313933(0,((fVar8 - local_f8) - param_4) * *(float *)(lVar4 + 0xeb0));
    fVar8 = fVar8 + fVar12 + fVar2;
    local_118 = CONCAT44(fVar11 + fVar9,fVar8);
    *(float *)(lVar3 + 0x160) = local_f8 + fVar8;
    uVar7 = FUN_14031276b(0x1c,DAT_1404bda40);
    if (local_f8 <= 0.0) {
      if (*(char *)(lVar4 + 0x2a40) == '\x01') {
        FUN_140326cad(
                     "n columns Body until hovered for resize (borders will always appear in Headers)"
                     );
      }
      if (0.0 < fVar1) {
        local_140 = CONCAT44(local_140._4_4_,fVar1);
        local_148 = CONCAT44(local_148._4_4_,uVar7);
        FUN_1403a3dce(*(undefined8 *)(lVar3 + 800),fVar2,fVar5,fVar10);
      }
    }
    else {
      fVar12 = *(float *)(lVar4 + 0xe04);
      if ((0.0 < fVar1) && (fVar9 = fVar8 - fVar12, fVar2 < fVar9)) {
        local_140 = CONCAT44(local_140._4_4_,fVar1);
        local_148 = CONCAT44(local_148._4_4_,uVar7);
        FUN_1403a3dce(*(undefined8 *)(lVar3 + 800),fVar2,fVar9,fVar10);
      }
      if ((0.0 < fVar1) && (fVar12 = fVar12 + param_4 + local_f8 + fVar8, fVar12 < fVar5)) {
        local_140 = CONCAT44(local_140._4_4_,fVar1);
        local_148 = CONCAT44(local_148._4_4_,uVar7);
        FUN_1403a3dce(*(undefined8 *)(lVar3 + 800),fVar12,fVar5,fVar10);
      }
      if (*(char *)(lVar4 + 0x2a40) == '\x01') {
        FUN_14032e77b("n columns Body until hovered for resize (borders will always appear in Headers)"
                      ,0);
      }
      local_11c = local_104 + *(float *)(lVar4 + 0xe08);
      local_120 = local_108;
      local_148 = local_128;
      local_140 = param_3;
      local_138 = &local_f8;
      FUN_1403139f7(*(undefined8 *)(lVar3 + 800),&local_118);
    }
  }
  if (ram0x000140613b10 == (local_f0 ^ (ulonglong)auStack_168)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_f0 ^ (ulonglong)auStack_168);
}

