/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180137354 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_180137354(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_108 [32];
  undefined4 *local_e8;
  float *local_e0;
  undefined8 local_d0;
  float local_c4;
  undefined4 local_c0;
  float local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 auStack_a0 [2];
  char local_8a;
  char local_89;
  float local_88;
  float fStack_84;
  float fStack_80;
  float local_7c;
  float local_78;
  float local_74;
  ulonglong local_70;
  
  lVar3 = DAT_180419160;
  local_70 = DAT_180402640 ^ (ulonglong)auStack_108;
  *(undefined1 *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10b) = 1;
  lVar2 = *(longlong *)(lVar3 + 0x1608);
  if (*(char *)(lVar2 + 0x10e) == '\0') {
    uVar7 = 0;
    uVar6 = FUN_180106d4e(lVar2,param_1,0);
    uVar8 = FUN_180101d94(param_1,0);
    fVar10 = *(float *)(lVar2 + 400);
    uVar1 = *(undefined8 *)(lVar2 + 0x158);
    fVar9 = (float)uVar1;
    local_e8 = (undefined4 *)CONCAT44(local_e8._4_4_,0xbf800000);
    FUN_1801023ca(&local_78,param_1,uVar8,0);
    fStack_80 = local_78 + fVar9;
    fStack_84 = fVar10 + (float)((ulonglong)uVar1 >> 0x20);
    local_7c = fStack_84 + local_74;
    local_88 = fVar9;
    FUN_180111514(&local_78,0);
    cVar5 = FUN_1801116b6(&local_88,uVar6,0,0);
    if (cVar5 != '\0') {
      local_e8 = (undefined4 *)((ulonglong)local_e8 & 0xffffffff00000000);
      local_d0 = uVar8;
      uVar7 = FUN_18013386b(&local_88,uVar6,&local_89,&local_8a);
      FUN_180102b0e(&local_88,uVar6,0);
      if (local_89 == '\x01') {
        FUN_180118f36(7);
      }
      uVar1 = *(undefined8 *)(lVar3 + 0x1238);
      auStack_a0[0] = *(undefined8 *)(lVar3 + 0x1240);
      local_b8 = *(undefined8 *)(lVar3 + 0x1238);
      uStack_b0 = *(undefined8 *)(lVar3 + 0x1240);
      local_a8._0_4_ = (undefined4)uVar1;
      local_a8._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
      uVar6 = local_a8._4_4_;
      local_e0 = &local_c4;
      local_e8 = &local_c0;
      uVar4 = (undefined4)local_a8;
      local_a8 = uVar1;
      FUN_1800ff447(uVar4,uVar6,(undefined4)auStack_a0[0],&local_bc);
      uVar1 = local_d0;
      fVar10 = local_c4;
      if (local_89 != '\0' || local_8a != '\0') {
        fVar9 = DAT_1802bb8d8;
        if (local_8a == '\0') {
          fVar9 = DAT_1802dbb70;
        }
        fVar9 = fVar9 + local_c4;
        fVar10 = DAT_1802ac570;
        if (fVar9 <= DAT_1802ac570) {
          fVar10 = fVar9;
        }
        fVar10 = (float)(~-(uint)(fVar9 < 0.0) & (uint)fVar10);
        local_c4 = fVar10;
        local_bc = (float)FUN_180285540(local_bc + DAT_1802de984);
      }
      local_e0 = (float *)auStack_a0;
      local_e8 = (undefined4 *)((longlong)&local_a8 + 4);
      FUN_1800ff588(local_bc,local_c0,fVar10,&local_a8);
      local_c4 = local_c4 + _DAT_1802deae8;
      fVar10 = DAT_1802ac570;
      if (local_c4 <= DAT_1802ac570) {
        fVar10 = local_c4;
      }
      local_c4 = (float)(~-(uint)(local_c4 < 0.0) & (uint)fVar10);
      local_e0 = (float *)&uStack_b0;
      local_e8 = (undefined4 *)((longlong)&local_b8 + 4);
      FUN_1800ff588(local_bc,local_c0,local_c4,&local_b8);
      fVar10 = *(float *)(*(longlong *)(lVar3 + 0x1318) + 0x48) * *(float *)(lVar3 + 0x1328) *
               DAT_1802de790;
      fVar9 = (float)(int)((int)fVar10 - (uint)(fVar10 < 0.0 && (float)(int)fVar10 != fVar10)) +
              local_7c;
      uVar8 = *(undefined8 *)(lVar2 + 800);
      fVar10 = *(float *)(lVar3 + 0x12ec);
      uVar6 = FUN_18010130a(&local_b8);
      local_e0 = (float *)CONCAT44(local_e0._4_4_,(float)(int)fVar10);
      local_e8 = (undefined4 *)CONCAT44(local_e8._4_4_,uVar6);
      FUN_1801928fe(uVar8,local_88,fStack_80,fVar9);
      uVar6 = FUN_18010130a(&local_a8);
      FUN_1801013be(0,uVar6);
      FUN_180101dc8(CONCAT44(fStack_84,local_88),param_1,uVar1,0);
      FUN_180101625(1);
    }
  }
  else {
    uVar7 = 0;
  }
  if (DAT_180402640 != (local_70 ^ (ulonglong)auStack_108)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_70 ^ (ulonglong)auStack_108);
  }
  return uVar7;
}

