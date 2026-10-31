/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f3038 */

/* WARNING: Unable to track spacebase fully for stack */

void __thiscall FUN_100f3038(int *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined4 local_34;
  undefined *local_30;
  void **local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  uVar1 = param_4;
  local_20 = (undefined1 *)&local_28;
  local_28 = (undefined1 *)&local_28;
  local_18 = &LAB_100f5630;
  local_1c = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_1c;
  if ((*param_1 != 0) && (((char)param_1[1] != '\x01' || (*(char *)(*param_1 + 0x6c) != '\x01')))) {
    local_20 = (undefined1 *)&local_34;
    local_24 = (undefined1 *)&local_34;
    local_34 = 0;
    local_30 = (undefined *)0x0;
    local_2c = &local_1c;
    FUN_102353d0(&local_34,&param_2);
    local_24[8] = uVar1;
    local_14 = 0;
    FUN_100f31d6();
    puVar2 = local_28;
    local_20 = local_28;
    local_14 = 0xffffffff;
    *(undefined4 **)(local_28 + -4) = &param_2;
    *(undefined4 *)(puVar2 + -8) = 0x100f30e6;
    FUN_10235380();
    ExceptionList = local_1c;
    return;
  }
  local_2c = (void **)0x4;
                    /* WARNING: Subroutine does not return */
  local_30 = &UNK_100f3104;
  FUN_100f2ce8();
}

