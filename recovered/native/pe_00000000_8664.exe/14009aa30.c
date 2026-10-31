/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14009aa30 */

undefined4 FUN_14009aa30(undefined4 param_1,undefined8 *param_2,uint param_3,int *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  undefined8 local_198;
  float local_190 [2];
  undefined8 local_188;
  ulonglong local_180;
  undefined8 local_178;
  undefined5 uStack_170;
  undefined3 uStack_16b;
  undefined5 uStack_168;
  ulonglong local_70;
  
  lVar3 = DAT_140f2a910;
  local_70 = DAT_140f17b40 ^ (ulonglong)auStack_1c8;
  uVar7 = 0;
  if ((*(byte *)(DAT_140f2a910 + 0x30) & 0x80) != 0) {
    lVar9 = *(longlong *)(DAT_140f2a910 + 0x1608);
    param_3 = param_3 | *(byte *)(lVar9 + 0x10e);
    if ((param_3 & 1) == 0) {
      *(undefined1 *)(lVar9 + 0x10b) = 1;
      lVar9 = *(longlong *)(lVar3 + 0x1608);
    }
    lVar8 = FUN_140099b24(lVar3,param_1);
    if (lVar8 == 0) {
      if ((*(byte *)(lVar3 + 0x2acd) & 4) != 0) {
        FUN_1400772a6("[docking] DockSpace: dockspace node 0x%08X created\n",param_1);
      }
      lVar8 = FUN_14009a039(lVar3,param_1);
      *(undefined4 *)(lVar8 + 8) = 0x800;
      *(uint *)(lVar8 + 0x10) = *(uint *)(lVar8 + 4) | *(uint *)(lVar8 + 0xc) | 0x800;
    }
    if (param_4 == (int *)0x0) {
      *(uint *)(lVar8 + 4) = param_3;
      local_178 = 0;
      uStack_170 = 0;
      uStack_16b = 0;
      uStack_168 = 0;
      local_188 = 0;
      local_180 = local_180 & 0xffffffffffff0000;
      uVar4 = 1;
      uVar2 = DAT_140211660;
    }
    else {
      if ((*param_4 != *(int *)(lVar8 + 0x68)) && ((*(byte *)(lVar3 + 0x2acd) & 4) != 0)) {
        FUN_1400772a6("[docking] DockSpace: dockspace node 0x%08X: setup WindowClass 0x%08X -> 0x%08X\n"
                      ,param_1);
      }
      *(uint *)(lVar8 + 4) = param_3;
      uStack_168 = (undefined5)((ulonglong)*(undefined8 *)((longlong)param_4 + 0x15) >> 0x18);
      local_178 = *(undefined8 *)(param_4 + 2);
      uStack_170 = (undefined5)*(undefined8 *)(param_4 + 4);
      uStack_16b = (undefined3)((ulonglong)*(undefined8 *)(param_4 + 4) >> 0x28);
      uVar4 = *(undefined1 *)((longlong)param_4 + 0x1d);
      local_180 = CONCAT62(local_180._2_6_,*(undefined2 *)((longlong)param_4 + 0x26));
      local_188 = *(undefined8 *)((longlong)param_4 + 0x1e);
      uVar2 = *(undefined8 *)param_4;
    }
    *(undefined8 *)(lVar8 + 0x68) = uVar2;
    *(undefined8 *)(lVar8 + 0x70) = local_178;
    *(ulonglong *)(lVar8 + 0x78) = CONCAT35(uStack_16b,uStack_170);
    *(ulonglong *)(lVar8 + 0x7d) = CONCAT53(uStack_168,uStack_16b);
    *(undefined1 *)(lVar8 + 0x85) = uVar4;
    *(undefined8 *)(lVar8 + 0x86) = local_188;
    *(undefined2 *)(lVar8 + 0x8e) = (undefined2)local_180;
    iVar12 = *(int *)(lVar3 + 4);
    uVar6 = *(uint *)(lVar8 + 8) | 0x400;
    *(uint *)(lVar8 + 8) = uVar6;
    uVar7 = param_1;
    if (((param_3 & 1) == 0) && (*(int *)(lVar8 + 0xb8) == iVar12)) {
      *(uint *)(lVar8 + 0x10) = param_3 | *(uint *)(lVar8 + 0xc) | uVar6;
    }
    else {
      *(uint *)(lVar8 + 0x10) = param_3 | *(uint *)(lVar8 + 0xc) | uVar6;
      if ((param_3 & 1) == 0) {
        FUN_14008a381(local_190);
        iVar12 = (int)(float)*param_2;
        iVar13 = (int)(float)((ulonglong)*param_2 >> 0x20);
        fVar11 = (float)iVar12;
        local_198 = CONCAT44((float)iVar13,fVar11);
        if (iVar12 < 1) {
          uVar10 = FUN_14007b71f(local_190[0] + fVar11,DAT_140211518);
          local_198 = CONCAT44(local_198._4_4_,uVar10);
        }
        if (iVar13 < 1) {
          uVar10 = FUN_14007b71f();
          local_198 = CONCAT44(uVar10,(undefined4)local_198);
        }
        uVar2 = local_198;
        *(undefined8 *)(lVar8 + 0x48) = *(undefined8 *)(lVar9 + 0x158);
        *(undefined8 *)(lVar8 + 0x58) = local_198;
        *(undefined8 *)(lVar8 + 0x50) = local_198;
        local_178 = 0;
        FUN_14008fda3(lVar8 + 0x48,0);
        FUN_140085d59(lVar8 + 0x50,0);
        *(undefined1 *)(lVar3 + 0x2074) = 0;
        local_1a8 = param_1;
        FUN_140077d91(&local_178,0x100,"%s/DockSpace_%08X",*(undefined8 *)(lVar9 + 8));
        FUN_14007ab2c(8,0);
        FUN_140085d7e(&local_178,0,0x18001bb);
        FUN_14007af87(1);
        lVar1 = *(longlong *)(lVar3 + 0x1608);
        FUN_14009ae0e(lVar8,lVar1);
        uVar10 = FUN_140080066(lVar9,&local_178,0);
        *(undefined4 *)(lVar1 + 0xcc) = uVar10;
        *(undefined8 *)(lVar8 + 0xa8) = 0;
        if ((*(longlong *)(lVar8 + 0x20) == 0) && ((*(byte *)(lVar8 + 0x11) & 8) == 0)) {
          uVar6 = *(uint *)(lVar8 + 8) | 0x800;
          *(uint *)(lVar8 + 8) = uVar6;
          *(uint *)(lVar8 + 0x10) = *(uint *)(lVar8 + 4) | *(uint *)(lVar8 + 0xc) | uVar6;
        }
        FUN_14009910e(lVar8);
        FUN_140088c18();
        local_188 = *(undefined8 *)(lVar8 + 0x48);
        local_180 = CONCAT44((float)((ulonglong)local_188 >> 0x20) +
                             (float)((ulonglong)uVar2 >> 0x20),(float)local_188 + (float)uVar2);
        FUN_14008a82c(&local_198,DAT_1401c86a4);
        FUN_14008a9ce(&local_188,param_1,0,2);
        uVar6 = *(uint *)(lVar3 + 0x1fe8);
        if (((uVar6 & 1) != 0) &&
           (cVar5 = FUN_14008fb00(*(undefined8 *)(lVar3 + 0x1610),lVar1,0,1), cVar5 != '\0')) {
          *(uint *)(lVar3 + 0x1fe8) = uVar6 | 0x80;
        }
      }
      else {
        *(undefined4 *)(lVar8 + 0xb4) = *(undefined4 *)(lVar3 + 4);
      }
    }
  }
  if (DAT_140f17b40 != (local_70 ^ (ulonglong)auStack_1c8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_70 ^ (ulonglong)auStack_1c8);
  }
  return uVar7;
}

