/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00494690 */

void __cdecl
FUN_00494690(EHRegistrationNode *param_1,void *param_2,_s_FuncInfo *param_3,int param_4)

{
  int iVar1;
  PVOID pvVar2;
  int iVar3;
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  undefined4 local_8;
  
  local_8 = 0xfffffffe;
  puStack_10 = &LAB_004858c0;
  local_14 = ExceptionList;
  local_c = DAT_0050e8c0 ^ 0x50cf88;
  ExceptionList = &local_14;
  iVar1 = __FrameHandler3::GetCurrentState(param_1,param_2,param_3);
  pvVar2 = FUN_00494580();
  *(int *)((int)pvVar2 + 0x18) = *(int *)((int)pvVar2 + 0x18) + 1;
  while (iVar3 = iVar1, local_8 = 0, iVar3 != param_4) {
    if ((iVar3 < 0) || (param_3->maxState <= iVar3)) goto LAB_004947d0;
    iVar1 = param_3->pUnwindMap[iVar3].toState;
    local_8 = 1;
    if (param_3->pUnwindMap[iVar3].action != (action *)0x0) {
      FUN_004a35d0((int)param_1,param_2,param_3,iVar1);
      __CallSettingFrame_12(param_3->pUnwindMap[iVar3].action,param_1,0x103);
    }
  }
  local_8 = 0xfffffffe;
  FUN_004947bc();
  if (iVar3 == param_4) {
    FUN_004a35d0((int)param_1,param_2,param_3,iVar3);
    ExceptionList = local_14;
    return;
  }
LAB_004947d0:
                    /* WARNING: Subroutine does not return */
  FUN_004903c8();
}

