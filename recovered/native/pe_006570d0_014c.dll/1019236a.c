/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1019236a */

void * __fastcall FUN_1019236a(void *param_1)

{
  int local_24;
  int local_20;
  void *local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_24;
  local_10 = &LAB_10196030;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  *(undefined4 *)((int)param_1 + 0x54) = 0;
  *(undefined4 *)((int)param_1 + 0x50) = 0;
  *(undefined4 *)((int)param_1 + 0x58) = 0;
  *(undefined4 *)((int)param_1 + 0x60) = 0;
  *(undefined4 *)((int)param_1 + 0x5c) = 0;
  *(undefined4 *)((int)param_1 + 100) = 0;
  *(undefined4 *)((int)param_1 + 0x6c) = 0;
  *(undefined4 *)((int)param_1 + 0x68) = 0;
  *(undefined4 *)((int)param_1 + 0x70) = 0;
  *(undefined4 *)((int)param_1 + 0x78) = 0;
  *(undefined4 *)((int)param_1 + 0x74) = 0;
  *(undefined4 *)((int)param_1 + 0x7c) = 0;
  local_24 = (int)param_1 + 0xac;
  *(undefined4 *)((int)param_1 + 0xac) = 0;
  *(undefined4 *)((int)param_1 + 0xb0) = 0;
  *(undefined4 *)((int)param_1 + 0xb4) = 0;
  *(undefined4 *)((int)param_1 + 0xb8) = 0;
  *(undefined4 *)((int)param_1 + 0xbc) = 0;
  *(undefined4 *)((int)param_1 + 0x98) = 0;
  *(undefined4 *)((int)param_1 + 0x9c) = 0;
  *(undefined4 *)((int)param_1 + 0xa0) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
  local_20 = (int)param_1 + 0xc0;
  *(undefined4 *)((int)param_1 + 0xc4) = 0;
  *(undefined4 *)((int)param_1 + 0xc0) = 0;
  *(undefined4 *)((int)param_1 + 200) = 0;
  local_c = 5;
  local_1c = param_1;
  _memset(param_1,0,0xd0);
  *(undefined4 *)((int)param_1 + 0x94) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0xd4) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0xd0) = 0xffffffff;
  ExceptionList = local_14;
  return local_1c;
}

