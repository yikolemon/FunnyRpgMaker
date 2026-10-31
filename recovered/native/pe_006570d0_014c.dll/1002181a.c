/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002181a */

void __thiscall FUN_1002181a(uintptr_t *param_1,undefined4 param_2)

{
  uintptr_t uVar1;
  uintptr_t *local_2c;
  uint *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_2c;
  local_14 = 0xffffffff;
  local_18 = &LAB_10059630;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  local_24 = (undefined4 *)FUN_10228350(4);
  *local_24 = param_2;
  local_14 = 0;
  local_28 = param_1 + 1;
  local_2c = param_1;
  uVar1 = __beginthreadex((void *)0x0,0,(_StartAddress *)&LAB_100218d4,local_24,0,local_28);
  *local_2c = uVar1;
  if (uVar1 != 0) {
    ExceptionList = local_1c;
    return;
  }
  *local_28 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_1022d330(6);
}

