/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101412ec */

undefined1
FUN_101412ec(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,int param_6,
            uint param_7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  uint uVar8;
  float10 fVar9;
  float fVar10;
  undefined1 auStack_7c [3];
  undefined1 local_79;
  int local_78;
  undefined4 local_74;
  float local_70;
  undefined4 *local_6c;
  undefined4 local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined1 local_54 [64];
  uint local_14;
  
  iVar2 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)auStack_7c;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  if (*(char *)(*(int *)(iVar2 + 0x14cc) + 0xfe) != '\0') {
    uVar3 = 0;
    goto LAB_10141706;
  }
  if (param_6 == 0) {
    iVar5 = FUN_10133ec9(param_2);
    param_6 = *(int *)(iVar5 + 8);
  }
  uVar8 = iVar2 + 0x1e6e;
  if ((*(byte *)(iVar2 + 0x1e48) & 8) == 0) {
    uVar8 = iVar2 + 0x2550;
  }
  local_78 = param_6;
  if (((param_7 >> 0xe & 1) == 0) || (iVar5 = FUN_101347e7(param_2,param_3,uVar8), iVar5 != 0)) {
    FUN_10133ed7(local_54,0x40,param_2,param_3,local_78);
  }
  else {
    local_54[0] = 0;
  }
  *(byte *)(iVar2 + 0x1e4e) = *(byte *)(iVar2 + 0x1e4e) | 1;
  if (param_4 == 0) {
    uVar3 = FUN_10141729(param_1,local_54,0x40,param_7 | 0x10001000,0,0);
    if ((*(byte *)(iVar2 + 0x1e89) & 8) != 0) {
      local_70 = 0.0;
      local_79 = uVar3;
      goto LAB_101414cb;
    }
    *(byte *)(iVar2 + 0x1e86) = *(byte *)(iVar2 + 0x1e86) & 0xfe;
    uVar7 = 0;
  }
  else {
    fVar9 = (float10)FUN_101155f9();
    local_70 = (float)fVar9;
    local_60 = local_70;
    FUN_10115649();
    FUN_101131fa(param_1);
    fVar9 = (float10)FUN_10115533();
    local_64 = (float)fVar9;
    fVar10 = *(float *)(iVar2 + 0xd24) + local_70;
    fVar9 = (float10)FUN_100fdbca(0x3f800000,local_64 - (fVar10 + fVar10));
    FUN_100fb68f((float)fVar9);
    local_74 = 0;
    local_79 = FUN_10141729(&DAT_10356101,local_54,0x40,param_7 | 0x10001000,0,0);
    uVar6 = local_74;
    if ((*(byte *)(iVar2 + 0x1e89) & 8) == 0) {
LAB_10141508:
      local_74 = uVar6;
      local_6c = (undefined4 *)(iVar2 + 0x1e80);
      local_78 = *(int *)(iVar2 + 0xd0c);
      local_68 = *(undefined4 *)(iVar2 + 0xd10);
      *(undefined4 *)(iVar2 + 0xd0c) = local_68;
      if ((param_7 >> 9 & 1) != 0) {
        FUN_10111871(1);
      }
      FUN_1011177d(8,1);
      FUN_10114a0e(0,*(undefined4 *)(iVar2 + 0xd24));
      local_5c = local_70;
      local_58 = local_70;
      cVar4 = FUN_1012df59(&DAT_10347065,&local_5c,0);
      if (cVar4 != '\0') {
        iVar5 = param_4;
        if (*(char *)(iVar2 + 0x104) != '\0') {
          iVar5 = param_5;
        }
        if (param_5 == 0) {
          iVar5 = param_4;
        }
        uVar6 = FUN_10133f65(param_2,0x2d,param_3,param_3,iVar5);
        local_79 = 1;
        local_74 = CONCAT31((int3)((uint)uVar6 >> 8),1);
      }
      FUN_10114a0e(0,*(undefined4 *)(iVar2 + 0xd24));
      local_5c = local_70;
      local_58 = local_70;
      cVar4 = FUN_1012df59(&DAT_103471b7,&local_5c,0);
      if (cVar4 != '\0') {
        iVar5 = param_4;
        if (*(char *)(iVar2 + 0x104) != '\0') {
          iVar5 = param_5;
        }
        if (param_5 == 0) {
          iVar5 = param_4;
        }
        uVar6 = FUN_10133f65(param_2,0x2b,param_3,param_3,iVar5);
        local_79 = 1;
        local_74 = CONCAT31((int3)((uint)uVar6 >> 8),1);
      }
      FUN_10111839();
      if ((param_7 >> 9 & 1) != 0) {
        FUN_10111961();
      }
      iVar5 = FUN_100fd57d(param_1,0);
      if (param_1 != iVar5) {
        FUN_10114a0e(0,*(undefined4 *)(iVar2 + 0xd24));
        FUN_1012cbcc(param_1,iVar5,0);
      }
      *(int *)(iVar2 + 0xd0c) = local_78;
      *(undefined4 *)(iVar2 + 0xd10) = local_68;
      FUN_10113568();
      FUN_1011462f();
      *(byte *)(iVar2 + 0x1e86) = *(byte *)(iVar2 + 0x1e86) & 0xfe;
      puVar1 = local_6c;
      cVar4 = (char)local_74;
    }
    else {
LAB_101414cb:
      uVar6 = FUN_1013461a(local_54,param_2,param_3,local_78,(int)(param_7 << 0x12) >> 0x1f & uVar8)
      ;
      if (param_4 != 0) goto LAB_10141508;
      *(byte *)(iVar2 + 0x1e86) = *(byte *)(iVar2 + 0x1e86) & 0xfe;
      puVar1 = (undefined4 *)(iVar2 + 0x1e80);
      cVar4 = (char)uVar6;
    }
    if (cVar4 == '\0') {
      uVar7 = 0;
      uVar3 = local_79;
    }
    else {
      FUN_10102913(*puVar1);
      uVar7 = 1;
      uVar3 = local_79;
    }
  }
  if ((param_7 & 0x40) == 0) {
    uVar3 = uVar7;
  }
LAB_10141706:
  if (DAT_10388d00 != (local_14 ^ (uint)auStack_7c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return uVar3;
}

