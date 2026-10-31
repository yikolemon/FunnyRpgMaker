/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140317d30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140317d30(longlong *param_1,longlong param_2,char *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  size_t sVar7;
  int iVar8;
  int iVar9;
  
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x3d) = 1;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x22c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x234) = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  plVar1 = param_1 + 0x65;
  FUN_14039f826(plVar1,0);
  FUN_1404b9e70(param_1 + 1,0,0x4d0);
  *param_1 = param_2;
  lVar6 = FUN_14030fc9a(param_3);
  param_1[1] = lVar6;
  sVar7 = strlen(param_3);
  *(int *)(param_1 + 0x18) = (int)sVar7 + 1;
  uVar4 = FUN_140310209(param_3,0,0);
  *(undefined4 *)(param_1 + 2) = uVar4;
  iVar8 = (int)param_1[0x29];
  if (iVar8 == *(int *)((longlong)param_1 + 0x14c)) {
    if (iVar8 == 0) {
      iVar5 = 8;
    }
    else {
      iVar5 = iVar8 / 2 + iVar8;
    }
    iVar9 = iVar8 + 1;
    if (iVar8 + 1 < iVar5) {
      iVar9 = iVar5;
    }
    lVar6 = FUN_14030fcc8((longlong)iVar9 << 2);
    if (param_1[0x2a] != 0) {
      FUN_1404b97c0(lVar6,param_1[0x2a],(longlong)(int)param_1[0x29] << 2);
      FUN_14030fda4(param_1[0x2a]);
    }
    param_1[0x2a] = lVar6;
    *(int *)((longlong)param_1 + 0x14c) = iVar9;
    uVar4 = (undefined4)param_1[2];
    iVar8 = (int)param_1[0x29];
  }
  else {
    lVar6 = param_1[0x2a];
  }
  *(undefined4 *)(lVar6 + (longlong)iVar8 * 4) = uVar4;
  *(int *)(param_1 + 0x29) = (int)param_1[0x29] + 1;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0x7f7fffff7f7fffff;
  uVar4 = FUN_14031821e(param_1,"alue({}, {});",0);
  *(undefined4 *)((longlong)param_1 + 0xc4) = uVar4;
  uVar4 = FUN_14031821e(param_1," see:",0);
  *(undefined4 *)(param_1 + 0x19) = uVar4;
  uVar3 = _UNK_1404efbd8;
  *(undefined8 *)((longlong)param_1 + 0xe4) = _DAT_1404efbd0;
  *(undefined8 *)((longlong)param_1 + 0xec) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x25) = 0xffff;
  param_1[0x26] =
       CONCAT44((uint)((ulonglong)param_1[0x26] >> 0x20) & _UNK_1404efbe4,
                (uint)param_1[0x26] & _DAT_1404efbe0);
  lVar2 = _UNK_1404efbc8;
  lVar6 = _DAT_1404efbc0;
  param_1[0x27] = _DAT_1404efbc0;
  param_1[0x28] = lVar2;
  param_1[0x5c] = -1;
  *(undefined4 *)(param_1 + 0x5d) = 0xbf800000;
  param_1[99] = -0x100000000;
  param_1[0x62] = DAT_1404ed750;
  *(undefined2 *)((longlong)param_1 + 0x496) = 0xffff;
  param_1[100] = (longlong)plVar1;
  param_1[0x80] = param_1[1];
  FUN_14039fa42(plVar1,*param_1 + 0x1338);
  param_1[0x8f] = lVar6;
  param_1[0x90] = lVar2;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x3d) = 1;
  return param_1;
}

