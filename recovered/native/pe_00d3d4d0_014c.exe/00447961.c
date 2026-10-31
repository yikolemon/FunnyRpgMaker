/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00447961 */

int __fastcall FUN_00447961(int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_EBX;
  uint unaff_EBP;
  ushort *puVar7;
  uint uVar8;
  ushort *local_30;
  ushort *local_2c;
  int local_20;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_30;
  local_18 = 0;
  iVar2 = *(int *)(param_2 + 0x1c);
  iVar5 = *(int *)(param_2 + 0x20);
  puVar3 = *(ushort **)(param_2 + 0x24);
  if (puVar3 < (ushort *)(iVar5 + 0x65U)) goto LAB_00447993;
  iVar6 = iVar5 + (uint)*(byte *)(iVar5 + 100) * 0x100 + 99;
  iVar4 = 0;
  if (((puVar3 < (ushort *)((uint)*(byte *)(iVar5 + 99) + iVar6 + 0x24)) ||
      (iVar6 = iVar6 + (uint)*(byte *)(iVar5 + 99), *(ushort *)(iVar6 + 0x12) < 0x12)) ||
     (iVar6 = *(int *)(iVar6 + 0x20), iVar6 == 0)) goto LAB_00447b27;
  puVar7 = (ushort *)(iVar5 + iVar6);
  local_2c = puVar7 + 1;
  if (puVar3 < local_2c) {
LAB_00447993:
    local_18 = 2;
  }
  else {
    uVar8 = (uint)*puVar7;
    *(uint *)(param_3 + 0x28) = uVar8;
    if (puVar3 < local_2c + uVar8 * 2) goto LAB_00447993;
    if (uVar8 == 0) goto LAB_00447b27;
    iVar5 = FUN_0041efcd(iVar2,0x10,0,uVar8,0,&local_18);
    *(int *)(param_3 + 0x24) = iVar5;
    if (local_18 == 0) {
      local_20 = *(int *)(param_3 + 0x28);
      local_30 = (ushort *)(local_20 * 4);
      local_1c = *(undefined4 *)(param_1 + 0x5c);
      if (0 < *(int *)(param_1 + 0x24)) {
        iVar4 = 0;
        do {
          iVar6 = *(int *)(*(int *)(param_1 + 0x28) + iVar4 * 4);
          if (*(short *)(iVar6 + 8) == 7) {
            *(int *)(param_1 + 0x5c) = iVar6;
            break;
          }
          iVar4 = iVar4 + 1;
        } while (*(int *)(param_1 + 0x24) != iVar4);
      }
      if (local_30 != (ushort *)0x0) {
        local_30 = local_2c + local_20 * 2;
        iVar4 = 0;
        do {
          pbVar1 = (byte *)((int)local_2c + iVar4);
          uVar8 = FUN_0041df5f(param_1,(uint)*pbVar1);
          *(uint *)(iVar5 + iVar4 * 4) = uVar8;
          uVar8 = FUN_0041df5f(param_1,(uint)pbVar1[1]);
          *(uint *)(iVar5 + 4 + iVar4 * 4) = uVar8;
          *(int *)(iVar5 + 8 + iVar4 * 4) = (int)*(short *)(pbVar1 + 2);
          *(undefined4 *)(iVar5 + 0xc + iVar4 * 4) = 0;
          iVar4 = iVar4 + 4;
        } while (pbVar1 + 4 < local_30);
      }
      *(undefined4 *)(param_1 + 0x5c) = local_1c;
      FUN_00492530(*(undefined1 **)(param_3 + 0x24),*(uint *)(param_3 + 0x28),0x10,&LAB_00447b4a);
      if (unaff_EBX == 0) {
        iVar4 = 0;
        goto LAB_00447b27;
      }
    }
  }
  local_2c = (ushort *)0x4479a8;
  FUN_0041c607(iVar2,*(int *)(param_3 + 0x24));
  *(undefined4 *)(param_3 + 0x24) = 0;
  *(undefined4 *)(param_3 + 0x28) = 0;
  iVar4 = unaff_EBX;
LAB_00447b27:
  if (DAT_0050e8c0 != (unaff_EBP ^ (uint)&local_20)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(unaff_EBP ^ (uint)&local_20);
  }
  return iVar4;
}

