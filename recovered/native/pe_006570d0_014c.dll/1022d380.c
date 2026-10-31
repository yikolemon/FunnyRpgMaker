/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022d380 */

void __thiscall
FUN_1022d380(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined1 local_2c [24];
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1028883d;
  local_10 = ExceptionList;
  uVar1 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar2 = param_1;
  local_14 = uVar1;
  FUN_10001f66(param_4);
  local_8 = 0;
  FUN_10003116(param_2,param_3,local_2c);
  FUN_10001fee(uVar1);
  *param_1 = std::system_error::vftable;
  ExceptionList = local_10;
                    /* WARNING: Subroutine does not return */
  FUN_102283e0(puVar2);
}

