/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404676a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404676a0(longlong param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  char *pcVar9;
  undefined2 *puVar10;
  char *pcVar11;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined1 local_d8 [8];
  undefined2 local_d0 [4];
  undefined8 local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined1 local_b0 [48];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  ulonglong local_50;
  
  local_50 = ram0x000140613b10 ^ (ulonglong)auStack_108;
  puVar2 = (undefined8 *)FUN_140498a30();
  puVar3 = (undefined8 *)FUN_14044e840(local_b0);
  local_80 = *puVar3;
  uStack_78 = puVar3[1];
  local_70 = *(undefined4 *)(puVar3 + 2);
  uStack_6c = *(undefined4 *)((longlong)puVar3 + 0x14);
  uStack_68 = *(undefined4 *)(puVar3 + 3);
  uStack_64 = *(undefined4 *)((longlong)puVar3 + 0x1c);
  uStack_60 = *(undefined4 *)(puVar3 + 4);
  uStack_5c = *(undefined4 *)((longlong)puVar3 + 0x24);
  uStack_58 = *(undefined4 *)(puVar3 + 5);
  lVar8 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  pwVar7 = L"pNonPic";
  if (param_3 == '\0') {
    pwVar7 = (wchar_t *)puVar2[2];
  }
  lVar5 = -1;
  do {
    lVar4 = lVar5;
    lVar5 = lVar4 + 1;
  } while (*(char *)((longlong)pwVar7 + lVar5) != '\0');
  lVar4 = lVar4 + 2;
  local_b8 = param_1;
  lVar5 = _calloc_base(lVar4,1);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14044ac40();
  }
  if (lVar4 != 0) {
    FUN_1404b97c0(lVar5,pwVar7,lVar4);
  }
  *(longlong *)(param_1 + 0x10) = lVar5;
  pcVar11 = "host unreachable";
  pcVar9 = "host unreachable";
  local_c0 = 0;
  lVar5 = 6;
  do {
    local_e8 = &local_80;
    iVar1 = FUN_140450150(local_d0,pcVar9,lVar5,&local_c0);
    if (iVar1 < 1) break;
    pcVar9 = pcVar9 + iVar1;
    lVar8 = lVar8 + 1;
    lVar5 = lVar5 - iVar1;
  } while (lVar5 != 0);
  lVar8 = lVar8 + 1;
  puVar6 = (undefined2 *)_calloc_base(lVar8,2);
  if (puVar6 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_14044ac40();
  }
  local_c8 = 0;
  puVar10 = puVar6;
  for (; lVar8 != 0; lVar8 = lVar8 + -1) {
    local_e8 = &local_80;
    iVar1 = FUN_140450150(puVar10,pcVar11,6,&local_c8);
    if (iVar1 < 1) break;
    pcVar11 = pcVar11 + iVar1;
    puVar10 = puVar10 + 1;
  }
  *puVar10 = 0;
  *(undefined2 **)(param_1 + 0x20) = puVar6;
  lVar8 = 0;
  pcVar11 = "vailable";
  pcVar9 = "vailable";
  local_c8 = 0;
  lVar5 = 5;
  do {
    local_e8 = &local_80;
    iVar1 = FUN_140450150(local_d0,pcVar9,lVar5,&local_c8);
    if (iVar1 < 1) break;
    pcVar9 = pcVar9 + iVar1;
    lVar8 = lVar8 + 1;
    lVar5 = lVar5 - iVar1;
  } while (lVar5 != 0);
  lVar8 = lVar8 + 1;
  puVar6 = (undefined2 *)_calloc_base(lVar8,2);
  if (puVar6 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_14044ac40();
  }
  local_c0 = 0;
  puVar10 = puVar6;
  for (; lVar8 != 0; lVar8 = lVar8 + -1) {
    local_e8 = &local_80;
    iVar1 = FUN_140450150(puVar10,pcVar11,5,&local_c0);
    if (iVar1 < 1) break;
    pcVar11 = pcVar11 + iVar1;
    puVar10 = puVar10 + 1;
  }
  *puVar10 = 0;
  *(undefined2 **)(param_1 + 0x28) = puVar6;
  local_d0[0] = 0;
  local_c8 = 0;
  if (param_3 == '\0') {
    local_d8[0] = *(undefined1 *)*puVar2;
    local_e8 = &local_80;
    FUN_140450150(local_d0,local_d8,1,&local_c8);
    *(undefined2 *)(param_1 + 0x18) = local_d0[0];
    local_d8[0] = *(undefined1 *)puVar2[1];
  }
  else {
    local_d8[0] = 0x2e;
    local_e8 = &local_80;
    FUN_140450150(local_d0,local_d8,1,&local_c8);
    *(undefined2 *)(param_1 + 0x18) = local_d0[0];
    local_d8[0] = 0x2c;
  }
  local_e8 = &local_80;
  local_d0[0] = 0;
  local_c8 = 0;
  FUN_140450150(local_d0,local_d8,1,&local_c8);
  *(undefined2 *)(param_1 + 0x1a) = local_d0[0];
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_50 ^ (ulonglong)auStack_108);
}

