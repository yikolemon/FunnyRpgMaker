/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140349bf2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_140349bf2(undefined8 param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_138 [32];
  ulonglong local_118;
  undefined8 *local_110;
  undefined8 local_108;
  byte local_f1;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  longlong local_e0;
  undefined8 local_d8;
  float local_cc;
  float local_c8;
  undefined1 local_c2;
  byte local_c1;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float local_9c;
  undefined8 local_98;
  ulonglong local_90;
  
  lVar2 = DAT_14062a630;
  local_90 = ram0x000140613b10 ^ (ulonglong)auStack_138;
  *(undefined1 *)(*(longlong *)(DAT_14062a630 + 0x1608) + 0x10b) = 1;
  lVar1 = *(longlong *)(lVar2 + 0x1608);
  uVar5 = *(undefined4 *)(lVar2 + 0x2030);
  *(undefined4 *)(lVar2 + 0x2030) = 0;
  if (*(char *)(lVar1 + 0x10e) == '\0') {
    uVar4 = FUN_14031821e(lVar1,param_1,0);
    fVar9 = 0.0;
    if ((param_3 & 0x20) == 0) {
      fVar9 = (float)FUN_14032b926();
    }
    local_e8 = FUN_140313264(param_1,0);
    local_118 = CONCAT44(local_118._4_4_,0xbf800000);
    FUN_14031389a(&local_a0,param_1,local_e8,0);
    fVar8 = 0.0;
    if (param_2 != 0 && (char)param_3 < '\0') {
      local_118 = CONCAT44(local_118._4_4_,0xbf800000);
      FUN_14031389a(&local_b0,param_2,0,0);
      fVar8 = local_b0;
    }
    fVar10 = fVar9;
    if ((param_3 & 0x40) == 0) {
      if ((char)param_3 < '\0') {
        fVar10 = *(float *)(lVar2 + 0xdf4) + *(float *)(lVar2 + 0xdf4) + fVar8 + fVar9;
      }
      else {
        fVar10 = (float)FUN_14032b86a();
      }
    }
    local_c0 = *(float *)(lVar1 + 0x158);
    fStack_bc = *(float *)(lVar1 + 0x15c);
    fStack_a8 = fVar10 + local_c0;
    fStack_a4 = *(float *)(lVar2 + 0xdf8) + *(float *)(lVar2 + 0xdf8) + local_9c + fStack_bc;
    fStack_b8 = 0.0;
    if (0.0 < local_a0) {
      fStack_b8 = local_a0 + *(float *)(lVar2 + 0xe0c);
    }
    fStack_b8 = fStack_b8 + fStack_a8;
    fStack_b4 = fStack_a4 + 0.0;
    local_98 = CONCAT44(fStack_b4 - fStack_bc,fStack_b8 - local_c0);
    local_e0 = param_2;
    local_b0 = local_c0;
    fStack_ac = fStack_bc;
    FUN_1403229e4();
    uVar6 = 0;
    cVar3 = FUN_140322b86(&local_c0,uVar4,&local_b0,0);
    if (cVar3 == '\0') goto LAB_14034a13f;
    local_118 = local_118 & 0xffffffff00000000;
    cVar3 = FUN_140344d3b(&local_b0,uVar4,&local_c1,&local_c2);
    local_f0 = FUN_140310209("file, skipping decryption",0,uVar4);
    local_f1 = FUN_14031a0f6(local_f0,0);
    local_ec = uVar5;
    if ((local_f1 == 0) && (cVar3 != '\0')) {
      FUN_14032c1b5(local_f0,0);
      local_f1 = 1;
    }
    uVar5 = FUN_14031276b(local_c1 + 7,DAT_1404bda40);
    fVar8 = (float)FUN_140313933(local_b0);
    FUN_140313fde(&local_b0,uVar4,0);
    if ((param_3 & 0x40) == 0) {
      uVar4 = 0xf0;
      if ((param_3 & 0x20) == 0) {
        uVar4 = 0x50;
      }
      local_98 = CONCAT44(fStack_a4,fVar8);
      local_110 = (undefined8 *)CONCAT44(local_110._4_4_,uVar4);
      local_118 = CONCAT44(local_118._4_4_,*(undefined4 *)(lVar2 + 0xdfc));
      FUN_1403a41f0(*(undefined8 *)(lVar1 + 800),&local_b0,&local_98,uVar5);
    }
    uVar4 = local_ec;
    uVar5 = DAT_1404bda40;
    if ((param_3 & 0x20) == 0) {
      uVar6 = FUN_14031276b(local_c1 | local_f1 | 0x16,DAT_1404bda40);
      uVar7 = FUN_14031276b(0,uVar5);
      uVar5 = 0xa0;
      if (fVar10 <= fVar9) {
        uVar5 = 0xf0;
      }
      local_98 = CONCAT44(fStack_ac,fVar8);
      local_110 = (undefined8 *)CONCAT44(local_110._4_4_,uVar5);
      local_118 = CONCAT44(local_118._4_4_,*(undefined4 *)(lVar2 + 0xdfc));
      FUN_1403a41f0(*(undefined8 *)(lVar1 + 800),&local_98,&fStack_a8,uVar6);
      if ((fVar9 + fVar8) - *(float *)(lVar2 + 0xdf4) <= fStack_a8) {
        local_118 = CONCAT44(local_118._4_4_,0x3f800000);
        FUN_1403accda(*(undefined8 *)(lVar1 + 800),
                      CONCAT44(fStack_ac + *(float *)(lVar2 + 0xdf8),
                               fVar8 + *(float *)(lVar2 + 0xdf8)),uVar7,3);
      }
    }
    FUN_140313e23(CONCAT44(fStack_ac,local_b0),CONCAT44(fStack_a4,fStack_a8),
                  *(undefined4 *)(lVar2 + 0xdfc));
    lVar1 = local_e0;
    if ((param_3 >> 0x14 & 1) == 0) {
      if (local_e0 != 0 && (char)((param_3 & 0x40) >> 6) == '\0') {
        if (*(char *)(lVar2 + 0x2a40) == '\x01') {
          FUN_14032e77b("arenessContext","indow_context");
        }
        local_98 = 0;
        local_c8 = fStack_a4;
        local_d8 = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar2 + 0xdf4) >> 0x20) + fStack_ac,
                            (float)*(undefined8 *)(lVar2 + 0xdf4) + local_b0);
        local_108 = 0;
        local_110 = &local_98;
        local_118 = 0;
        local_cc = fVar8;
        FUN_140313945(&local_d8,&local_cc,lVar1,0);
      }
    }
    else {
      *(ulonglong *)(lVar2 + 0x2804) = CONCAT44(fStack_ac,local_b0);
      *(float *)(lVar2 + 0x280c) = fVar8;
      *(float *)(lVar2 + 0x2810) = fStack_a4;
    }
    if (0.0 < local_a0) {
      FUN_140313298(CONCAT44(fStack_ac + *(float *)(lVar2 + 0xdf8),
                             fStack_a8 + *(float *)(lVar2 + 0xe0c)),param_1,local_e8,0);
    }
    if (local_f1 != 0) {
      *(undefined4 *)(lVar2 + 0x2030) = uVar4;
      uVar6 = FUN_14034a1a0(local_f0,&local_b0,param_3);
      goto LAB_14034a13f;
    }
  }
  uVar6 = 0;
LAB_14034a13f:
  if (ram0x000140613b10 == (local_90 ^ (ulonglong)auStack_138)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_90 ^ (ulonglong)auStack_138);
}

