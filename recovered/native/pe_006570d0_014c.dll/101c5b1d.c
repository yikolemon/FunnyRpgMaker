/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c5b1d */

int __fastcall
FUN_101c5b1d(int param_1,undefined4 *param_2,byte *param_3,undefined4 param_4,int param_5,
            int param_6,int *param_7)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int local_28;
  undefined4 local_24;
  undefined4 *local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_28;
  uVar5 = *(undefined4 *)(param_1 + 8);
  iVar4 = *(int *)(param_1 + 0xc);
  local_20 = param_2;
  iVar2 = FUN_101bff17(uVar5,*(undefined4 *)(iVar4 + 0x24),&local_18);
  puVar1 = local_20;
  iVar3 = 0;
  if (local_18 == 0) {
    *(int *)(iVar2 + 0x60) = param_1;
    *(undefined4 *)(iVar2 + 100) = uVar5;
    *(undefined4 *)(iVar2 + 0x68) = *local_20;
    if (*param_3 != 0) {
      *(byte *)(iVar2 + 9) = *(byte *)(iVar2 + 9) | 4;
    }
    local_28 = iVar4;
    local_24 = uVar5;
    iVar3 = FUN_101bff17(uVar5,0x44,&local_18);
    iVar4 = local_28;
    uVar5 = local_24;
    if (local_18 == 0) {
      *(int *)(iVar2 + 0x80) = iVar3;
      *(undefined4 *)(iVar3 + 0x34) = 0;
      if (0 < param_5) {
        iVar4 = 0;
        do {
          if (*(int *)(*(int *)(iVar2 + 0x80) + 0x34) != 0) break;
          if (*(int *)(param_6 + iVar4 * 8) == 0x696e6372) {
            *(undefined4 *)(*(int *)(iVar2 + 0x80) + 0x34) =
                 *(undefined4 *)(param_6 + 4 + iVar4 * 8);
          }
          iVar4 = iVar4 + 1;
        } while (param_5 != iVar4);
      }
      *(undefined4 *)(*(int *)(iVar2 + 0x80) + 0x3c) = 0xffffffff;
      local_1c = iVar3;
      if (*(code **)(local_28 + 0x30) == (code *)0x0) {
        local_18 = 0;
      }
      else {
        local_18 = (**(code **)(local_28 + 0x30))(*puVar1,iVar2,param_4,param_5,param_6);
      }
      *puVar1 = *(undefined4 *)(iVar2 + 0x68);
      *param_3 = (byte)(*(uint *)(iVar2 + 8) >> 10) & 1;
      iVar3 = local_1c;
      iVar4 = local_28;
      uVar5 = local_24;
      if ((local_18 == 0) &&
         (local_18 = FUN_101c199b(iVar2), iVar3 = local_1c, iVar4 = local_28, uVar5 = local_24,
         0x24 < local_18 - 1U)) {
        local_20 = (undefined4 *)0x0;
        goto LAB_101c5c5f;
      }
    }
  }
  local_20 = (undefined4 *)local_18;
  FUN_101c5e67();
  if (*(code **)(iVar4 + 0x34) != (code *)0x0) {
    (**(code **)(iVar4 + 0x34))(iVar2);
  }
  FUN_101c0017(uVar5,iVar3);
  FUN_101c0017(uVar5,iVar2);
  iVar2 = 0;
LAB_101c5c5f:
  *param_7 = iVar2;
  if (DAT_10388d00 != (local_14 ^ (uint)&local_28)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return (int)local_20;
}

