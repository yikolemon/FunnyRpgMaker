/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011e6ed */

void FUN_18011e6ed(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  undefined1 uVar3;
  int iVar4;
  char *_Str1;
  longlong lVar5;
  uint *puVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_88 [32];
  int *local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38 [2];
  int local_30;
  int local_2c;
  uint local_28;
  char local_21;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_88;
  local_21 = '\0';
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  uStack_40 = 0;
  local_38[0] = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0xff;
  _Str1 = (char *)FUN_1800feabf(param_4);
  iVar4 = strncmp(_Str1,"DockNode",8);
  if (iVar4 == 0) {
    lVar5 = FUN_1800feabf(_Str1 + 8);
  }
  else {
    iVar4 = strncmp(_Str1,"DockSpace",9);
    if (iVar4 != 0) goto LAB_18011eb32;
    lVar5 = FUN_1800feabf(_Str1 + 9);
    local_48 = CONCAT44(0x400,(undefined4)local_48);
  }
  iVar4 = FUN_18012b8d7(lVar5,"ID=0x%08X%n",&local_58,&local_30);
  if (iVar4 != 1) goto LAB_18011eb32;
  lVar5 = lVar5 + local_30;
  iVar4 = FUN_18012b8d7(lVar5," Parent=0x%08X%n",(longlong)&local_58 + 4);
  if (iVar4 == 1) {
    if (local_58._4_4_ == 0) goto LAB_18011eb32;
    lVar5 = lVar5 + local_30;
  }
  iVar4 = FUN_18012b8d7(lVar5," Window=0x%08X%n",&uStack_50,&local_30);
  if (iVar4 == 1) {
    if ((int)uStack_50 == 0) goto LAB_18011eb32;
    lVar5 = lVar5 + local_30;
  }
  local_68 = &local_30;
  if (local_58._4_4_ == 0) {
    iVar4 = FUN_18012b8d7(lVar5," Pos=%i,%i%n",&local_28,&local_2c);
    if (iVar4 != 2) goto LAB_18011eb32;
    lVar5 = lVar5 + local_30;
    uStack_40 = CONCAT44(uStack_40._4_4_,local_2c << 0x10 | local_28 & 0xffff);
    local_68 = &local_30;
    iVar4 = FUN_18012b8d7(lVar5," Size=%i,%i%n");
    if (iVar4 != 2) goto LAB_18011eb32;
    puVar6 = (uint *)((longlong)&uStack_40 + 4);
LAB_18011e8c5:
    lVar5 = lVar5 + local_30;
    *puVar6 = local_2c << 0x10 | local_28 & 0xffff;
  }
  else {
    iVar4 = FUN_18012b8d7(lVar5," SizeRef=%i,%i%n",&local_28,&local_2c);
    if (iVar4 == 2) {
      puVar6 = local_38;
      goto LAB_18011e8c5;
    }
  }
  iVar4 = FUN_18012b8d7(lVar5," Split=%c%n",&local_21,&local_30);
  if (iVar4 == 1) {
    lVar5 = lVar5 + local_30;
    if (local_21 == 'X') {
      uVar3 = 0;
    }
    else {
      if (local_21 != 'Y') goto LAB_18011e91c;
      uVar3 = 1;
    }
    local_48 = CONCAT71(local_48._1_7_,uVar3);
  }
LAB_18011e91c:
  iVar4 = FUN_18012b8d7(lVar5," NoResize=%d%n",&local_28,&local_30);
  if ((iVar4 == 1) && (lVar5 = lVar5 + local_30, local_28 != 0)) {
    local_48 = local_48 | 0x2000000000;
  }
  iVar4 = FUN_18012b8d7(lVar5," CentralNode=%d%n",&local_28,&local_30);
  if ((iVar4 == 1) && (lVar5 = lVar5 + local_30, local_28 != 0)) {
    local_48 = local_48 | 0x80000000000;
  }
  iVar4 = FUN_18012b8d7(lVar5," NoTabBar=%d%n",&local_28,&local_30);
  if ((iVar4 == 1) && (lVar5 = lVar5 + local_30, local_28 != 0)) {
    local_48 = local_48 | 0x100000000000;
  }
  iVar4 = FUN_18012b8d7(lVar5," HiddenTabBar=%d%n",&local_28,&local_30);
  if ((iVar4 == 1) && (lVar5 = lVar5 + local_30, local_28 != 0)) {
    local_48 = local_48 | 0x200000000000;
  }
  iVar4 = FUN_18012b8d7(lVar5," NoWindowMenuButton=%d%n",&local_28,&local_30);
  if ((iVar4 == 1) && (lVar5 = lVar5 + local_30, local_28 != 0)) {
    local_48 = local_48 | 0x400000000000;
  }
  iVar4 = FUN_18012b8d7(lVar5," NoCloseButton=%d%n",&local_28,&local_30);
  if ((iVar4 == 1) && (lVar5 = lVar5 + local_30, local_28 != 0)) {
    local_48 = local_48 | 0x800000000000;
  }
  FUN_18012b8d7(lVar5," Selected=0x%08X%n",(longlong)&uStack_50 + 4,&local_30);
  if (local_58._4_4_ != 0) {
    lVar5 = FUN_180132687(param_1);
    if (lVar5 != 0) {
      local_48._0_2_ = CONCAT11(*(char *)(lVar5 + 0x11) + '\x01',(undefined1)local_48);
    }
  }
  iVar4 = *(int *)(param_1 + 0x2950);
  if (iVar4 == *(int *)(param_1 + 0x2954)) {
    if (iVar4 == 0) {
      iVar8 = 8;
    }
    else {
      iVar8 = iVar4 / 2 + iVar4;
    }
    iVar9 = iVar4 + 1;
    if (iVar4 + 1 < iVar8) {
      iVar9 = iVar8;
    }
    lVar5 = FUN_1800fe7f8((longlong)iVar9 * 0x24);
    if (*(longlong *)(param_1 + 0x2958) != 0) {
      FUN_1802a82f0(lVar5,*(longlong *)(param_1 + 0x2958),
                    (longlong)*(int *)(param_1 + 0x2950) * 0x24);
      FUN_1800fe8d4(*(undefined8 *)(param_1 + 0x2958));
    }
    *(longlong *)(param_1 + 0x2958) = lVar5;
    *(int *)(param_1 + 0x2954) = iVar9;
    iVar4 = *(int *)(param_1 + 0x2950);
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x2958);
  }
  lVar7 = (longlong)iVar4;
  *(uint *)(lVar5 + 0x20 + lVar7 * 0x24) = local_38[0];
  puVar2 = (ulonglong *)(lVar5 + 0x10 + lVar7 * 0x24);
  *puVar2 = local_48;
  puVar2[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + lVar7 * 0x24);
  *puVar1 = local_58;
  puVar1[1] = uStack_50;
  *(int *)(param_1 + 0x2950) = *(int *)(param_1 + 0x2950) + 1;
LAB_18011eb32:
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_88)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_88);
}

