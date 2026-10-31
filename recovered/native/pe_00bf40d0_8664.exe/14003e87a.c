/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003e87a */

uint FUN_14003e87a(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x98);
  lVar5 = *(longlong *)(param_1 + 0x408);
  if (lVar5 == 0) {
    uVar3 = FUN_14003dd65(param_1,(undefined8 *)0x0);
    local_34 = uVar3;
    if (uVar3 != 0) goto LAB_14003e987;
    lVar5 = *(longlong *)(param_1 + 0x408);
  }
  uVar3 = 6;
  if (param_2 <= *(ushort *)(param_1 + 0xe)) {
    if (param_2 == 0) {
      FUN_14001c53d(lVar1,*(longlong *)(param_1 + 0x20));
      *(undefined8 *)(param_1 + 0x20) = 0;
      uVar4 = FUN_140021e43(lVar1,*(char **)(param_1 + 0x428),(int *)&local_34);
      *(undefined8 *)(param_1 + 0x20) = uVar4;
      uVar3 = local_34;
      if (local_34 != 0) goto LAB_14003e987;
      uVar3 = FUN_14003e528(param_1,0,0);
    }
    else {
      puVar2 = *(uint **)(lVar5 + 0x18);
      lVar5 = *(longlong *)(puVar2 + 6);
      uVar3 = (**(code **)(*(longlong *)(param_1 + 0x2d0) + 0x158))
                        (param_1,*(undefined2 *)(lVar5 + -8 + (ulonglong)param_2 * 0x10),&local_40);
      if (uVar3 != 0) goto LAB_14003e987;
      FUN_14001c53d(lVar1,*(longlong *)(param_1 + 0x20));
      *(undefined8 *)(param_1 + 0x20) = local_40;
      uVar3 = FUN_14003e528(param_1,*puVar2,*(longlong *)(lVar5 + (ulonglong)param_2 * 0x10 + -0x10)
                           );
    }
    if (0xfffffffd < uVar3) {
      uVar3 = 0;
    }
  }
LAB_14003e987:
  if (DAT_14012ea80 == (local_30 ^ (ulonglong)auStack_68)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_30 ^ (ulonglong)auStack_68);
}

