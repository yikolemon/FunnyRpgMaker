/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011c2a7 */

undefined4 FUN_1011c2a7(undefined4 param_1,undefined8 *param_2,uint param_3,int *param_4)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float10 fVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  int local_158;
  float local_154;
  float fStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  int local_144;
  int iStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined8 local_134;
  float local_12c;
  float local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined8 uStack_11c;
  undefined8 local_114;
  int iStack_10c;
  int iStack_108;
  undefined5 uStack_104;
  uint local_14;
  
  iVar2 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_158;
  uVar8 = 0;
  if ((*(byte *)(DAT_1039d74c + 0x30) & 0x80) != 0) {
    local_158 = *(int *)(DAT_1039d74c + 0x14cc);
    fVar9 = (float)(*(byte *)(local_158 + 0xfe) | param_3);
    if (((uint)fVar9 & 1) == 0) {
      *(undefined1 *)(local_158 + 0xfb) = 1;
      local_158 = *(int *)(iVar2 + 0x14cc);
    }
    iVar5 = FUN_1011b528(iVar2,param_1);
    if (iVar5 == 0) {
      if ((*(byte *)(iVar2 + 0x27b5) & 4) != 0) {
        FUN_100f99e6("[docking] DockSpace: dockspace node 0x%08X created\n",param_1);
      }
      iVar5 = FUN_1011b94c();
      *(undefined4 *)(iVar5 + 8) = 0x800;
      *(uint *)(iVar5 + 0x10) = *(uint *)(iVar5 + 4) | *(uint *)(iVar5 + 0xc) | 0x800;
    }
    local_154 = fVar9;
    if (param_4 == (int *)0x0) {
      *(float *)(iVar5 + 4) = fVar9;
      local_114 = 0;
      iStack_10c = 0;
      iStack_108 = 0;
      uStack_104 = 0;
      local_124 = 0;
      local_120 = (uint)local_120._2_2_ << 0x10;
      uVar3 = 1;
      uVar1 = DAT_102b8e80;
    }
    else {
      if ((*param_4 != *(int *)(iVar5 + 0x54)) && ((*(byte *)(iVar2 + 0x27b5) & 4) != 0)) {
        FUN_100f99e6("[docking] DockSpace: dockspace node 0x%08X: setup WindowClass 0x%08X -> 0x%08X\n"
                     ,param_1,*(int *)(iVar5 + 0x54),*param_4);
      }
      *(float *)(iVar5 + 4) = fVar9;
      uStack_104 = (undefined5)((ulonglong)*(undefined8 *)((int)param_4 + 0x15) >> 0x18);
      local_114 = *(undefined8 *)(param_4 + 2);
      iStack_10c = param_4[4];
      iStack_108 = param_4[5];
      uVar3 = *(undefined1 *)((int)param_4 + 0x1d);
      local_120 = CONCAT22(local_120._2_2_,*(undefined2 *)((int)param_4 + 0x22));
      local_124 = *(undefined4 *)((int)param_4 + 0x1e);
      uVar1 = *(undefined8 *)param_4;
    }
    *(undefined8 *)(iVar5 + 0x54) = uVar1;
    *(undefined4 *)(iVar5 + 0x5c) = (undefined4)local_114;
    *(undefined4 *)(iVar5 + 0x60) = local_114._4_4_;
    *(int *)(iVar5 + 100) = iStack_10c;
    *(int *)(iVar5 + 0x68) = iStack_108;
    *(ulonglong *)(iVar5 + 0x69) = CONCAT53(uStack_104,iStack_108._1_3_);
    *(undefined1 *)(iVar5 + 0x71) = uVar3;
    *(undefined4 *)(iVar5 + 0x72) = local_124;
    *(undefined2 *)(iVar5 + 0x76) = (undefined2)local_120;
    iVar12 = *(int *)(iVar2 + 4);
    uVar6 = *(uint *)(iVar5 + 8) | 0x400;
    *(uint *)(iVar5 + 8) = uVar6;
    uVar8 = param_1;
    if ((((uint)local_154 & 1) == 0) && (*(int *)(iVar5 + 0x90) == iVar12)) {
      *(uint *)(iVar5 + 0x10) = (uint)fVar9 | *(uint *)(iVar5 + 0xc) | uVar6;
    }
    else {
      *(uint *)(iVar5 + 0x10) = (uint)fVar9 | *(uint *)(iVar5 + 0xc) | uVar6;
      if (((uint)fVar9 & 1) == 0) {
        FUN_1010c3e4(&local_12c);
        iVar11 = (int)(float)*param_2;
        iVar12 = (int)(float)((ulonglong)*param_2 >> 0x20);
        fVar13 = (float)iVar11;
        fVar9 = (float)iVar12;
        local_134 = CONCAT44(fVar9,fVar13);
        if (iVar11 < 1) {
          uStack_13c = 0;
          uStack_138 = 0;
          uStack_14c = 0;
          uStack_148 = 0;
          local_154 = fVar13;
          fStack_150 = fVar9;
          local_144 = iVar11;
          iStack_140 = iVar12;
          fVar10 = (float10)FUN_100fdbca(local_12c + fVar13,0x40800000);
          local_134 = CONCAT44(local_134._4_4_,(float)fVar10);
          fVar9 = fStack_150;
          iVar12 = iStack_140;
        }
        if (iVar12 < 1) {
          fVar10 = (float10)FUN_100fdbca(fVar9 + local_128,0x40800000);
          local_134 = CONCAT44((float)fVar10,(float)local_134);
        }
        iVar12 = local_158;
        *(undefined8 *)(iVar5 + 0x34) = *(undefined8 *)(local_158 + 0x144);
        local_154 = (float)local_134;
        fStack_150 = local_134._4_4_;
        uStack_14c = 0;
        uStack_148 = 0;
        *(float *)(iVar5 + 0x3c) = (float)local_134;
        *(float *)(iVar5 + 0x40) = local_134._4_4_;
        *(float *)(iVar5 + 0x44) = (float)local_134;
        *(float *)(iVar5 + 0x48) = local_134._4_4_;
        local_114 = 0;
        FUN_10111d56(iVar5 + 0x34,0,&local_114);
        FUN_10107cf6(iVar5 + 0x3c,0);
        *(undefined1 *)(iVar2 + 0x1f14) = 0;
        FUN_100fa4b1(&local_114,0x100,"%s/DockSpace_%08X",*(undefined4 *)(iVar12 + 4),param_1);
        FUN_100fd0a3(8,0);
        FUN_10107d2b(&local_114,0,0x18001bb);
        FUN_100fd4c4(1);
        iVar12 = *(int *)(iVar2 + 0x14cc);
        FUN_1011c696();
        uVar7 = FUN_101021d4(&local_114,0);
        *(undefined4 *)(iVar12 + 0xbc) = uVar7;
        *(undefined4 *)(iVar5 + 0x84) = 0;
        if ((*(int *)(iVar5 + 0x1c) == 0) && ((*(byte *)(iVar5 + 0x11) & 8) == 0)) {
          uVar6 = *(uint *)(iVar5 + 8) | 0x800;
          *(uint *)(iVar5 + 8) = uVar6;
          *(uint *)(iVar5 + 0x10) = *(uint *)(iVar5 + 4) | *(uint *)(iVar5 + 0xc) | uVar6;
        }
        FUN_1011ab9c();
        FUN_1010ad44();
        local_124 = *(undefined4 *)(iVar5 + 0x34);
        local_120 = *(int *)(iVar5 + 0x38);
        uStack_11c = CONCAT44((float)((ulonglong)*(undefined8 *)(iVar5 + 0x34) >> 0x20) + fStack_150
                              ,(float)*(undefined8 *)(iVar5 + 0x34) + local_154);
        FUN_1010c810(&local_134,0xbf800000);
        FUN_1010c9d8(&local_124,param_1,0,2);
        uVar6 = *(uint *)(iVar2 + 0x1e88);
        if (((uVar6 & 1) != 0) &&
           (cVar4 = FUN_10111ac1(*(undefined4 *)(iVar2 + 0x14d0),iVar12,0,1), cVar4 != '\0')) {
          *(uint *)(iVar2 + 0x1e88) = uVar6 | 0x80;
        }
      }
      else {
        *(undefined4 *)(iVar5 + 0x8c) = *(undefined4 *)(iVar2 + 4);
      }
    }
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_158)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return uVar8;
}

