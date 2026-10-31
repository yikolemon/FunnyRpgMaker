/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102357f0 */

void FUN_102357f0(undefined4 param_1,int *param_2,byte *param_3)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  if (((*param_3 & 1) == 0) && (iVar1 = *(int *)(param_3 + 0x18), iVar1 != 0)) {
    uVar3 = ___AdjustPointer(param_2,param_3 + 8);
    if ((*param_3 & 4) != 0) {
      FUN_102357d0(param_1,iVar1,uVar3,1);
      return;
    }
    FUN_102357c0(param_1,iVar1,uVar3);
    return;
  }
  FUN_1025b2d0(param_1,param_2,*(undefined4 *)(param_3 + 0x14));
  if (((*param_3 & 8) != 0) && (param_2 = (int *)*param_2, param_2 != (int *)0x0)) {
    pcVar2 = *(code **)(*param_2 + 4);
    (*(code *)PTR_guard_check_icall_1035d810)(param_2);
    (*pcVar2)();
  }
  return;
}

