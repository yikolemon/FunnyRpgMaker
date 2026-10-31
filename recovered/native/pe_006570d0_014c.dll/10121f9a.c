/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10121f9a */

void FUN_10121f9a(undefined4 param_1)

{
  uint *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined *puVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int *unaff_FS_OFFSET;
  float10 fVar9;
  undefined1 auStack_78 [4];
  int local_74;
  uint *local_70;
  float local_6c;
  uint local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined8 local_58;
  undefined1 *local_28;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_78;
  local_18 = 0xffffffff;
  local_1c = &LAB_1012c9f0;
  local_20 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_20;
  local_74 = DAT_1039d74c;
  puVar2 = &stack0xfffffffc;
  puVar3 = auStack_78;
  if ((*(byte *)(DAT_1039d74c + 0x1ed0) & 2) == 0) {
    fVar9 = (float10)FUN_10111f20();
    local_5c = (float)fVar9;
    local_58 = (ulonglong)(uint)(local_5c * DAT_102b8f14) << 0x20;
    FUN_10107cf6(&local_58,4);
    puVar2 = local_28;
    puVar3 = local_24;
  }
  local_24 = puVar3;
  local_28 = puVar2;
  cVar4 = FUN_10107d2b("Dear ImGui Debug Log",param_1,0);
  iVar8 = DAT_1039d74c;
  if ((cVar4 == '\0') ||
     (*(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1,
     1 < *(short *)(*(int *)(iVar8 + 0x14cc) + 0x108))) {
    FUN_1010ad44();
    *unaff_FS_OFFSET = local_20;
  }
  else {
    local_70 = (uint *)(local_74 + 0x27b4);
    thunk_FUN_10130d81("All",local_70,0xdff);
    FUN_10115d65("(except InputRouting which is spammy)");
    FUN_10125734();
    FUN_10125734();
    FUN_10125734();
    FUN_10125734();
    FUN_10125734();
    FUN_10125734();
    FUN_10125734();
    FUN_10125734();
    FUN_10125734();
    FUN_10125734();
    FUN_10125734();
    FUN_10125734();
    cVar4 = FUN_1012e1ca("Clear");
    iVar8 = local_74;
    if (cVar4 != '\0') {
      if (*(int *)(local_74 + 0x27c0) != 0) {
        *(undefined4 *)(local_74 + 0x27bc) = 0;
        *(undefined4 *)(local_74 + 0x27b8) = 0;
        FUN_100fa2cb(*(int *)(local_74 + 0x27c0));
        *(undefined4 *)(iVar8 + 0x27c0) = 0;
      }
      if (*(int *)(iVar8 + 0x27cc) != 0) {
        *(undefined4 *)(iVar8 + 0x27c8) = 0;
        *(undefined4 *)(iVar8 + 0x27c4) = 0;
        FUN_100fa2cb(*(int *)(iVar8 + 0x27cc));
        *(undefined4 *)(iVar8 + 0x27cc) = 0;
      }
      *(undefined4 *)(iVar8 + 0x27d0) = 0;
      *(undefined4 *)(iVar8 + 0x27d4) = 0;
    }
    FUN_10114a0e(0,0xbf800000);
    cVar4 = FUN_1012e1ca(&DAT_10330487);
    if (cVar4 != '\0') {
      puVar5 = &DAT_1039d750;
      if (*(undefined **)(local_74 + 0x27c0) != (undefined *)0x0) {
        puVar5 = *(undefined **)(local_74 + 0x27c0);
      }
      FUN_101032f2(puVar5);
    }
    FUN_10114a0e(0,0xbf800000);
    cVar4 = FUN_1012e1ca("Configure Outputs..");
    if (cVar4 != '\0') {
      FUN_10115ea4("Outputs",0);
    }
    cVar4 = FUN_10116736("Outputs",0);
    puVar1 = local_70;
    if (cVar4 != '\0') {
      thunk_FUN_10130d81("OutputToTTY",local_70,0x100000);
      thunk_FUN_10130d81("OutputToDebugger",puVar1,0x200000);
      FUN_10111871(1);
      thunk_FUN_10130d81("OutputToTestEngine",puVar1,0x400000);
      FUN_10111961();
      FUN_101165cb();
    }
    local_58 = 0;
    FUN_1010c081("##log",&local_58,1,0xc000);
    local_68 = *local_70;
    *local_70 = local_68 & 0xffffffdf;
    FUN_100fbc78();
    local_18 = 0;
    FUN_100fbd22(*(undefined4 *)(local_74 + 0x27c4),0xbf800000);
    while( true ) {
      cVar4 = FUN_100fc2ca();
      if (cVar4 == '\0') break;
      fVar6 = (float)(int)local_58;
      while ((int)fVar6 < local_58._4_4_) {
        puVar5 = *(undefined **)(local_74 + 0x27c0);
        if (puVar5 == (undefined *)0x0) {
          puVar5 = &DAT_1039d750;
        }
        local_6c = (float)((int)fVar6 + 1);
        if ((int)local_6c < *(int *)(local_74 + 0x27c4)) {
          iVar8 = *(int *)(*(int *)(local_74 + 0x27cc) + (int)local_6c * 4) + -1;
        }
        else {
          iVar8 = *(int *)(local_74 + 0x27d0);
        }
        if (*(int *)(local_74 + 0x27c4) == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(*(int *)(local_74 + 0x27cc) + (int)fVar6 * 4);
        }
        FUN_10125880(puVar5 + iVar7,puVar5 + iVar8);
        fVar6 = local_6c;
      }
    }
    *local_70 = local_68;
    fVar9 = (float10)FUN_101158db();
    local_6c = (float)fVar9;
    local_60 = local_6c;
    fVar9 = (float10)FUN_101158ff();
    local_64 = (float)fVar9;
    if (local_64 <= local_6c) {
      FUN_10115acd(0x3f800000);
    }
    FUN_1010c644();
    FUN_1010ad44();
    local_18 = 0xffffffff;
    thunk_FUN_100fbc90();
    *unaff_FS_OFFSET = local_20;
  }
  return;
}

