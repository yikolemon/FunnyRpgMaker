/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00422635 */

int __fastcall
FUN_00422635(int *param_1,int *param_2,int param_3,int param_4,int param_5,undefined4 param_6)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined2 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined2 *local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int *local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_40;
  if (param_5 + 1U < 2) {
    if (param_4 < 1) {
      iVar2 = 10;
      goto LAB_00422892;
    }
    local_2c = *param_1;
    uVar7 = 0;
    iVar8 = 0;
    local_1c = param_1;
    do {
      iVar2 = FUN_00420696((int)param_2,*(uint *)(param_3 + iVar8 * 4));
      if ((((iVar2 != 0) ||
           (uVar3 = FUN_004209e8(param_2,&local_18), iVar2 = local_18, local_18 != 0)) ||
          (iVar2 = 9, 0xffffff < uVar3)) || (0xffffff - uVar3 < uVar7 + 6)) goto LAB_00422892;
      uVar7 = uVar7 + 6 + uVar3;
      iVar8 = iVar8 + 1;
    } while (param_4 != iVar8);
    puVar4 = (undefined2 *)FUN_0041e773(local_2c,uVar7 + 2,&local_18);
    iVar2 = local_18;
    if (local_18 != 0) goto LAB_00422892;
    *puVar4 = 0x180;
    *(undefined4 *)(puVar4 + 1) = 0;
    local_30 = 1;
    uVar3 = 6;
    local_3c = 2;
    local_34 = 0;
    iVar2 = 0;
    local_40 = puVar4;
    local_28 = uVar7 + 2;
    do {
      local_38 = uVar3;
      local_20 = iVar2;
      iVar2 = FUN_00420696((int)param_2,*(uint *)(param_3 + iVar2 * 4));
      if (((iVar2 != 0) || (uVar5 = FUN_004209e8(param_2,&local_18), local_18 != 0)) ||
         (((int)uVar5 < 0 || (uVar1 = FUN_0042070a(param_2,&local_18), local_18 != 0))))
      goto LAB_00422880;
      local_18 = 10;
      uVar6 = (uint)(uVar1 >> 8);
      uVar3 = local_38;
      if (uVar6 != 0) {
        uVar9 = uVar5 - 2;
        if (uVar5 < 2) {
          uVar9 = 0;
        }
        if (local_30 == uVar6) {
          local_34 = local_34 + uVar9;
        }
        else {
          if (uVar7 + 2 < local_3c + 3U) goto LAB_00422880;
          *(uint *)((int)local_40 + local_3c) = local_34;
          if (uVar6 == 5) break;
          uVar3 = local_38 + 6;
          if (uVar7 + 2 < uVar3) goto LAB_00422880;
          *(undefined1 *)((int)local_40 + local_38) = 0x80;
          local_3c = local_38 + 2;
          *(char *)((int)local_40 + local_38 + 1) = (char)(uVar1 >> 8);
          *(undefined4 *)((int)local_40 + local_38 + 2) = 0;
          local_34 = uVar9;
          local_30 = uVar6;
          local_24 = uVar3;
        }
        if (((uVar7 < uVar3) || (uVar7 < uVar3 + uVar9)) ||
           (local_18 = FUN_004206d1(param_2,(uint *)(uVar3 + (int)local_40),uVar9),
           uVar3 = uVar3 + uVar9, local_18 != 0)) goto LAB_00422880;
      }
      iVar2 = local_20 + 1;
    } while (param_4 != iVar2);
    if ((uVar3 <= uVar7) &&
       (*(undefined2 *)((int)local_40 + uVar3) = 0x380, local_3c + 3U <= local_28)) {
      *(uint *)((int)local_40 + local_3c) = local_34;
      iVar2 = FUN_004220b7(local_1c,(int)local_40,uVar3 + 2,0,(byte *)"type1",param_6);
      goto LAB_00422892;
    }
LAB_00422880:
    FUN_0041c607(local_2c,(int)local_40);
  }
  iVar2 = 1;
LAB_00422892:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_40)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_40);
  }
  return iVar2;
}

