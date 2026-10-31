/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1016a4e2 */

void * __fastcall FUN_1016a4e2(void *param_1)

{
  undefined4 uVar1;
  int *unaff_FS_OFFSET;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_14 = 0xffffffff;
  local_18 = &LAB_1016a670;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_24 = (int)param_1 + 0x15c;
  *(undefined4 *)((int)param_1 + 0x160) = 0;
  *(undefined4 *)((int)param_1 + 0x15c) = 0;
  *(undefined4 *)((int)param_1 + 0x164) = 0;
  *(undefined4 *)((int)param_1 + 0x10) = 0;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined4 *)((int)param_1 + 0x18) = 0;
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  *(undefined8 *)((int)param_1 + 0x20) = 0;
  _memset((void *)((int)param_1 + 0xc4),0,0x90);
  *(undefined4 *)((int)param_1 + 0x16c) = 0;
  *(undefined4 *)((int)param_1 + 0x170) = 0;
  *(undefined4 *)((int)param_1 + 0x174) = 0;
  *(undefined4 *)((int)param_1 + 0x178) = 0;
  uVar1 = DAT_102b8d80._4_4_;
  *(undefined4 *)((int)param_1 + 0x17c) = (undefined4)DAT_102b8d80;
  *(undefined4 *)((int)param_1 + 0x180) = uVar1;
  *(undefined4 *)((int)param_1 + 0x184) = 0;
  *(undefined4 *)((int)param_1 + 0x188) = 0;
  *(undefined4 *)((int)param_1 + 0x18c) = 0;
  *(undefined8 *)((int)param_1 + 0x1a0) = 0;
  *(undefined4 *)((int)param_1 + 400) = 0;
  *(undefined4 *)((int)param_1 + 0x194) = 0;
  *(undefined4 *)((int)param_1 + 0x198) = 0;
  *(undefined4 *)((int)param_1 + 0x19c) = 0;
  local_14 = 2;
  _memset(param_1,0,0x204);
  *(undefined4 *)((int)param_1 + 0x3c) = 0xffffffff;
  *unaff_FS_OFFSET = local_1c;
  return param_1;
}

