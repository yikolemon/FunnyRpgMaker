/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f4466 */

/* WARNING: Unable to track spacebase fully for stack */

void __fastcall FUN_100f4466(int *param_1)

{
  undefined1 *puVar1;
  undefined4 local_34;
  undefined *local_30;
  int local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_28 = (undefined1 *)&local_28;
  local_18 = &LAB_100f56c0;
  local_1c = ExceptionList;
  local_14 = 0;
  local_2c = *param_1;
  ExceptionList = &local_1c;
  if ((local_2c != 0) && (((char)param_1[1] != '\x01' || (*(char *)(local_2c + 0x6c) != '\x01')))) {
    local_20 = (undefined1 *)&local_34;
    local_24 = (undefined1 *)&local_34;
    local_34 = 0;
    local_30 = (undefined *)0x0;
    FUN_102353d0(&local_34,&stack0x00000004);
    local_24[8] = 0;
    local_14 = 0;
    FUN_100f3038();
    puVar1 = local_28;
    local_20 = local_28;
    local_14 = 0xffffffff;
    *(undefined1 **)(local_28 + -4) = &stack0x00000004;
    *(undefined4 *)(puVar1 + -8) = 0x100f4514;
    FUN_10235380();
    ExceptionList = local_1c;
    return;
  }
  local_2c = 4;
                    /* WARNING: Subroutine does not return */
  local_30 = &UNK_100f4532;
  FUN_100f2ce8();
}

