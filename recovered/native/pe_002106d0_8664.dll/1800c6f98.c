/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c6f98 */

void FUN_1800c6f98(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_2 = std::
             _Func_impl_no_alloc<`void___cdecl_WolfSetFieldValue(WolfDbType,unsigned___int64,unsigned___int64,unsigned___int64,int,char_const*___ptr64)'::`1'::<lambda_10>,void>
             ::vftable;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  param_2[1] = *(undefined8 *)(param_1 + 8);
  param_2[2] = uVar1;
  param_2[3] = uVar2;
  param_2[4] = uVar3;
  param_2[5] = uVar4;
  param_2[6] = uVar5;
  return;
}

