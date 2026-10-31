/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00494da0 */

char __cdecl FUN_00494da0(int param_1,uint *param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  code *pcVar2;
  void **ppvVar3;
  uint uVar4;
  uint *puVar5;
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  undefined4 local_8;
  
  pcVar2 = DAT_005216bc;
  puStack_10 = &LAB_004858c0;
  local_14 = ExceptionList;
  local_c = DAT_0050e8c0 ^ 0x50d030;
  if (((param_3[1] == 0) || (*(char *)(param_3[1] + 8) == '\0')) ||
     ((param_3[2] == 0 && (-1 < (int)*param_3)))) {
    return '\0';
  }
  uVar4 = *param_3;
  if (-1 < (int)uVar4) {
    param_2 = (uint *)((int)param_2 + param_3[2] + 0xc);
  }
  local_8 = 0;
  if ((((char)uVar4 < '\0') && ((*param_4 & 0x10) != 0)) && (DAT_005216bc != (code *)0x0)) {
    ExceptionList = &local_14;
    (*(code *)PTR_guard_check_icall_00508898)();
    uVar4 = (*pcVar2)();
  }
  else {
    if ((uVar4 & 8) == 0) {
      ppvVar3 = &local_14;
      if ((*param_4 & 1) == 0) {
        iVar1 = *(int *)(param_1 + 0x18);
        if (param_4[6] == 0) {
          if ((iVar1 != 0) && (param_2 != (uint *)0x0)) {
            uVar4 = param_4[5];
            ExceptionList = &local_14;
            puVar5 = (uint *)___AdjustPointer(iVar1,(int *)(param_4 + 2));
            FUN_004878c0(param_2,puVar5,uVar4);
            ExceptionList = local_14;
            return '\0';
          }
        }
        else if ((iVar1 != 0) && (param_2 != (uint *)0x0)) {
          return ((*param_4 & 4) != 0) + '\x01';
        }
      }
      else if ((*(uint **)(param_1 + 0x18) != (uint *)0x0) && (param_2 != (uint *)0x0)) {
        ExceptionList = &local_14;
        FUN_004878c0(param_2,*(uint **)(param_1 + 0x18),param_4[5]);
        if ((param_4[5] == 4) && (*param_2 != 0)) {
          uVar4 = ___AdjustPointer(*param_2,(int *)(param_4 + 2));
          *param_2 = uVar4;
          ExceptionList = local_14;
          return '\0';
        }
        ExceptionList = local_14;
        return '\0';
      }
      goto LAB_00494f7c;
    }
    uVar4 = *(uint *)(param_1 + 0x18);
    ExceptionList = &local_14;
  }
  ppvVar3 = ExceptionList;
  if ((uVar4 != 0) && (param_2 != (uint *)0x0)) {
    *param_2 = uVar4;
    uVar4 = ___AdjustPointer(uVar4,(int *)(param_4 + 2));
    *param_2 = uVar4;
    ExceptionList = local_14;
    return '\0';
  }
LAB_00494f7c:
  ExceptionList = ppvVar3;
                    /* WARNING: Subroutine does not return */
  FUN_004903c8();
}

