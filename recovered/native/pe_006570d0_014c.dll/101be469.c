/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101be469 */

void FUN_101be469(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined ***local_60;
  int local_5c [3];
  undefined **local_50;
  int local_4c;
  undefined ***local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  piVar1 = DAT_103a4d2c;
  local_28 = &stack0xfffffffc;
  local_24 = (undefined1 *)&local_60;
  local_18 = 0xffffffff;
  local_1c = &LAB_101be620;
  local_20 = ExceptionList;
  if (DAT_103a4d30 == 0) {
    local_5c[0] = 0;
    ExceptionList = &local_20;
    uVar2 = FUN_10018d26(local_5c);
    iVar3 = (**(code **)(*piVar1 + 0x24))(piVar1,0,&DAT_10302c80,uVar2);
    if (local_5c[0] != 0 && -1 < iVar3) {
      local_60 = &local_50;
      local_50 = std::
                 _Func_impl_no_alloc<`void___cdecl_Dx11::CreateRenderTarget(void)'::`1'::<lambda_0>,void>
                 ::vftable;
      local_4c = local_5c[0];
      local_18 = 1;
      local_2c = local_60;
      FUN_1006a6bc(&local_50);
      local_18 = 0xffffffff;
      if (local_2c != (undefined ***)0x0) {
        (*(code *)(*local_2c)[4])(local_2c != &local_50);
      }
      local_18 = 2;
      (**(code **)(*DAT_103a4d24 + 0x24))(DAT_103a4d24,local_5c[0],0,&DAT_103a4d30);
      local_18 = 0xffffffff;
      FUN_1006b59e();
    }
  }
  ExceptionList = local_20;
  return;
}

