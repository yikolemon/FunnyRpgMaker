/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f0e20 */

void __thiscall FUN_100f0e20(uintptr_t *param_1,undefined4 param_2,undefined4 param_3)

{
  uintptr_t *_ArgList;
  uintptr_t uVar1;
  uint *local_2c;
  void *local_28;
  uintptr_t *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_2c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100f5410;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  local_24 = (uintptr_t *)FUN_10228350(0xc);
  local_14 = 0;
  FUN_100f1180(param_2,param_3);
  _ArgList = local_24;
  local_28 = local_24;
  local_14 = 1;
  local_2c = param_1 + 1;
  local_24 = param_1;
  uVar1 = __beginthreadex((void *)0x0,0,(_StartAddress *)&LAB_100f0faa,_ArgList,0,local_2c);
  *local_24 = uVar1;
  if (uVar1 != 0) {
    ExceptionList = local_1c;
    return;
  }
  *local_2c = 0;
                    /* WARNING: Subroutine does not return */
  FUN_1022d330(6);
}

