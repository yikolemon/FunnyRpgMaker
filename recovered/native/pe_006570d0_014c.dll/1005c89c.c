/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005c89c */

void FUN_1005c89c(void)

{
  undefined1 auStack_58 [4];
  undefined ***local_54;
  undefined **local_50;
  undefined1 *local_4c;
  undefined1 *local_48;
  undefined1 *local_44;
  undefined1 *local_40;
  undefined1 *local_3c;
  undefined1 *local_38;
  undefined ***local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_58;
  local_1c = &LAB_100c1a00;
  local_20 = ExceptionList;
  local_54 = &local_50;
  local_50 = std::
             _Func_impl_no_alloc<`void___cdecl_WolfSetFieldValue(WolfDbType,unsigned_int,unsigned_int,unsigned_int,int,char_const*)'::`1'::<lambda_10>,void>
             ::vftable;
  local_4c = &stack0x00000004;
  local_48 = &stack0x00000008;
  local_44 = &stack0x0000000c;
  local_40 = &stack0x00000010;
  local_3c = &stack0x00000014;
  local_38 = &stack0x00000018;
  local_18 = 1;
  ExceptionList = &local_20;
  local_2c = local_54;
  FUN_1005c6a3(&local_50);
  local_18 = 0xffffffff;
  if (local_2c != (undefined ***)0x0) {
    (*(code *)(*local_2c)[4])(local_2c != &local_50);
  }
  ExceptionList = local_20;
  return;
}

