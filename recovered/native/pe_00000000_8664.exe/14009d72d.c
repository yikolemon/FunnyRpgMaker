/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14009d72d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14009d72d(undefined4 *param_1,undefined4 param_2,uint *param_3)

{
  ulonglong uVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  longlong lVar8;
  char cVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined4 *local_b0;
  undefined8 local_a8;
  undefined4 *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_30;
  
  lVar8 = DAT_140f2a910;
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_e8;
  FUN_140091425(param_2);
  local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,param_1[8]);
  cVar9 = FUN_1400c4fe4(&DAT_140edcdbf,"Texture #%03d (%dx%d pixels)",*param_1,param_1[7]);
  if (cVar9 != '\0') {
    FUN_1400aeb6a("Show used rect",(char *)(lVar8 + 0x2b2c));
    FUN_14007b71f();
    FUN_14007ab2c(0x18);
    FUN_14009311d(&local_60);
    if (*(char *)((longlong)param_1 + 0x57) == '\x01') {
      local_58 = CONCAT44((float)(int)((ulonglong)*(undefined8 *)(param_1 + 7) >> 0x20),
                          (float)(int)*(undefined8 *)(param_1 + 7));
      FUN_1400b076d();
    }
    else {
      local_c0 = &local_58;
      local_58 = _DAT_140211330;
      uStack_50 = _UNK_140211338;
      local_c8 = &local_78;
      local_78 = _DAT_140211710;
      uStack_70 = _UNK_140211718;
      local_80 = CONCAT44(DAT_1401c8660._4_4_,(float)DAT_1401c8660);
      local_88 = 0;
      local_90 = CONCAT44((float)(int)((ulonglong)*(undefined8 *)(param_1 + 7) >> 0x20),
                          (float)(int)*(undefined8 *)(param_1 + 7));
      local_98 = 0;
      local_a0 = param_1;
      FUN_1400ae41c();
    }
    if (*(char *)(lVar8 + 0x2b2c) == '\x01') {
      uVar10 = FUN_14008feed();
      uVar1 = *(ulonglong *)(param_1 + 0xc);
      auVar5._8_4_ = 0;
      auVar5._0_8_ = uVar1;
      auVar5._12_2_ = (short)(uVar1 >> 0x30);
      auVar6._8_2_ = (short)(uVar1 >> 0x20);
      auVar6._0_8_ = uVar1;
      auVar6._10_4_ = auVar5._10_4_;
      auVar7._6_8_ = 0;
      auVar7._0_6_ = auVar6._8_6_;
      fVar12 = (float)(ushort)uVar1 + (float)local_60;
      fVar13 = (float)(int)CONCAT82(SUB148(auVar7 << 0x40,6),(short)(uVar1 >> 0x10)) +
               (float)((ulonglong)local_60 >> 0x20);
      local_78 = CONCAT44(fVar13,fVar12);
      local_58 = CONCAT44((float)((uint)param_1[0xd] >> 0x10) + fVar13,
                          (float)(param_1[0xd] & 0xffff) + fVar12);
      local_b8 = 0;
      local_c8 = (undefined8 *)((ulonglong)local_c8 & 0xffffffff00000000);
      local_c0 = (undefined8 *)CONCAT44(local_c0._4_4_,0x3f800000);
      FUN_1400de17e(uVar10,&local_78,&local_58,0xffff00ff);
    }
    if (param_3 != (uint *)0x0) {
      fVar12 = (float)((ulonglong)local_60 >> 0x20);
      uStack_50 = CONCAT44((float)(int)((ulonglong)*(undefined8 *)(param_1 + 7) >> 0x20) + fVar12,
                           (float)(int)*(undefined8 *)(param_1 + 7) + (float)local_60);
      local_58 = local_60;
      fVar13 = (float)(*param_3 & 0xffff) + (float)local_60;
      fVar12 = (float)(*param_3 >> 0x10) + fVar12;
      local_78 = CONCAT44(fVar12,fVar13);
      uStack_70 = CONCAT44((float)(param_3[1] >> 0x10) + fVar12,
                           (float)(param_3[1] & 0xffff) + fVar13);
      uVar10 = FUN_14008feed();
      local_c8 = (undefined8 *)((ulonglong)local_c8 & 0xffffffff00000000);
      FUN_1400e7b82(uVar10,&local_58,&local_78,0x64000000);
      uVar10 = FUN_14008feed();
      local_80 = CONCAT44((float)((ulonglong)uStack_70 >> 0x20) + DAT_1401c8660._4_4_,
                          (float)uStack_70 + (float)DAT_1401c8660);
      local_88 = CONCAT44((float)((ulonglong)local_78 >> 0x20) + DAT_1402112d0._4_4_,
                          (float)local_78 + (float)DAT_1402112d0);
      local_b8 = 0;
      local_c8 = (undefined8 *)((ulonglong)local_c8 & 0xffffffff00000000);
      local_c0 = (undefined8 *)CONCAT44(local_c0._4_4_,0x3f800000);
      FUN_1400de17e(uVar10,&local_88,&local_80,0xff00ffff);
    }
    FUN_14007af87(1);
    bVar2 = *(byte *)((longlong)param_1 + 0x56);
    uVar3 = param_1[6];
    uVar10 = FUN_1400e0ff7(uVar3);
    uVar4 = param_1[1];
    uVar11 = FUN_1400e0fdc(uVar4);
    local_c0 = (undefined8 *)CONCAT44(local_c0._4_4_,(uint)bVar2);
    local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,uVar3);
    FUN_1400abfd5("Status = %s (%d), Format = %s (%d), UseColors = %d",uVar11,uVar4,uVar10);
    uVar10 = *(undefined8 *)(param_1 + 2);
    local_a8 = 0;
    local_b0 = param_1;
    FUN_14009da44(&local_58);
    FUN_1400abfd5("TexRef = %s, BackendUserData = %p",&local_58,uVar10);
    FUN_1400c66d9();
  }
  FUN_140091667();
  if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_e8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_30 ^ (ulonglong)auStack_e8);
}

