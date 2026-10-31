/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ef092 */

void __fastcall FUN_100ef092(uintptr_t *param_1)

{
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
  local_18 = &LAB_100f5250;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  local_28 = (void *)FUN_10228350(1);
  local_14 = 1;
  local_2c = param_1 + 1;
  local_24 = param_1;
  uVar1 = __beginthreadex((void *)0x0,0,(_StartAddress *)&LAB_100ef176,local_28,0,local_2c);
  *local_24 = uVar1;
  if (uVar1 != 0) {
    ExceptionList = local_1c;
    return;
  }
  *local_2c = 0;
                    /* WARNING: Subroutine does not return */
  FUN_1022d330(6);
}

