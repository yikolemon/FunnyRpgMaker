/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ae766 */

undefined4
FUN_1400ae766(undefined4 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
             ulonglong param_5,longlong param_6,undefined8 param_7,undefined4 param_8)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  ulonglong local_100;
  undefined4 local_f8;
  float local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  byte local_aa;
  char local_a9;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  lVar3 = DAT_140f2a910;
  local_90 = DAT_140f17b40 ^ (ulonglong)auStack_128;
  *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
  lVar1 = *(longlong *)(lVar3 + 0x1608);
  if (*(char *)(lVar1 + 0x10e) == '\0') {
    fVar11 = (float)*(undefined8 *)(lVar3 + 0xdf4);
    fVar12 = (float)((ulonglong)*(undefined8 *)(lVar3 + 0xdf4) >> 0x20);
    local_a8 = *(undefined8 *)(lVar1 + 0x158);
    fVar8 = (float)((ulonglong)local_a8 >> 0x20);
    fVar9 = (float)*param_3 + (float)local_a8 + fVar11 + fVar11;
    fVar10 = (float)((ulonglong)*param_3 >> 0x20) + fVar8 + fVar12 + fVar12;
    local_a0 = CONCAT44(fVar10,fVar9);
    local_98 = CONCAT44(fVar10 - fVar8,fVar9 - (float)local_a8);
    FUN_14008a82c();
    uVar5 = 0;
    cVar4 = FUN_14008a9ce(&local_a8,param_1,0,0);
    if (cVar4 != '\0') {
      local_108._0_4_ = param_8;
      local_e0 = param_4;
      uVar5 = FUN_1400ac79b(&local_a8,param_1,&local_a9,&local_aa);
      iVar7 = 0x16;
      if (local_a9 != '\0') {
        iVar7 = local_aa + 0x17;
      }
      uVar6 = FUN_14007a557(iVar7);
      FUN_14007bdca(&local_a8,param_1,0);
      local_108._0_4_ = *(undefined4 *)(lVar3 + 0xdfc);
      FUN_14007ba95(local_a8,local_a0,uVar6,1);
      if (0.0 < *(float *)(param_6 + 0xc)) {
        uVar2 = *(undefined8 *)(lVar1 + 800);
        uVar6 = FUN_14007a5c6();
        local_98 = CONCAT44((float)((ulonglong)local_a0 >> 0x20) - fVar12,(float)local_a0 - fVar11);
        local_b8 = CONCAT44((float)((ulonglong)local_a8 >> 0x20) + fVar12,(float)local_a8 + fVar11);
        local_100 = local_100 & 0xffffffff00000000;
        local_108._0_4_ = 0;
        FUN_1400de294(uVar2,&local_b8,&local_98,uVar6);
      }
      fVar8 = *(float *)(lVar3 + 0xdfc);
      fVar9 = (float)FUN_14007b71f(fVar11);
      fVar9 = (float)FUN_14007b71f(fVar8 - fVar9);
      uVar2 = *(undefined8 *)(lVar1 + 800);
      local_f8 = FUN_14007a5c6(param_7);
      fVar10 = (float)((ulonglong)local_a8 >> 0x20);
      fVar8 = (float)((ulonglong)local_a0 >> 0x20);
      if (fVar9 <= 0.0) {
        local_98 = CONCAT44(fVar8 - fVar12,(float)local_a0 - fVar11);
        local_b8 = CONCAT44(fVar10 + fVar12,(float)local_a8 + fVar11);
        local_d8 = *param_2;
        uStack_d4 = param_2[1];
        uStack_d0 = param_2[2];
        uStack_cc = param_2[3];
        local_100 = param_5;
        local_108 = local_e0;
        FUN_1400dfb8e(uVar2);
      }
      else {
        local_98 = CONCAT44(fVar8 - fVar12,(float)local_a0 - fVar11);
        local_b8 = CONCAT44(fVar10 + fVar12,(float)local_a8 + fVar11);
        local_c8 = *param_2;
        uStack_c4 = param_2[1];
        uStack_c0 = param_2[2];
        uStack_bc = param_2[3];
        local_100 = param_5;
        local_108 = local_e0;
        local_e8 = 0;
        local_f0 = fVar9;
        FUN_1400dfca8(uVar2);
      }
    }
  }
  else {
    uVar5 = 0;
  }
  if (DAT_140f17b40 == (local_90 ^ (ulonglong)auStack_128)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_90 ^ (ulonglong)auStack_128);
}

