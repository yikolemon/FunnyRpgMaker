/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b9e72 */

void FUN_101b9e72(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  int *unaff_FS_OFFSET;
  float10 fVar7;
  undefined1 auStack_78 [4];
  undefined *local_74;
  int *local_70;
  undefined *local_6c;
  undefined *local_68;
  int *local_64;
  float local_60;
  undefined *local_5c;
  undefined8 local_58;
  undefined1 *local_28;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_78;
  local_18 = 0xffffffff;
  local_1c = &LAB_101bcfa0;
  local_20 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_20;
  cVar2 = FUN_10107d2b(param_1,param_2,0);
  if (cVar2 == '\0') {
    FUN_1010ad44();
    *unaff_FS_OFFSET = local_20;
  }
  else {
    cVar2 = FUN_10116736("Options",0);
    if (cVar2 != '\0') {
      FUN_1012ff1a("Auto-scroll",local_70 + 0x4a);
      FUN_101165cb();
    }
    local_58 = 0;
    cVar2 = FUN_1012e1b7("Options",&local_58);
    if (cVar2 != '\0') {
      FUN_10115ea4("Options",0);
    }
    FUN_10114a0e(0,0xbf800000);
    local_58 = 0;
    uVar3 = FUN_1012e1b7("Clear",&local_58);
    local_74 = (undefined *)CONCAT31(local_74._1_3_,uVar3);
    FUN_10114a0e(0,0xbf800000);
    local_58 = 0;
    uVar3 = FUN_1012e1b7(&DAT_10330487,&local_58);
    local_6c = (undefined *)CONCAT31(local_6c._1_3_,uVar3);
    FUN_10114a0e(0,0xbf800000);
    local_64 = local_70 + 3;
    FUN_100fb638("Filter",0xc2c80000);
    FUN_10132188();
    local_58 = 0;
    cVar2 = FUN_1010c081("scrolling",&local_58,0,0x800);
    if (cVar2 != '\0') {
      if ((char)local_74 != '\0') {
        FUN_101ba1b0();
      }
      if ((char)local_6c != '\0') {
        FUN_10110666(0xffffffff);
      }
      local_58 = 0;
      FUN_100fd3bc(0xe,&local_58);
      local_6c = (undefined *)local_70[2];
      local_68 = local_6c + *local_70 + -1;
      if (local_6c == (undefined *)0x0) {
        local_6c = &DAT_1039d750;
        local_68 = &DAT_1039d750;
      }
      if (local_70[0x43] == 0) {
        FUN_100fbc78();
        local_18 = 0;
        FUN_100fbd22(local_70[0x47],0xbf800000);
        while (cVar2 = FUN_100fc2ca(), cVar2 != '\0') {
          local_74 = (undefined *)local_58;
          while ((int)local_74 < local_58._4_4_) {
            iVar4 = (int)local_74 * 4;
            local_74 = local_74 + 1;
            puVar6 = local_68;
            if ((int)local_74 < local_70[0x47]) {
              puVar6 = local_6c + *(int *)(local_70[0x49] + (int)local_74 * 4) + -1;
            }
            FUN_1012d079(local_6c + *(int *)(local_70[0x49] + iVar4),puVar6);
          }
        }
        FUN_100fbc90();
        local_18 = 0xffffffff;
        thunk_FUN_100fbc90();
      }
      else {
        iVar4 = local_70[0x47];
        if (0 < iVar4) {
          iVar5 = 1;
          do {
            puVar6 = local_6c + *(int *)(local_70[0x49] + -4 + iVar5 * 4);
            local_74 = local_68;
            if (iVar5 < iVar4) {
              local_74 = local_6c + *(int *)(local_70[0x49] + iVar5 * 4) + -1;
            }
            cVar2 = FUN_100fb858(puVar6,local_74);
            if (cVar2 != '\0') {
              FUN_1012d079(puVar6,local_74);
            }
            iVar4 = local_70[0x47];
            bVar1 = iVar5 < iVar4;
            iVar5 = iVar5 + 1;
          } while (bVar1);
        }
      }
      FUN_100fd4c4(1);
      if ((char)local_70[0x4a] == '\x01') {
        fVar7 = (float10)FUN_101158db();
        local_74 = (undefined *)(float)fVar7;
        local_5c = local_74;
        fVar7 = (float10)FUN_101158ff();
        local_60 = (float)fVar7;
        if (local_60 <= (float)local_74) {
          FUN_10115acd(0x3f800000);
        }
      }
    }
    FUN_1010c644();
    FUN_1010ad44();
    *unaff_FS_OFFSET = local_20;
  }
  return;
}

