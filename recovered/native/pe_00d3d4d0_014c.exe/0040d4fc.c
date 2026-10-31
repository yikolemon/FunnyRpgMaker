/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040d4fc */

void __cdecl FUN_0040d4fc(int *param_1,byte *param_2,byte *param_3,uint param_4,uint param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  sbyte sVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int local_48;
  uint local_44;
  uint local_40;
  uint local_3c [6];
  uint local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_48;
  local_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uVar5 = param_5 + 0x37 >> 5;
  sVar4 = (sbyte)(param_5 & 0x1f);
  uVar9 = param_4 << sVar4;
  if (8 < (param_5 & 0x1f)) {
    local_3c[uVar5 + 4] = uVar9;
    uVar9 = param_4 >> (-sVar4 & 0x1fU);
  }
  local_3c[uVar5 + 5] = uVar9;
  if (uVar5 - 1 == 0) {
    local_48 = 0;
  }
  else {
    local_48 = 0;
    uVar9 = uVar5 - 1;
    do {
      local_3c[0] = uVar9;
      local_40 = local_3c[local_3c[0] + 6];
      uVar9 = (uint)((ulonglong)(local_40 >> 9) * 0x44b83 >> 0x27);
      uVar5 = local_40 + uVar9 * -1000000000;
      local_3c[local_3c[0] + 6] = uVar9;
      uVar9 = local_3c[0];
      do {
        uVar10 = uVar5 << 0x17 | local_3c[uVar9 + 5] >> 9;
        lVar1 = (ulonglong)(uVar5 >> 9) * 0xa09b5a53;
        local_3c[1] = (uint)lVar1;
        uVar6 = (uint)((ulonglong)uVar10 * 0xa09b5a53 >> 0x20);
        lVar2 = (ulonglong)uVar10 * 0x44b82f;
        lVar1 = (ulonglong)(uVar5 >> 9) * 0x44b82f +
                (ulonglong)
                ((int)((ulonglong)lVar2 >> 0x20) +
                 (int)((ulonglong)lVar1 >> 0x20) + (uint)CARRY4(uVar6,local_3c[1]) +
                (uint)CARRY4((uint)lVar2,uVar6 + local_3c[1]));
        uVar6 = (int)((ulonglong)lVar1 >> 0x20) << 0x15 | (uint)lVar1 >> 0xb;
        uVar5 = uVar6 * -1000000000 + local_3c[uVar9 + 5];
        local_3c[uVar9 + 5] = uVar6;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      local_3c[local_48 + 2] = uVar5;
      local_48 = local_48 + 1;
      uVar9 = local_3c[0];
      if (999999999 >= local_40) {
        uVar9 = local_3c[0] - 1;
      }
    } while (999999999 < local_40 || local_3c[0] - 1 != 0);
  }
  iVar3 = local_48;
  iVar7 = 10;
  if (((((local_24 < 1000000000) && (iVar7 = 9, local_24 < 100000000)) &&
       (iVar7 = 8, local_24 < 10000000)) &&
      ((iVar7 = 7, local_24 < 1000000 && (iVar7 = 6, local_24 < 100000)))) &&
     ((iVar7 = 5, local_24 < 10000 && ((iVar7 = 4, local_24 < 1000 && (iVar7 = 3, local_24 < 100))))
     )) {
    iVar7 = 2 - (uint)(local_24 < 10);
  }
  local_44 = local_24;
  iVar8 = 0x84;
  if (local_48 * 9 + iVar7 <= (int)param_3 - (int)param_2) {
    FUN_0040e0a5(iVar7,local_24,param_2);
    param_3 = param_2 + iVar7;
    iVar8 = 0;
    if (0 < iVar3) {
      uVar9 = iVar3 + 1;
      do {
        FUN_0040e175(local_3c[uVar9],(char *)param_3);
        param_3 = param_3 + 9;
        uVar9 = uVar9 - 1;
      } while (1 < uVar9);
    }
  }
  *param_1 = (int)param_3;
  param_1[1] = iVar8;
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_48)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_48);
  }
  return;
}

