/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802143ea */

undefined8 FUN_1802143ea(undefined8 *param_1,longlong param_2,uint param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ushort uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 uVar9;
  undefined1 auStack_b8 [32];
  char *local_98;
  char local_90;
  char local_8f;
  char local_8e;
  char local_8d;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_b8;
  local_4c = 0;
  cVar1 = *(char *)((longlong)param_1 + 0x5c);
  if ((cVar1 == '\0') || (param_1[0x65] != 0)) {
    puVar8 = *(undefined8 **)param_1[0x66];
    if (puVar8 == (undefined8 *)0x0) {
      uVar4 = *param_1;
      ((longlong *)param_1[0x66])[1] = (longlong)FUN_18021697b;
      uVar7 = FUN_1801c9a4b(uVar4,0x290,&local_4c);
      *(undefined8 *)param_1[0x66] = uVar7;
      uVar7 = 0x40;
      if (local_4c != 0) goto LAB_180214634;
      puVar8 = *(undefined8 **)param_1[0x66];
      *puVar8 = uVar4;
      if (cVar1 == '\0') {
        puVar8[0x51] = *(undefined8 *)(param_1[100] + 0x10e0);
      }
      FUN_1802169bd(puVar8 + 0x16,uVar4,puVar8 + 1);
    }
    puVar8[0x1e] = param_1;
    puVar8[0x1d] = param_1;
    lVar2 = param_1[1];
    lVar3 = *(longlong *)(lVar2 + 0x90);
    local_90 = *(char *)(lVar3 + 0x3c);
    local_8f = *(char *)(*(longlong *)(lVar2 + 0xd0) + 0x58);
    uVar9 = 0;
    local_70 = 0;
    local_60 = (ulonglong)param_3 + param_2;
    if (param_2 == 0) {
      local_60 = 0;
    }
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    local_98 = &local_8e;
    local_68 = param_2;
    local_58 = param_2;
    FUN_1802169f5(param_1,&local_88,(longlong)&uStack_80 + 4,&local_8d);
    if (cVar1 == '\0') {
      uVar9 = *(undefined1 *)(lVar2 + 0x400);
    }
    *(undefined1 *)((longlong)puVar8 + 0xd) = uVar9;
    *(char *)((longlong)puVar8 + 0xc) = cVar1;
    *(uint *)(puVar8 + 2) = (uint)(local_8d != '\0');
    if ((local_8e != '\0') && ((local_8f == '\0' || ((local_8f < '\0' && (local_90 == '\0')))))) {
      *(uint *)(puVar8 + 2) = local_8d != '\0' | 2;
    }
    *(undefined4 *)((longlong)puVar8 + 0x104) = *(undefined4 *)(lVar3 + 0x40);
    *(undefined4 *)(puVar8 + 0x21) = *(undefined4 *)(lVar3 + 0x44);
    *(undefined4 *)((longlong)puVar8 + 0x10c) = *(undefined4 *)(lVar3 + 0x48);
    *(undefined4 *)(puVar8 + 0x22) = *(undefined4 *)(lVar3 + 0x4c);
    *(undefined4 *)((longlong)puVar8 + 0x114) = *(undefined4 *)(lVar3 + 0x50);
    *(undefined4 *)(puVar8 + 0x23) = *(undefined4 *)(lVar3 + 0x54);
    *(undefined4 *)((longlong)puVar8 + 0x11c) = *(undefined4 *)(lVar3 + 0x58);
    *(undefined4 *)(puVar8 + 0x24) = *(undefined4 *)(lVar3 + 0x5c);
    uVar5 = FUN_180216a62(param_1);
    *(uint *)(puVar8 + 0x14) = (uint)uVar5;
    if (local_8e != '\0') {
      uVar7 = FUN_180216a6b(&local_88);
      if ((int)uVar7 != 0) goto LAB_180214634;
    }
    iVar6 = FUN_180216ab8(puVar8,&local_70,&local_88,&local_8c);
    uVar7 = 3;
    if (iVar6 == 0) {
      FUN_180216bed(puVar8 + 0x16,local_8c);
      uVar7 = 0;
    }
  }
  else {
    uVar7 = 8;
  }
LAB_180214634:
  if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_b8)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_b8);
}

