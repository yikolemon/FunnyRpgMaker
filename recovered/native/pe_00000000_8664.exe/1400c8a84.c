/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c8a84 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1400c8a84(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  float local_a0;
  float fStack_9c;
  undefined8 local_98;
  undefined8 local_90;
  float local_88;
  float fStack_84;
  ulonglong local_80;
  
  lVar3 = DAT_140f2a910;
  local_80 = DAT_140f17b40 ^ (ulonglong)auStack_e8;
  *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
  lVar1 = *(longlong *)(lVar3 + 0x1608);
  if (*(char *)(lVar1 + 0x10e) == '\0') {
    local_b4 = FUN_140091695();
    uVar5 = FUN_14007b050(param_1,0);
    local_c8 = 0xbf800000;
    FUN_14007b686(&local_88,param_1,uVar5,0);
    FUN_140093756();
    FUN_1400936b2();
    FUN_14008a3c7(&local_98,*param_2);
    fVar8 = (float)FUN_14007b71f();
    uVar2 = *(undefined8 *)(lVar1 + 0x158);
    fVar9 = (float)(int)(float)local_98 + (float)*(undefined8 *)(lVar1 + 0x158);
    fVar8 = fVar8 + (float)((ulonglong)*(undefined8 *)(lVar1 + 0x158) >> 0x20);
    local_90 = CONCAT44(fVar8,fVar9);
    local_a0 = fVar9;
    if (0.0 < local_88) {
      local_a0 = local_88 + *(float *)(lVar3 + 0xe0c) + fVar9;
    }
    fStack_9c = fVar8 + 0.0;
    *(undefined8 *)(lVar3 + 0x1fa8) = 0;
    local_a8 = uVar2;
    local_98 = uVar2;
    uVar4 = FUN_140090bd9(&local_a8);
    if ((char)uVar4 == '\0') {
      local_b0 = CONCAT44(fStack_9c - (float)((ulonglong)local_a8 >> 0x20),
                          local_a0 - (float)local_a8);
      FUN_14008a82c(&local_b0,*(undefined4 *)(lVar3 + 0xdf8));
      FUN_14008a9ce(&local_a8,0,&local_98,0);
      *(undefined4 *)(lVar3 + 0x2030) = 0;
    }
    else {
      FUN_1400937ae();
      fVar10 = (float)((ulonglong)uVar2 >> 0x20);
      if (0.0 < local_88) {
        fVar11 = *(float *)(lVar3 + 0xe0c) + fVar9;
        fVar12 = *(float *)(lVar3 + 0xdf8) + fVar10;
        FUN_14007b084(CONCAT44(fVar12,fVar11),param_1,uVar5,0);
        local_88 = local_88 + fVar11;
        fStack_84 = fStack_84 + fVar12;
        fVar11 = (float)*(undefined8 *)(lVar1 + 0x170);
        fVar12 = (float)((ulonglong)*(undefined8 *)(lVar1 + 0x170) >> 0x20);
        uVar6 = -(uint)(local_88 <= fVar11);
        uVar7 = -(uint)(fStack_84 <= fVar12);
        *(ulonglong *)(lVar1 + 0x170) =
             CONCAT44(~uVar7 & (uint)fStack_84,~uVar6 & (uint)local_88) |
             CONCAT44((uint)fVar12 & uVar7,(uint)fVar11 & uVar6);
        FUN_1400b08cd();
      }
      local_b0 = CONCAT44(fVar8 - fVar10,fVar9 - (float)uVar2);
      FUN_14008a360(local_b4,&local_b0,0x80,0);
    }
  }
  else {
    uVar4 = 0;
  }
  if (DAT_140f17b40 == (local_80 ^ (ulonglong)auStack_e8)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_80 ^ (ulonglong)auStack_e8);
}

