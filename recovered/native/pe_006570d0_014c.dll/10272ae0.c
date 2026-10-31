/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10272ae0 */

char FUN_10272ae0(int param_1,int *param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  code *pcVar2;
  void **ppvVar3;
  int iVar4;
  undefined4 uVar5;
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  undefined4 local_8;
  
  pcVar2 = DAT_103a4d44;
  puStack_10 = &LAB_102592b0;
  local_14 = ExceptionList;
  local_c = DAT_10388d00 ^ 0x10382e00;
  if (((param_3[1] == 0) || (*(char *)(param_3[1] + 8) == '\0')) ||
     ((param_3[2] == 0 && (-1 < (int)*param_3)))) {
    return '\0';
  }
  uVar1 = *param_3;
  if (-1 < (int)uVar1) {
    param_2 = (int *)((int)param_2 + param_3[2] + 0xc);
  }
  local_8 = 0;
  if ((((char)uVar1 < '\0') && ((*param_4 & 0x10) != 0)) && (DAT_103a4d44 != (code *)0x0)) {
    ExceptionList = &local_14;
    (*(code *)PTR_guard_check_icall_1035d810)();
    iVar4 = (*pcVar2)();
  }
  else {
    if ((uVar1 & 8) == 0) {
      ppvVar3 = &local_14;
      if ((*param_4 & 1) == 0) {
        iVar4 = *(int *)(param_1 + 0x18);
        if (param_4[6] == 0) {
          if ((iVar4 != 0) && (param_2 != (int *)0x0)) {
            ExceptionList = &local_14;
            uVar5 = ___AdjustPointer(iVar4,param_4 + 2,param_4[5]);
            FUN_1025b2d0(param_2,uVar5);
            ExceptionList = local_14;
            return '\0';
          }
        }
        else if ((iVar4 != 0) && (param_2 != (int *)0x0)) {
          return ((*param_4 & 4) != 0) + '\x01';
        }
      }
      else if ((*(int *)(param_1 + 0x18) != 0) && (param_2 != (int *)0x0)) {
        ExceptionList = &local_14;
        FUN_1025b2d0(param_2,*(int *)(param_1 + 0x18),param_4[5]);
        if ((param_4[5] == 4) && (*param_2 != 0)) {
          iVar4 = ___AdjustPointer(*param_2,param_4 + 2);
          *param_2 = iVar4;
          ExceptionList = local_14;
          return '\0';
        }
        ExceptionList = local_14;
        return '\0';
      }
      goto LAB_10272cbc;
    }
    iVar4 = *(int *)(param_1 + 0x18);
    ExceptionList = &local_14;
  }
  ppvVar3 = ExceptionList;
  if ((iVar4 != 0) && (param_2 != (int *)0x0)) {
    *param_2 = iVar4;
    iVar4 = ___AdjustPointer(iVar4,param_4 + 2);
    *param_2 = iVar4;
    ExceptionList = local_14;
    return '\0';
  }
LAB_10272cbc:
  ExceptionList = ppvVar3;
                    /* WARNING: Subroutine does not return */
  _abort();
}

