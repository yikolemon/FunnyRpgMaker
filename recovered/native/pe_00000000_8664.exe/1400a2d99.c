/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a2d99 */

bool FUN_1400a2d99(undefined8 param_1,undefined8 param_2)

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
  
  lVar3 = DAT_140f2a910;
  local_60 = DAT_140f17b40 ^ (ulonglong)auStack_e8;
  *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
  lVar2 = *(longlong *)(lVar3 + 0x1608);
  if (*(char *)(lVar2 + 0x10e) == '\0') {
    bVar9 = false;
    iVar5 = FUN_140080066(lVar2,param_1,0);
    local_c8 = (float *)CONCAT44(local_c8._4_4_,0xbf800000);
    FUN_14007b686(&local_68,param_1,0,1);
    local_70 = *(float *)(lVar3 + 0xdf4) + *(float *)(lVar3 + 0xdf4) + local_68;
    local_6c = local_64;
    fVar10 = (float)*(undefined8 *)(lVar2 + 0x158) + 0.0;
    fVar11 = *(float *)(lVar2 + 400) + (float)((ulonglong)*(undefined8 *)(lVar2 + 0x158) >> 0x20);
    local_80 = CONCAT44(fVar11,fVar10);
    uStack_78 = CONCAT44(local_64 + fVar11,local_70 + fVar10);
    FUN_14008a82c(&local_70,0);
    cVar4 = FUN_14008a9ce(&local_80,iVar5,0,0);
    if (cVar4 != '\0') {
      cVar4 = FUN_140080b88(&local_80,iVar5,*(undefined4 *)(lVar3 + 0x1fa0));
      if (cVar4 == '\0') {
        uVar8 = 0x16;
        bVar9 = false;
      }
      else {
        cVar4 = FUN_14009269e(*(undefined4 *)(lVar3 + 0x2b04));
        bVar9 = true;
        uVar8 = 0x17;
        if (cVar4 == '\0') {
          cVar4 = FUN_1400816ee(0,0);
          if (cVar4 == '\0') {
            bVar9 = *(int *)(lVar3 + 0x2214) == iVar5;
          }
        }
      }
      FUN_1400a3050(0,param_2);
      puVar7 = (undefined8 *)FUN_14007a629(uVar8);
      auStack_90[0] = puVar7[1];
      local_c0 = &uStack_a0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_c8 = (float *)((longlong)&local_a8 + 4);
      local_98._4_4_ = (undefined4)((ulonglong)*puVar7 >> 0x20);
      uVar1 = local_98._4_4_;
      local_98 = *puVar7;
      FUN_140078703(local_c8,uVar1,(undefined4)auStack_90[0],&local_a8);
      local_c8 = (float *)((longlong)&local_98 + 4);
      local_c0 = auStack_90;
      FUN_140078844((float)local_a8 + DAT_14021001c,local_a8._4_4_,(undefined4)uStack_a0,&local_98);
      FUN_14007bdca(&local_80,iVar5,0);
      uVar1 = *(undefined4 *)(lVar3 + 0xdfc);
      uVar6 = FUN_14007a5c6(&local_98);
      local_c8 = (float *)CONCAT44(local_c8._4_4_,uVar1);
      FUN_14007ba95(local_80,uStack_78,uVar6,1);
      local_c0 = (undefined8 *)(lVar3 + 0xe98);
      local_c8 = &local_68;
      local_b8 = &local_80;
      FUN_14007b731(&local_80,&uStack_78,param_1,0);
    }
  }
  else {
    bVar9 = false;
  }
  if (DAT_140f17b40 == (local_60 ^ (ulonglong)auStack_e8)) {
    return bVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_60 ^ (ulonglong)auStack_e8);
}

