/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180129e69 */

bool FUN_180129e69(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_e8 [32];
  float *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 auStack_90 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  ulonglong local_60;
  
  lVar3 = DAT_180419160;
  local_60 = DAT_180402640 ^ (ulonglong)auStack_e8;
  *(undefined1 *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10b) = 1;
  lVar2 = *(longlong *)(lVar3 + 0x1608);
  if (*(char *)(lVar2 + 0x10e) == '\0') {
    bVar9 = false;
    iVar5 = FUN_180106d4e(lVar2,param_1,0);
    local_c8 = (float *)CONCAT44(local_c8._4_4_,0xbf800000);
    FUN_1801023ca(&local_68,param_1,0,1);
    local_70 = *(float *)(lVar3 + 0xdf4) + *(float *)(lVar3 + 0xdf4) + local_68;
    local_6c = local_64;
    fVar10 = (float)*(undefined8 *)(lVar2 + 0x158) + 0.0;
    fVar11 = *(float *)(lVar2 + 400) + (float)((ulonglong)*(undefined8 *)(lVar2 + 0x158) >> 0x20);
    local_80 = CONCAT44(fVar11,fVar10);
    uStack_78 = CONCAT44(local_64 + fVar11,local_70 + fVar10);
    FUN_180111514(&local_70,0);
    cVar4 = FUN_1801116b6(&local_80,iVar5,0,0);
    if (cVar4 != '\0') {
      cVar4 = FUN_180107870(&local_80,iVar5,*(undefined4 *)(lVar3 + 0x1fa0));
      if (cVar4 == '\0') {
        uVar8 = 0x16;
        bVar9 = false;
      }
      else {
        cVar4 = FUN_180119386(*(undefined4 *)(lVar3 + 0x2b04));
        bVar9 = true;
        uVar8 = 0x17;
        if (cVar4 == '\0') {
          cVar4 = FUN_1801083d6(0,0);
          if (cVar4 == '\0') {
            bVar9 = *(int *)(lVar3 + 0x2214) == iVar5;
          }
        }
      }
      FUN_18012a120(0,param_2);
      puVar7 = (undefined8 *)FUN_18010136d(uVar8);
      auStack_90[0] = puVar7[1];
      local_c0 = &uStack_a0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_c8 = (float *)((longlong)&local_a8 + 4);
      local_98._4_4_ = (undefined4)((ulonglong)*puVar7 >> 0x20);
      uVar1 = local_98._4_4_;
      local_98 = *puVar7;
      FUN_1800ff447(local_c8,uVar1,(undefined4)auStack_90[0],&local_a8);
      local_c8 = (float *)((longlong)&local_98 + 4);
      local_c0 = auStack_90;
      FUN_1800ff588((float)local_a8 + DAT_1802de790,local_a8._4_4_,(undefined4)uStack_a0,&local_98);
      FUN_180102b0e(&local_80,iVar5,0);
      uVar1 = *(undefined4 *)(lVar3 + 0xdfc);
      uVar6 = FUN_18010130a(&local_98);
      local_c8 = (float *)CONCAT44(local_c8._4_4_,uVar1);
      FUN_1801027d9(local_80,uStack_78,uVar6,1);
      local_c0 = (undefined8 *)(lVar3 + 0xe98);
      local_c8 = &local_68;
      local_b8 = &local_80;
      FUN_180102475(&local_80,&uStack_78,param_1,0);
    }
  }
  else {
    bVar9 = false;
  }
  if (DAT_180402640 == (local_60 ^ (ulonglong)auStack_e8)) {
    return bVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_60 ^ (ulonglong)auStack_e8);
}

