/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ad5b7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1400ad5b7(undefined4 param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_e8 [32];
  float local_c8;
  undefined4 local_c0;
  undefined8 local_b0;
  undefined8 local_a8;
  byte local_9a;
  char local_99;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  lVar2 = DAT_140f2a910;
  local_70 = DAT_140f17b40 ^ (ulonglong)auStack_e8;
  lVar1 = *(longlong *)(DAT_140f2a910 + 0x1608);
  local_80 = *param_2;
  fVar8 = (float)local_80;
  fVar6 = *(float *)(DAT_140f2a910 + 0x1320) + fVar8;
  fVar9 = (float)((ulonglong)local_80 >> 0x20);
  fVar7 = *(float *)(DAT_140f2a910 + 0x1320) + fVar9;
  local_78 = CONCAT44(fVar7,fVar6);
  local_98 = local_80;
  uStack_90 = local_78;
  if ((((float)((ulonglong)*(undefined8 *)(lVar1 + 0x270) >> 0x20) -
       (float)((ulonglong)*(undefined8 *)(lVar1 + 0x268) >> 0x20)) *
      ((float)*(undefined8 *)(lVar1 + 0x270) - (float)*(undefined8 *)(lVar1 + 0x268))) /
      ((fVar7 - fVar9) * (fVar6 - fVar8)) < DAT_1402118c0) {
    local_98 = CONCAT44(fVar9 - (float)(int)(_UNK_140211d84 * (fVar7 - fVar9)),
                        fVar8 - (float)(int)(_DAT_140211d80 * (fVar6 - fVar8)));
    uStack_90 = CONCAT44(fVar7 + (float)(int)(_UNK_140211d84 * (fVar7 - fVar9)),
                         fVar6 + (float)(int)(_DAT_140211d80 * (fVar6 - fVar8)));
  }
  cVar3 = FUN_14008a9ce(&local_98,param_1,0,0);
  local_c8 = 0.0;
  uVar4 = FUN_1400ac79b(&local_98,param_1,&local_99,&local_9a);
  if (cVar3 != '\0') {
    uVar5 = FUN_14007a557(local_9a + 0x17);
    if (local_99 == '\x01') {
      local_c0 = 0;
      local_c8 = 0.0;
      FUN_1400de294(*(undefined8 *)(lVar1 + 800),&local_80,&local_78,uVar5);
    }
    FUN_14007bdca(&local_80,param_1,2);
    uVar5 = FUN_14007a557(0);
    fVar8 = *(float *)(lVar2 + 0x1320) * DAT_1401c86a0 * _DAT_140211d90 + DAT_1401c86a4;
    fVar9 = (float)(int)*(float *)(lVar2 + 0x12ec);
    fVar6 = ((float)local_78 + (float)local_80) * (float)DAT_1401c8640 + _DAT_140211da0;
    fVar7 = ((float)((ulonglong)local_78 >> 0x20) + (float)((ulonglong)local_80 >> 0x20)) *
            DAT_1401c8640._4_4_ + _UNK_140211da4;
    fVar10 = fVar6 - fVar8;
    fVar11 = fVar7 - fVar8;
    local_a8 = CONCAT44(fVar11,fVar10);
    fVar6 = fVar8 + fVar6;
    fVar8 = fVar8 + fVar7;
    local_b0 = CONCAT44(fVar8,fVar6);
    local_c8 = fVar9;
    FUN_1400ddd04(*(undefined8 *)(lVar1 + 800),&local_b0,&local_a8,uVar5);
    local_a8 = CONCAT44(fVar8,fVar10);
    local_b0 = CONCAT44(fVar11,fVar6);
    local_c8 = fVar9;
    FUN_1400ddd04(*(undefined8 *)(lVar1 + 800),&local_b0,&local_a8,uVar5);
  }
  if (DAT_140f17b40 == (local_70 ^ (ulonglong)auStack_e8)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_70 ^ (ulonglong)auStack_e8);
}

