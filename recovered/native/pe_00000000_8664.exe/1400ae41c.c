/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ae41c */

void FUN_1400ae41c(undefined4 *param_1,undefined8 *param_2,undefined8 param_3,ulonglong param_4,
                  longlong param_5,undefined8 param_6)

{
  float fVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  ulonglong local_e0;
  undefined4 local_d8;
  float local_d0;
  undefined4 local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  lVar4 = DAT_140f2a910;
  local_70 = DAT_140f17b40 ^ (ulonglong)auStack_108;
  *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
  lVar2 = *(longlong *)(lVar4 + 0x1608);
  if (*(char *)(lVar2 + 0x10e) == '\0') {
    fVar1 = *(float *)(lVar4 + 0xe48);
    local_88 = *(undefined8 *)(lVar2 + 0x158);
    fVar9 = (float)((ulonglong)local_88 >> 0x20);
    fVar7 = fVar1 + fVar1 + (float)*param_2 + (float)local_88;
    fVar8 = fVar1 + fVar1 + (float)((ulonglong)*param_2 >> 0x20) + fVar9;
    local_80 = CONCAT44(fVar8,fVar7);
    local_78 = CONCAT44(fVar8 - fVar9,fVar7 - (float)local_88);
    FUN_14008a82c();
    cVar5 = FUN_14008a9ce(&local_88,0,0,0);
    if (cVar5 != '\0') {
      fVar7 = *(float *)(lVar4 + 0xe44);
      if (0.0 < *(float *)(param_5 + 0xc)) {
        uVar3 = *(undefined8 *)(lVar2 + 800);
        uVar6 = FUN_14007a5c6();
        local_78 = CONCAT44((float)((ulonglong)local_80 >> 0x20) - fVar1,(float)local_80 - fVar1);
        local_90 = CONCAT44(fVar1 + (float)((ulonglong)local_88 >> 0x20),fVar1 + (float)local_88);
        local_e8 = CONCAT44(local_e8._4_4_,fVar7);
        local_e0 = local_e0 & 0xffffffff00000000;
        FUN_1400de294(uVar3,&local_90,&local_78,uVar6);
      }
      uVar3 = *(undefined8 *)(lVar2 + 800);
      local_d8 = FUN_14007a5c6(param_6);
      fVar9 = (float)((ulonglong)local_88 >> 0x20);
      fVar8 = (float)((ulonglong)local_80 >> 0x20);
      local_e8 = param_3;
      local_e0 = param_4;
      if (fVar7 <= 0.0) {
        local_78 = CONCAT44(fVar8 - fVar1,(float)local_80 - fVar1);
        local_90 = CONCAT44(fVar1 + fVar9,fVar1 + (float)local_88);
        local_b8 = *param_1;
        uStack_b4 = param_1[1];
        uStack_b0 = param_1[2];
        uStack_ac = param_1[3];
        FUN_1400dfb8e(uVar3);
      }
      else {
        local_78 = CONCAT44(fVar8 - fVar1,(float)local_80 - fVar1);
        local_90 = CONCAT44(fVar1 + fVar9,fVar1 + (float)local_88);
        local_a8 = *param_1;
        uStack_a4 = param_1[1];
        uStack_a0 = param_1[2];
        uStack_9c = param_1[3];
        local_c8 = 0;
        local_d0 = fVar7;
        FUN_1400dfca8(uVar3);
      }
      fVar1 = *(float *)(lVar4 + 0xe48);
      if (0.0 < fVar1) {
        uVar3 = *(undefined8 *)(lVar2 + 800);
        uVar6 = FUN_14007a557(5);
        local_e0 = CONCAT44(local_e0._4_4_,fVar1);
        local_e8 = CONCAT44(local_e8._4_4_,fVar7);
        local_d8 = 0;
        FUN_1400de17e(uVar3,&local_88,&local_80,uVar6);
      }
    }
  }
  if (DAT_140f17b40 == (local_70 ^ (ulonglong)auStack_108)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_70 ^ (ulonglong)auStack_108);
}

