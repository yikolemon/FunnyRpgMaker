/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00421ba5 */

int __fastcall
FUN_00421ba5(int param_1,undefined4 *param_2,byte *param_3,undefined4 param_4,int param_5,
            int param_6,undefined4 *param_7)

{
  undefined4 *puVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int local_28;
  int local_24;
  undefined4 *local_20;
  void *local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_28;
  iVar4 = *(int *)(param_1 + 8);
  iVar5 = *(int *)(param_1 + 0xc);
  local_20 = param_2;
  pvVar2 = FUN_0041c507(iVar4,*(size_t *)(iVar5 + 0x24),&local_18);
  puVar1 = local_20;
  pvVar3 = (void *)0x0;
  if (local_18 == 0) {
    *(int *)((int)pvVar2 + 0x60) = param_1;
    *(int *)((int)pvVar2 + 100) = iVar4;
    *(undefined4 *)((int)pvVar2 + 0x68) = *local_20;
    if (*param_3 != 0) {
      *(byte *)((int)pvVar2 + 9) = *(byte *)((int)pvVar2 + 9) | 4;
    }
    local_28 = iVar5;
    local_24 = iVar4;
    pvVar3 = FUN_0041c507(iVar4,0x44,&local_18);
    iVar5 = local_28;
    iVar4 = local_24;
    if (local_18 == 0) {
      *(void **)((int)pvVar2 + 0x80) = pvVar3;
      *(undefined4 *)((int)pvVar3 + 0x34) = 0;
      if (0 < param_5) {
        iVar4 = 0;
        do {
          if (*(int *)(*(int *)((int)pvVar2 + 0x80) + 0x34) != 0) break;
          if (*(int *)(param_6 + iVar4 * 8) == 0x696e6372) {
            *(undefined4 *)(*(int *)((int)pvVar2 + 0x80) + 0x34) =
                 *(undefined4 *)(param_6 + 4 + iVar4 * 8);
          }
          iVar4 = iVar4 + 1;
        } while (param_5 != iVar4);
      }
      *(undefined4 *)(*(int *)((int)pvVar2 + 0x80) + 0x3c) = 0xffffffff;
      local_1c = pvVar3;
      if (*(code **)(local_28 + 0x30) == (code *)0x0) {
        local_18 = 0;
      }
      else {
        local_18 = (**(code **)(local_28 + 0x30))(*puVar1,pvVar2,param_4,param_5,param_6);
      }
      *puVar1 = *(undefined4 *)((int)pvVar2 + 0x68);
      *param_3 = (byte)(*(uint *)((int)pvVar2 + 8) >> 10) & 1;
      pvVar3 = local_1c;
      iVar5 = local_28;
      iVar4 = local_24;
      if ((local_18 == 0) &&
         (local_18 = FUN_0041df8b((int)pvVar2), pvVar3 = local_1c, iVar5 = local_28,
         iVar4 = local_24, 0x24 < local_18 - 1U)) {
        local_20 = (undefined4 *)0x0;
        goto LAB_00421ce7;
      }
    }
  }
  local_20 = (undefined4 *)local_18;
  FUN_00421eef((int)pvVar2,iVar4);
  if (*(code **)(iVar5 + 0x34) != (code *)0x0) {
    (**(code **)(iVar5 + 0x34))(pvVar2);
  }
  FUN_0041c607(iVar4,(int)pvVar3);
  FUN_0041c607(iVar4,(int)pvVar2);
  pvVar2 = (void *)0x0;
LAB_00421ce7:
  *param_7 = pvVar2;
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_28)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_28);
  }
  return (int)local_20;
}

