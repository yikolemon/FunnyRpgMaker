/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140345b57 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_140345b57(undefined4 param_1,undefined8 *param_2)

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
  
  lVar2 = DAT_14062a630;
  local_70 = ram0x000140613b10 ^ (ulonglong)auStack_e8;
  lVar1 = *(longlong *)(DAT_14062a630 + 0x1608);
  local_80 = *param_2;
  fVar8 = (float)local_80;
  fVar6 = *(float *)(DAT_14062a630 + 0x1320) + fVar8;
  fVar9 = (float)((ulonglong)local_80 >> 0x20);
  fVar7 = *(float *)(DAT_14062a630 + 0x1320) + fVar9;
  local_78 = CONCAT44(fVar7,fVar6);
  local_98 = local_80;
  uStack_90 = local_78;
  if ((((float)((ulonglong)*(undefined8 *)(lVar1 + 0x270) >> 0x20) -
       (float)((ulonglong)*(undefined8 *)(lVar1 + 0x268) >> 0x20)) *
      ((float)*(undefined8 *)(lVar1 + 0x270) - (float)*(undefined8 *)(lVar1 + 0x268))) /
      ((fVar7 - fVar9) * (fVar6 - fVar8)) < DAT_1404f0020) {
    local_98 = CONCAT44(fVar9 - (float)(int)(_UNK_1404f04e4 * (fVar7 - fVar9)),
                        fVar8 - (float)(int)(_DAT_1404f04e0 * (fVar6 - fVar8)));
    uStack_90 = CONCAT44(fVar7 + (float)(int)(_UNK_1404f04e4 * (fVar7 - fVar9)),
                         fVar6 + (float)(int)(_DAT_1404f04e0 * (fVar6 - fVar8)));
  }
  cVar3 = FUN_140322b86(&local_98,param_1,0,0);
  local_c8 = 0.0;
  uVar4 = FUN_140344d3b(&local_98,param_1,&local_99,&local_9a);
  if (cVar3 != '\0') {
    uVar5 = FUN_14031276b(local_9a + 0x17);
    if (local_99 == '\x01') {
      local_c0 = 0;
      local_c8 = 0.0;
      FUN_1403a41f0(*(undefined8 *)(lVar1 + 800),&local_80,&local_78,uVar5);
    }
    FUN_140313fde(&local_80,param_1,2);
    uVar5 = FUN_14031276b(0);
    fVar8 = *(float *)(lVar2 + 0x1320) * DAT_1404ecffc * _DAT_1404f04f0 + DAT_1404ccdb0;
    fVar9 = (float)(int)*(float *)(lVar2 + 0x12ec);
    fVar6 = ((float)local_78 + (float)local_80) * _DAT_1404efa40 + _DAT_1404f0500;
    fVar7 = ((float)((ulonglong)local_78 >> 0x20) + (float)((ulonglong)local_80 >> 0x20)) *
            _UNK_1404efa44 + _UNK_1404f0504;
    fVar10 = fVar6 - fVar8;
    fVar11 = fVar7 - fVar8;
    local_a8 = CONCAT44(fVar11,fVar10);
    fVar6 = fVar8 + fVar6;
    fVar8 = fVar8 + fVar7;
    local_b0 = CONCAT44(fVar8,fVar6);
    local_c8 = fVar9;
    FUN_1403a3c60(*(undefined8 *)(lVar1 + 800),&local_b0,&local_a8,uVar5);
    local_a8 = CONCAT44(fVar8,fVar10);
    local_b0 = CONCAT44(fVar11,fVar6);
    local_c8 = fVar9;
    FUN_1403a3c60(*(undefined8 *)(lVar1 + 800),&local_b0,&local_a8,uVar5);
  }
  if (ram0x000140613b10 == (local_70 ^ (ulonglong)auStack_e8)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_70 ^ (ulonglong)auStack_e8);
}

