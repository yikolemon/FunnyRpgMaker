/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f01e9 */

int __fastcall FUN_101f01e9(int param_1,int param_2,int param_3)

{
  ushort *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  ushort *puVar9;
  uint uVar10;
  ushort *local_30;
  ushort *local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_30;
  local_18 = 0;
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  iVar6 = *(int *)(param_2 + 0x20);
  puVar4 = *(ushort **)(param_2 + 0x24);
  local_24 = uVar3;
  if (puVar4 < (ushort *)(iVar6 + 0x65U)) goto LAB_101f021b;
  iVar8 = iVar6 + (uint)*(byte *)(iVar6 + 100) * 0x100 + 99;
  iVar5 = 0;
  if (((puVar4 < (ushort *)((uint)*(byte *)(iVar6 + 99) + iVar8 + 0x24)) ||
      (iVar8 = iVar8 + (uint)*(byte *)(iVar6 + 99), *(ushort *)(iVar8 + 0x12) < 0x12)) ||
     (iVar8 = *(int *)(iVar8 + 0x20), iVar8 == 0)) goto LAB_101f03af;
  puVar9 = (ushort *)(iVar6 + iVar8);
  puVar1 = puVar9 + 1;
  if (puVar4 < puVar1) {
LAB_101f021b:
    local_18 = 2;
  }
  else {
    uVar10 = (uint)*puVar9;
    *(uint *)(param_3 + 0x28) = uVar10;
    if (puVar4 < puVar1 + uVar10 * 2) goto LAB_101f021b;
    local_2c = puVar1;
    if (uVar10 == 0) goto LAB_101f03af;
    iVar6 = FUN_101c2a50(uVar3,0x10,0,uVar10,0,&local_18);
    *(int *)(param_3 + 0x24) = iVar6;
    if (local_18 == 0) {
      local_20 = *(int *)(param_3 + 0x28);
      local_30 = (ushort *)(local_20 * 4);
      local_1c = *(undefined4 *)(param_1 + 0x5c);
      if (0 < *(int *)(param_1 + 0x24)) {
        iVar5 = 0;
        do {
          iVar8 = *(int *)(*(int *)(param_1 + 0x28) + iVar5 * 4);
          if (*(short *)(iVar8 + 8) == 7) {
            *(int *)(param_1 + 0x5c) = iVar8;
            break;
          }
          iVar5 = iVar5 + 1;
        } while (*(int *)(param_1 + 0x24) != iVar5);
      }
      if (local_30 != (ushort *)0x0) {
        local_30 = local_2c + local_20 * 2;
        iVar5 = 0;
        local_28 = iVar6;
        do {
          puVar2 = (undefined1 *)((int)local_2c + iVar5);
          uVar7 = FUN_101c196f(param_1,*puVar2);
          *(undefined4 *)(local_28 + iVar5 * 4) = uVar7;
          uVar7 = FUN_101c196f(param_1,puVar2[1]);
          *(undefined4 *)(local_28 + 4 + iVar5 * 4) = uVar7;
          *(int *)(local_28 + 8 + iVar5 * 4) = (int)*(short *)(puVar2 + 2);
          *(undefined4 *)(local_28 + 0xc + iVar5 * 4) = 0;
          iVar5 = iVar5 + 4;
        } while (puVar2 + 4 < local_30);
      }
      *(undefined4 *)(param_1 + 0x5c) = local_1c;
      FUN_1026fb00(*(undefined4 *)(param_3 + 0x24),*(undefined4 *)(param_3 + 0x28),0x10,
                   &LAB_101f03d2);
      if (local_18 == 0) {
        iVar5 = 0;
        goto LAB_101f03af;
      }
    }
  }
  FUN_101c0017(uVar3,*(undefined4 *)(param_3 + 0x24));
  *(undefined4 *)(param_3 + 0x24) = 0;
  *(undefined4 *)(param_3 + 0x28) = 0;
  iVar5 = local_18;
LAB_101f03af:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_30)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar5;
}

