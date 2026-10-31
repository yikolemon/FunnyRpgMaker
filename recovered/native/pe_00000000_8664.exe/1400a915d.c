/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a915d */

void FUN_1400a915d(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong lVar9;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 *puStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  FUN_1400aa435();
  local_28 = 0;
  local_38 = 0;
  puStack_30 = (undefined4 *)0x0;
  FUN_1400aa638(param_1,&local_38);
  *(longlong *)(param_1 + 0xa0) = local_38;
  puVar8 = (undefined4 *)0x0;
  if ((int)local_28 == 1) {
    puVar8 = puStack_30;
  }
  *(undefined4 **)(param_1 + 0xa8) = puVar8;
  *(int *)(param_1 + 0xb0) = (int)local_28;
  lVar7 = local_38;
  if (puStack_30 == (undefined4 *)0x0 || *(int *)(param_1 + 0xc0) != 0) {
    if (puStack_30 == (undefined4 *)0x0) goto LAB_1400a925a;
  }
  else {
    *(undefined4 *)(param_1 + 0xc0) = *puStack_30;
  }
  lVar9 = **(longlong **)(puStack_30 + 0xe);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(lVar9 + 0x40);
  uVar2 = *(undefined4 *)(lVar9 + 0x20);
  uVar3 = *(undefined4 *)(lVar9 + 0x24);
  uVar4 = *(undefined4 *)(lVar9 + 0x28);
  uVar5 = *(undefined4 *)(lVar9 + 0x2c);
  uVar6 = *(undefined8 *)(lVar9 + 0x38);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar9 + 0x30);
  *(undefined8 *)(param_1 + 0x80) = uVar6;
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  *(undefined4 *)(param_1 + 0x70) = uVar4;
  *(undefined4 *)(param_1 + 0x74) = uVar5;
  if (1 < (longlong)(int)puStack_30[0xc]) {
    lVar9 = 1;
    do {
      lVar1 = *(longlong *)(*(longlong *)(puStack_30 + 0xe) + lVar9 * 8);
      if (*(char *)(lVar1 + 0x3d) == '\0') {
        *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(lVar1 + 0x40);
        uVar2 = *(undefined4 *)(lVar1 + 0x20);
        uVar3 = *(undefined4 *)(lVar1 + 0x24);
        uVar4 = *(undefined4 *)(lVar1 + 0x28);
        uVar5 = *(undefined4 *)(lVar1 + 0x2c);
        uVar6 = *(undefined8 *)(lVar1 + 0x38);
        *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar1 + 0x30);
        *(undefined8 *)(param_1 + 0x80) = uVar6;
        *(undefined4 *)(param_1 + 0x68) = uVar2;
        *(undefined4 *)(param_1 + 0x6c) = uVar3;
        *(undefined4 *)(param_1 + 0x70) = uVar4;
        *(undefined4 *)(param_1 + 0x74) = uVar5;
        break;
      }
      lVar9 = lVar9 + 1;
    } while ((int)puStack_30[0xc] != lVar9);
  }
LAB_1400a925a:
  for (; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x18)) {
    *(byte *)(lVar7 + 0xd4) = *(byte *)(lVar7 + 0xd4) | 0x20;
  }
  if (DAT_140f17b40 != (local_20 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_20 ^ (ulonglong)auStack_58);
  }
  return;
}

