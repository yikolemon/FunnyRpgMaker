/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10272460 */

void FUN_10272460(EHRegistrationNode *param_1,void *param_2,_s_FuncInfo *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  undefined4 local_8;
  
  local_8 = 0xfffffffe;
  puStack_10 = &LAB_102592b0;
  local_14 = ExceptionList;
  local_c = DAT_10388d00 ^ 0x10382d58;
  ExceptionList = &local_14;
  iVar1 = __FrameHandler3::GetCurrentState(param_1,param_2,param_3);
  iVar2 = FUN_10272260();
  *(int *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x18) + 1;
  while (iVar2 = iVar1, local_8 = 0, iVar2 != param_4) {
    if ((iVar2 < 0) || (param_3->maxState <= iVar2)) goto LAB_102725a0;
    iVar1 = param_3->pUnwindMap[iVar2].toState;
    local_8 = 1;
    if (param_3->pUnwindMap[iVar2].action != (action *)0x0) {
      FUN_10283410(param_1,param_2,param_3,iVar1);
      __CallSettingFrame_12(param_3->pUnwindMap[iVar2].action,param_1,0x103);
    }
  }
  local_8 = 0xfffffffe;
  FUN_1027258c();
  if (iVar2 == param_4) {
    FUN_10283410(param_1,param_2,param_3,iVar2);
    ExceptionList = local_14;
    return;
  }
LAB_102725a0:
                    /* WARNING: Subroutine does not return */
  _abort();
}

