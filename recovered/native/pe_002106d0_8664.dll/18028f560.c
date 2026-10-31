/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18028f560 */

undefined8
FUN_18028f560(int *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,byte *param_5,
             int param_6,undefined8 param_7,byte param_8)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  byte *pbVar6;
  bool bVar7;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar8;
  undefined8 in_stack_ffffffffffffff80;
  undefined4 uVar9;
  int local_68 [14];
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff80 >> 0x20);
  __except_validate_context_record(param_3);
  lVar3 = FUN_18028cfc0();
  if ((*(int *)(lVar3 + 0x40) == 0) && (iVar1 = *param_1, iVar1 != -0x1f928c9d)) {
    if (iVar1 == -0x7fffffd7) {
      if (param_1[6] == 0xf) {
        bVar7 = *(longlong *)(param_1 + 0x18) == 0x19930520;
        goto LAB_18028f5bc;
      }
    }
    else {
      bVar7 = iVar1 == -0x7fffffda;
LAB_18028f5bc:
      if (bVar7) goto LAB_18028f5c7;
    }
    if ((*param_5 & 0x20) != 0) {
      return 1;
    }
  }
LAB_18028f5c7:
  if ((param_1[1] & 0x66U) == 0) {
    FUN_18028d990(local_68,param_5,*(undefined8 *)(param_4 + 8));
    if ((local_68[0] != 0) || ((*param_5 & 0x40) != 0)) {
      if ((*param_1 == -0x1f928c9d) &&
         ((((2 < (uint)param_1[6] && (0x19930522 < (uint)param_1[8])) &&
           (iVar1 = *(int *)(*(longlong *)(param_1 + 0xc) + 8), iVar1 != 0)) &&
          (lVar3 = FUN_18026e5c0(), lVar3 + iVar1 != 0)))) {
        uVar4 = (*(code *)PTR__guard_dispatch_icall_18038bc80)
                          (param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                           CONCAT44(uVar9,(uint)param_8));
        return uVar4;
      }
      FUN_18028fd70(param_1,param_2,param_3,param_4,param_5,param_8,CONCAT44(uVar8,param_6),param_7)
      ;
    }
  }
  else if (((*(int *)(param_5 + 8) != 0) &&
           (pbVar6 = (byte *)(*(longlong *)(param_4 + 8) + (longlong)*(int *)(param_5 + 8)),
           uVar5 = *pbVar6 & 0xf,
           *(uint *)(pbVar6 + (-4 - (longlong)(char)(&DAT_18034e558)[uVar5])) >>
           ((&DAT_18034e568)[uVar5] & 0x1f) != 0)) && (param_6 == 0)) {
    if ((param_1[1] & 0x20U) != 0) {
      if (*param_1 == -0x7fffffda) {
        iVar1 = FUN_18028d720(param_5,param_4,*(undefined8 *)(param_4 + 0x20));
        if ((-2 < iVar1) && (iVar2 = FUN_18028e610(param_4,param_5), iVar1 < iVar2)) {
          FUN_18028e1c0(param_2,param_4,param_5,iVar1);
          return 1;
        }
LAB_18028f7b3:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (*param_1 == -0x7fffffd7) {
        iVar1 = param_1[0xe];
        if ((-2 < iVar1) && (iVar2 = FUN_18028e610(param_4,param_5), iVar1 < iVar2)) {
          FUN_18028e1c0(*(undefined8 *)(param_1 + 10),param_4,param_5,iVar1);
          return 1;
        }
        goto LAB_18028f7b3;
      }
    }
    FUN_18026e210(param_2,param_4,param_5);
  }
  return 1;
}

