/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d30f7 */

void FUN_1400d30f7(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  uint local_88;
  uint local_80;
  uint local_78;
  longlong **local_70;
  undefined8 local_68;
  longlong *local_58;
  longlong local_50;
  uint local_48;
  uint local_44;
  int local_40;
  int iStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_140f17b40 ^ (ulonglong)auStack_a8;
  puVar6 = (undefined8 *)FUN_1400d30d4();
  iVar5 = *(int *)(param_1 + 4);
  if (iVar5 == 4) {
    if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    *(uint *)(param_1 + 4) =
         2 - (uint)(*(longlong *)(param_1 + 0x28) == 0 | *(byte *)(param_1 + 0x57));
    goto LAB_1400d3348;
  }
  if (iVar5 == 3) {
    plVar3 = *(longlong **)(param_1 + 0x10);
    local_48 = (uint)*(ushort *)(param_1 + 0x38);
    local_44 = (uint)*(ushort *)(param_1 + 0x3a);
    local_40 = *(ushort *)(param_1 + 0x3c) + local_48;
    iStack_3c = *(ushort *)(param_1 + 0x3e) + local_44;
    local_88 = 0;
    iVar5 = (**(code **)(*plVar3 + 0x98))(plVar3,0,&local_58);
    if ((iVar5 == 0) && (iVar5 = *(int *)(param_1 + 0x40), (longlong)iVar5 != 0)) {
      lVar4 = *(longlong *)(param_1 + 0x48);
      lVar8 = 0;
      do {
        uVar1 = *(ushort *)(lVar4 + lVar8);
        uVar2 = *(ushort *)(lVar4 + 2 + lVar8);
        uVar7 = (uint)local_58 + 3;
        if (-1 < (int)(uint)local_58) {
          uVar7 = (uint)local_58;
        }
        local_78 = (uint)*(ushort *)(lVar4 + 6 + lVar8);
        local_80 = (uint)*(ushort *)(lVar4 + 4 + lVar8);
        local_88 = (uint)local_58;
        FUN_1400d3821(CONCAT11((char)(uVar1 >> 8),*(undefined1 *)(param_1 + 0x56)),
                      (longlong)*(int *)(param_1 + 0x24) *
                      ((ulonglong)uVar2 * (longlong)*(int *)(param_1 + 0x1c) + (ulonglong)uVar1) +
                      *(longlong *)(param_1 + 0x28),*(int *)(param_1 + 0x1c) * 4,
                      ((ulonglong)uVar1 - (longlong)(int)local_48) * 4 + local_50 +
                      (longlong)(int)(((int)uVar7 >> 2) * (uVar2 - local_44)) * 4);
        lVar8 = lVar8 + 8;
      } while ((longlong)iVar5 * 8 != lVar8);
    }
    (**(code **)(*plVar3 + 0xa0))(plVar3,0);
  }
  else {
    if (iVar5 != 2) goto LAB_1400d3348;
    local_70 = &local_58;
    local_58 = (longlong *)0x0;
    local_80 = 0x15;
    if (*(char *)(puVar6 + 4) != '\0') {
      local_80 = 0x20;
    }
    local_68 = 0;
    local_78 = 0;
    local_88 = 0x200;
    iVar5 = (**(code **)(*(longlong *)*puVar6 + 0xb8))
                      ((longlong *)*puVar6,*(undefined4 *)(param_1 + 0x1c),
                       *(undefined4 *)(param_1 + 0x20),1);
    if (iVar5 < 0) goto LAB_1400d3348;
    local_88 = 0;
    iVar5 = (**(code **)(*local_58 + 0x98))(local_58,0,&local_48,0);
    if (iVar5 == 0) {
      local_80 = *(uint *)(param_1 + 0x1c);
      local_78 = *(uint *)(param_1 + 0x20);
      local_88 = local_48;
      FUN_1400d3821(*(undefined1 *)(param_1 + 0x56),*(undefined8 *)(param_1 + 0x28),local_80 << 2,
                    CONCAT44(iStack_3c,local_40));
      (**(code **)(*local_58 + 0xa0))(local_58,0);
    }
    *(longlong **)(param_1 + 0x10) = local_58;
  }
  *(undefined4 *)(param_1 + 4) = 0;
LAB_1400d3348:
  if (DAT_140f17b40 == (local_38 ^ (ulonglong)auStack_a8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_38 ^ (ulonglong)auStack_a8);
}

