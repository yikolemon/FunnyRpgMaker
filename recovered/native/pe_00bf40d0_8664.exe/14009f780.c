/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14009f780 */

undefined8
FUN_14009f780(int *param_1,longlong *param_2,ULONG_PTR param_3,ulonglong *param_4,uint *param_5,
             int param_6,undefined8 param_7,byte param_8)

{
  uint uVar1;
  int iVar2;
  PVOID pvVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 in_stack_ffffffffffffffb0;
  undefined4 uVar7;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffb0 >> 0x20);
  __except_validate_context_record(param_3);
  pvVar3 = FUN_14009d690();
  if ((*(int *)((longlong)pvVar3 + 0x40) == 0) && (iVar2 = *param_1, iVar2 != -0x1f928c9d)) {
    if (iVar2 == -0x7fffffd7) {
      if (param_1[6] == 0xf) {
        bVar6 = *(longlong *)(param_1 + 0x18) == 0x19930520;
        goto LAB_14009f7d9;
      }
    }
    else {
      bVar6 = iVar2 == -0x7fffffda;
LAB_14009f7d9:
      if (bVar6) goto LAB_14009f7f3;
    }
    if ((0x19930521 < (*param_5 & 0x1fffffff)) && ((param_5[9] & 1) != 0)) {
      return 1;
    }
  }
LAB_14009f7f3:
  if ((param_1[1] & 0x66U) == 0) {
    if ((param_5[3] == 0) &&
       ((((*param_5 & 0x1fffffff) < 0x19930521 || (uVar1 = param_5[8], uVar1 == 0)) ||
        (lVar4 = FUN_14008d650(), lVar4 + (int)uVar1 == 0)))) {
      if ((*param_5 & 0x1fffffff) < 0x19930522) {
        return 1;
      }
      if ((param_5[9] & 4) == 0) {
        return 1;
      }
    }
    if (((*param_1 == -0x1f928c9d) && (2 < (uint)param_1[6])) &&
       ((0x19930522 < (uint)param_1[8] &&
        ((iVar2 = *(int *)(*(longlong *)(param_1 + 0xc) + 8), iVar2 != 0 &&
         (lVar4 = FUN_14008d690(), lVar4 + iVar2 != 0)))))) {
      uVar5 = (*(code *)PTR__guard_dispatch_icall_1401200f0)
                        (param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                         CONCAT44(uVar7,(uint)param_8));
      return uVar5;
    }
    FUN_14009fc10(param_1,param_2,param_3,param_4,param_5,param_8);
    return 1;
  }
  if (param_5[1] == 0) {
    return 1;
  }
  if (param_6 != 0) {
    return 1;
  }
  if ((param_1[1] & 0x20U) == 0) {
LAB_14009f88d:
    FUN_14008ce40(param_2,param_4,(longlong)param_5);
    return 1;
  }
  if (*param_1 == -0x7fffffda) {
    iVar2 = FUN_14009d860((longlong)param_5,(longlong)param_4,param_4[4]);
    if ((-2 < iVar2) && (iVar2 < (int)param_5[1])) {
      FUN_14009e1c0(param_2,param_4,(longlong)param_5,iVar2);
      return 1;
    }
  }
  else {
    if (*param_1 != -0x7fffffd7) goto LAB_14009f88d;
    iVar2 = param_1[0xe];
    if ((-2 < iVar2) && (iVar2 < (int)param_5[1])) {
      FUN_14009e1c0(*(longlong **)(param_1 + 10),param_4,(longlong)param_5,iVar2);
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140096cf8();
}

