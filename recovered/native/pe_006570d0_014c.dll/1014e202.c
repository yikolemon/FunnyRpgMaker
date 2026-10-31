/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014e202 */

void * __fastcall FUN_1014e202(void *param_1)

{
  int local_24;
  void *local_20;
  undefined4 local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_24;
  local_10 = &LAB_10156240;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  *(undefined4 *)((int)param_1 + 8) = 0;
  *(undefined4 *)((int)param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  local_1c = 0;
  *(undefined4 *)((int)param_1 + 0x30) = 0;
  *(undefined4 *)((int)param_1 + 0x34) = 0;
  *(undefined4 *)((int)param_1 + 0x38) = 0;
  *(undefined4 *)((int)param_1 + 0x3c) = 0;
  local_24 = (int)param_1 + 0x98;
  *(undefined4 *)((int)param_1 + 0x94) = 0;
  *(undefined4 *)((int)param_1 + 0x98) = 0;
  *(undefined4 *)((int)param_1 + 0x9c) = 0;
  *(undefined4 *)((int)param_1 + 0xa0) = 0;
  *(undefined4 *)((int)param_1 + 0x88) = 0;
  *(undefined4 *)((int)param_1 + 0x8c) = 0;
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0x94) = 0;
  local_c = 1;
  local_20 = param_1;
  _memset(param_1,0,0xa4);
  *(undefined4 *)((int)param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x28) = 0xffffffff;
  *(undefined2 *)((int)param_1 + 0x82) = 0xffff;
  ExceptionList = local_14;
  return local_20;
}

