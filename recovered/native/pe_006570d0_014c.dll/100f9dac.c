/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f9dac */

void * __fastcall FUN_100f9dac(void *param_1)

{
  int *unaff_FS_OFFSET;
  undefined1 *local_18;
  int local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_18;
  local_10 = &LAB_1012c930;
  local_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_14;
  *(undefined4 *)((int)param_1 + 0x9c) = 0;
  *(undefined4 *)((int)param_1 + 0xa0) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
  *(undefined4 *)((int)param_1 + 0xa8) = 0;
  *(undefined4 *)((int)param_1 + 0xac) = 0;
  *(undefined4 *)((int)param_1 + 0xb0) = 0;
  *(undefined4 *)((int)param_1 + 0xb8) = 0;
  *(undefined4 *)((int)param_1 + 0xb4) = 0;
  *(undefined4 *)((int)param_1 + 0xbc) = 0;
  local_c = 1;
  _memset(param_1,0,0xc0);
  *(undefined2 *)((int)param_1 + 0x1c) = 0x2e;
  *unaff_FS_OFFSET = local_14;
  return param_1;
}

