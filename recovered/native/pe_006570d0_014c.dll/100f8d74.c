/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f8d74 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * __fastcall FUN_100f8d74(void *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  void *local_20;
  undefined1 *local_1c;
  int local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_20;
  local_14 = &LAB_1012c920;
  local_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_18;
  *(undefined8 *)((int)param_1 + 0xa8) = 0;
  *(undefined8 *)((int)param_1 + 0xb4) = 0;
  *(undefined4 *)((int)param_1 + 0xb6c) = 0;
  *(undefined4 *)((int)param_1 + 0xb70) = 0;
  *(undefined4 *)((int)param_1 + 0xb74) = 0;
  *(undefined4 *)((int)param_1 + 0xb78) = 0;
  *(undefined4 *)((int)param_1 + 0xb7c) = 0;
  *(undefined4 *)((int)param_1 + 0xb80) = 0;
  *(undefined4 *)((int)param_1 + 0xb84) = 0;
  *(undefined4 *)((int)param_1 + 0xb88) = 0;
  *(undefined8 *)((int)param_1 + 0xb8c) = 0;
  *(undefined4 *)((int)param_1 + 0xbb4) = 0;
  *(undefined4 *)((int)param_1 + 0xbb0) = 0;
  *(undefined4 *)((int)param_1 + 3000) = 0;
  *(undefined4 *)((int)param_1 + 8) = 0;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *(undefined4 *)((int)param_1 + 0x10) = 0;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined4 *)((int)param_1 + 0xa90) = 0;
  *(undefined4 *)((int)param_1 + 0xa94) = 0;
  *(undefined4 *)((int)param_1 + 0xa98) = 0;
  *(undefined4 *)((int)param_1 + 0xa9c) = 0;
  *(undefined4 *)((int)param_1 + 0xaa0) = 0;
  *(undefined4 *)((int)param_1 + 0xaa4) = 0;
  *(undefined4 *)((int)param_1 + 0xaa8) = 0;
  *(undefined4 *)((int)param_1 + 0xaac) = 0;
  *(undefined4 *)((int)param_1 + 0xab0) = 0;
  *(undefined4 *)((int)param_1 + 0xab4) = 0;
  *(undefined4 *)((int)param_1 + 0xab8) = 0;
  *(undefined4 *)((int)param_1 + 0xabc) = 0;
  local_10 = 0;
  local_20 = param_1;
  _memset(param_1,0,0xbd0);
  *(undefined8 *)((int)param_1 + 0x18) = DAT_102b8960;
  *(char **)((int)param_1 + 0x20) = "imgui.ini";
  *(char **)((int)param_1 + 0x24) = "imgui_log.txt";
  *(undefined8 *)((int)param_1 + 0x28) = 0;
  *(undefined8 *)((int)param_1 + 0x2d) = 0;
  *(undefined4 *)((int)param_1 + 0xbbc) = 0x3f800000;
  uVar3 = _UNK_102b897c;
  uVar2 = _UNK_102b8978;
  uVar1 = _UNK_102b8974;
  *(undefined4 *)((int)param_1 + 8) = _DAT_102b8970;
  *(undefined4 *)((int)param_1 + 0xc) = uVar1;
  *(undefined4 *)((int)param_1 + 0x10) = uVar2;
  *(undefined4 *)((int)param_1 + 0x14) = uVar3;
  *(undefined2 *)((int)param_1 + 0x36) = 0x100;
  *(undefined1 *)((int)param_1 + 0x38) = 1;
  *(undefined1 *)((int)param_1 + 0x3a) = 1;
  *(undefined4 *)((int)param_1 + 0x3f) = 0;
  *(undefined4 *)((int)param_1 + 0x3b) = 0;
  *(undefined2 *)((int)param_1 + 0x43) = 0x101;
  *(undefined1 *)((int)param_1 + 0x45) = 1;
  *(undefined2 *)((int)param_1 + 0x49) = 0x100;
  *(undefined1 *)((int)param_1 + 0x4b) = 1;
  *(undefined2 *)((int)param_1 + 0x4d) = 0x100;
  *(undefined2 *)((int)param_1 + 0x50) = 0x100;
  *(undefined2 *)((int)param_1 + 0x71) = 0x101;
  *(undefined1 *)((int)param_1 + 0x74) = 0;
  *(undefined4 *)((int)param_1 + 0x6c) = 0x1010101;
  uVar3 = _UNK_102b898c;
  uVar2 = _UNK_102b8988;
  uVar1 = _UNK_102b8984;
  *(undefined4 *)((int)param_1 + 0x54) = _DAT_102b8980;
  *(undefined4 *)((int)param_1 + 0x58) = uVar1;
  *(undefined4 *)((int)param_1 + 0x5c) = uVar2;
  *(undefined4 *)((int)param_1 + 0x60) = uVar3;
  *(undefined8 *)((int)param_1 + 100) = DAT_102b8990;
  *(undefined4 *)((int)param_1 + 0x78) = 0;
  *(undefined4 *)((int)param_1 + 0x7c) = 0;
  *(undefined4 *)((int)param_1 + 0x80) = 0;
  *(undefined4 *)((int)param_1 + 0x84) = 0;
  *(undefined4 *)((int)param_1 + 0x88) = 0;
  *(undefined4 *)((int)param_1 + 0xb4) = 0xff7fffff;
  *(undefined4 *)((int)param_1 + 0xb8) = 0xff7fffff;
  *(undefined4 *)((int)param_1 + 0xa90) = 0xff7fffff;
  *(undefined4 *)((int)param_1 + 0xa94) = 0xff7fffff;
  iVar5 = 0x2d1;
  do {
    *(undefined4 *)((int)param_1 + iVar5 * 4 + 0x14) = 0xbf800000;
    *(undefined4 *)((int)param_1 + iVar5 * 4) = 0xbf800000;
    uVar4 = DAT_102b89a0;
    iVar5 = iVar5 + 1;
  } while (iVar5 != 0x2d6);
  iVar5 = 0xe0;
  do {
    *(undefined8 *)((int)param_1 + iVar5) = uVar4;
    iVar5 = iVar5 + 0x10;
  } while (iVar5 != 0xa90);
  *(undefined1 *)((int)param_1 + 0xbad) = 1;
  *unaff_FS_OFFSET = local_18;
  return local_20;
}

