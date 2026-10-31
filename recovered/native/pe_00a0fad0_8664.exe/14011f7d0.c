/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14011f7d0 */

undefined8
FUN_14011f7d0(int *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,uint *param_5,
             int param_6,undefined8 param_7,byte param_8)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar6;
  undefined8 in_stack_ffffffffffffffb0;
  undefined4 uVar7;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffb0 >> 0x20);
  __except_validate_context_record(param_3);
  lVar3 = FUN_14011d6e0();
  if ((*(int *)(lVar3 + 0x40) == 0) && (iVar2 = *param_1, iVar2 != -0x1f928c9d)) {
    if (iVar2 == -0x7fffffd7) {
      if (param_1[6] == 0xf) {
        bVar5 = *(longlong *)(param_1 + 0x18) == 0x19930520;
        goto LAB_14011f829;
      }
    }
    else {
      bVar5 = iVar2 == -0x7fffffda;
LAB_14011f829:
      if (bVar5) goto LAB_14011f843;
    }
    if ((0x19930521 < (*param_5 & 0x1fffffff)) && ((param_5[9] & 1) != 0)) {
      return 1;
    }
  }
LAB_14011f843:
  if ((param_1[1] & 0x66U) == 0) {
    if ((param_5[3] == 0) &&
       ((((*param_5 & 0x1fffffff) < 0x19930521 || (uVar1 = param_5[8], uVar1 == 0)) ||
        (lVar3 = FUN_1401070c0(), lVar3 + (int)uVar1 == 0)))) {
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
         (lVar3 = FUN_140107100(), lVar3 + iVar2 != 0)))))) {
      uVar4 = (*(code *)PTR__guard_dispatch_icall_140178c20)
                        (param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                         CONCAT44(uVar7,(uint)param_8));
      return uVar4;
    }
    FUN_14011fc60(param_1,param_2,param_3,param_4,param_5,param_8,CONCAT44(uVar6,param_6),param_7);
    return 1;
  }
  if (param_5[1] == 0) {
    return 1;
  }
  if (param_6 != 0) {
    return 1;
  }
  if ((param_1[1] & 0x20U) == 0) {
LAB_14011f8dd:
    FUN_1401068b0(param_2,param_4,param_5);
    return 1;
  }
  if (*param_1 == -0x7fffffda) {
    iVar2 = FUN_14011d8b0(param_5,param_4,*(undefined8 *)(param_4 + 0x20));
    if ((-2 < iVar2) && (iVar2 < (int)param_5[1])) {
      FUN_14011e210(param_2,param_4,param_5,iVar2);
      return 1;
    }
  }
  else {
    if (*param_1 != -0x7fffffd7) goto LAB_14011f8dd;
    if ((-2 < param_1[0xe]) && (param_1[0xe] < (int)param_5[1])) {
      FUN_14011e210(*(undefined8 *)(param_1 + 10),param_4,param_5);
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140115938();
}

