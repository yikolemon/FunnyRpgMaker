/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14011fa00 */

undefined8
FUN_14011fa00(int *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,byte *param_5,
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
  lVar3 = FUN_14011d6e0();
  if ((*(int *)(lVar3 + 0x40) == 0) && (iVar1 = *param_1, iVar1 != -0x1f928c9d)) {
    if (iVar1 == -0x7fffffd7) {
      if (param_1[6] == 0xf) {
        bVar7 = *(longlong *)(param_1 + 0x18) == 0x19930520;
        goto LAB_14011fa5c;
      }
    }
    else {
      bVar7 = iVar1 == -0x7fffffda;
LAB_14011fa5c:
      if (bVar7) goto LAB_14011fa67;
    }
    if ((*param_5 & 0x20) != 0) {
      return 1;
    }
  }
LAB_14011fa67:
  if ((param_1[1] & 0x66U) == 0) {
    FUN_14011dda0(local_68,param_5,*(undefined8 *)(param_4 + 8));
    if ((local_68[0] != 0) || ((*param_5 & 0x40) != 0)) {
      if ((*param_1 == -0x1f928c9d) &&
         ((((2 < (uint)param_1[6] && (0x19930522 < (uint)param_1[8])) &&
           (iVar1 = *(int *)(*(longlong *)(param_1 + 0xc) + 8), iVar1 != 0)) &&
          (lVar3 = FUN_140107100(), lVar3 + iVar1 != 0)))) {
        uVar4 = (*(code *)PTR__guard_dispatch_icall_140178c20)
                          (param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                           CONCAT44(uVar9,(uint)param_8));
        return uVar4;
      }
      FUN_140120210(param_1,param_2,param_3,param_4,param_5,param_8,CONCAT44(uVar8,param_6),param_7)
      ;
    }
  }
  else if (((*(int *)(param_5 + 8) != 0) &&
           (pbVar6 = (byte *)(*(longlong *)(param_4 + 8) + (longlong)*(int *)(param_5 + 8)),
           uVar5 = *pbVar6 & 0xf,
           *(uint *)(pbVar6 + (-4 - (longlong)(char)(&DAT_1401661e0)[uVar5])) >>
           ((&DAT_1401661f0)[uVar5] & 0x1f) != 0)) && (param_6 == 0)) {
    if ((param_1[1] & 0x20U) != 0) {
      if (*param_1 == -0x7fffffda) {
        iVar1 = FUN_14011db30(param_5,param_4,*(undefined8 *)(param_4 + 0x20));
        if ((-2 < iVar1) && (iVar2 = FUN_14011ea20(param_4,param_5), iVar1 < iVar2)) {
          FUN_14011e5d0(param_2,param_4,param_5,iVar1);
          return 1;
        }
LAB_14011fc53:
                    /* WARNING: Subroutine does not return */
        FUN_140115938();
      }
      if (*param_1 == -0x7fffffd7) {
        iVar1 = param_1[0xe];
        if ((-2 < iVar1) && (iVar2 = FUN_14011ea20(param_4,param_5), iVar1 < iVar2)) {
          FUN_14011e5d0(*(undefined8 *)(param_1 + 10),param_4,param_5,iVar1);
          return 1;
        }
        goto LAB_14011fc53;
      }
    }
    FUN_140106d50(param_2,param_4,param_5);
  }
  return 1;
}

