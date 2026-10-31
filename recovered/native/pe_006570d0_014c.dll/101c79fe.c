/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c79fe */

undefined4 FUN_101c79fe(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  double local_f8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint local_18;
  
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  local_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  local_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  FUN_101c76d0(param_2,param_3,&local_50);
  local_60 = CONCAT44(uStack_3c,local_40);
  local_70 = local_50;
  uStack_6c = uStack_4c;
  uStack_68 = uStack_48;
  uStack_64 = uStack_44;
  fVar10 = (float10)FUN_101c725a(local_50,uStack_4c,uStack_48,uStack_44,local_40,uStack_3c);
  local_f8 = (double)fVar10;
  local_80 = CONCAT44(uStack_24,uStack_28);
  local_90 = uStack_38;
  uStack_8c = uStack_34;
  uStack_88 = local_30;
  uStack_84 = uStack_2c;
  iVar7 = 0;
  do {
    fVar10 = (float10)FUN_101c7430(local_70,uStack_6c,uStack_68,uStack_64,(int)local_60,
                                   (int)((ulonglong)local_60 >> 0x20),iVar7);
    fVar11 = (float10)FUN_101c7430(local_90,uStack_8c,uStack_88,uStack_84,(int)local_80,
                                   (int)((ulonglong)local_80 >> 0x20),iVar7);
    if (((double)fVar10 != (double)fVar11) || (NAN((double)fVar10) || NAN((double)fVar11))) {
      fVar10 = (float10)FUN_101c7430(local_70,uStack_6c,uStack_68,uStack_64,(int)local_60,
                                     (int)((ulonglong)local_60 >> 0x20),iVar7);
      fVar11 = (float10)FUN_101c7430(local_90,uStack_8c,uStack_88,uStack_84,(int)local_80,
                                     (int)((ulonglong)local_80 >> 0x20),iVar7);
      fVar12 = (float10)FUN_101c7430(local_70,uStack_6c,uStack_68,uStack_64,(int)local_60,
                                     (int)((ulonglong)local_60 >> 0x20),iVar7);
      fVar12 = (float10)FUN_101c715f((double)fVar12);
      fVar13 = (float10)FUN_101c7430(local_90,uStack_8c,uStack_88,uStack_84,(int)local_80,
                                     (int)((ulonglong)local_80 >> 0x20),iVar7);
      fVar13 = (float10)FUN_101c715f((double)fVar13);
      if ((double)fVar11 <= (double)fVar10) {
        iVar4 = FUN_101c79d0((double)fVar12);
        iVar5 = FUN_101c79a2((double)fVar13);
      }
      else {
        iVar4 = FUN_101c79a2((double)fVar12);
        iVar5 = FUN_101c79d0((double)fVar13);
      }
      iVar8 = 8;
      do {
        uVar6 = iVar4 - iVar5;
        if (iVar4 < iVar5) {
          uVar6 = iVar5 - iVar4;
        }
        if (uVar6 < 2) break;
        fVar10 = (float10)FUN_1026dde0((double)(iVar5 + iVar4) * DAT_102b96d8);
        iVar9 = (int)fVar10;
        FUN_101c7475(&local_a8,local_70,uStack_6c,uStack_68,uStack_64,(int)local_60,
                     (int)((ulonglong)local_60 >> 0x20),*(undefined8 *)(&DAT_10302fa8 + iVar9 * 8),
                     local_90,uStack_8c,uStack_88,uStack_84,local_80,iVar7);
        fVar10 = (float10)FUN_101c725a(local_a8,uStack_a4,uStack_a0,uStack_9c,(int)local_98,
                                       (int)((ulonglong)local_98 >> 0x20));
        cVar3 = FUN_101c736c(local_f8,param_3,(double)fVar10);
        puVar1 = &local_70;
        dVar2 = (double)fVar10;
        if (cVar3 != '\0') {
          puVar1 = &local_90;
          iVar5 = iVar9;
          iVar9 = iVar4;
          dVar2 = local_f8;
        }
        local_f8 = dVar2;
        iVar4 = iVar9;
        *puVar1 = local_a8;
        puVar1[1] = uStack_a4;
        puVar1[2] = uStack_a0;
        puVar1[3] = uStack_9c;
        *(undefined8 *)(puVar1 + 4) = local_98;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    iVar7 = iVar7 + 1;
    if (iVar7 == 3) {
      FUN_101c7968(param_1,local_70,uStack_6c,uStack_68,uStack_64,(int)local_60,
                   (int)((ulonglong)local_60 >> 0x20),local_90,uStack_8c,uStack_88,uStack_84,
                   local_80);
      if (DAT_10388d00 == (local_18 ^ (uint)&stack0xfffffffc)) {
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_102283e0();
    }
  } while( true );
}

