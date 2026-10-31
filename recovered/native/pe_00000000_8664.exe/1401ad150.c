/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401ad150 */

undefined8
FUN_1401ad150(int *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,byte *param_5,
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
  lVar3 = FUN_1401aae30();
  if ((*(int *)(lVar3 + 0x40) == 0) && (iVar1 = *param_1, iVar1 != -0x1f928c9d)) {
    if (iVar1 == -0x7fffffd7) {
      if (param_1[6] == 0xf) {
        bVar7 = *(longlong *)(param_1 + 0x18) == 0x19930520;
        goto LAB_1401ad1ac;
      }
    }
    else {
      bVar7 = iVar1 == -0x7fffffda;
LAB_1401ad1ac:
      if (bVar7) goto LAB_1401ad1b7;
    }
    if ((*param_5 & 0x20) != 0) {
      return 1;
    }
  }
LAB_1401ad1b7:
  if ((param_1[1] & 0x66U) == 0) {
    FUN_1401ab4f0(local_68,param_5,*(undefined8 *)(param_4 + 8));
    if ((local_68[0] != 0) || ((*param_5 & 0x40) != 0)) {
      if ((*param_1 == -0x1f928c9d) &&
         ((((2 < (uint)param_1[6] && (0x19930522 < (uint)param_1[8])) &&
           (iVar1 = *(int *)(*(longlong *)(param_1 + 0xc) + 8), iVar1 != 0)) &&
          (lVar3 = FUN_14018ff30(), lVar3 + iVar1 != 0)))) {
        uVar4 = (*(code *)PTR__guard_dispatch_icall_140ee15d0)
                          (param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                           CONCAT44(uVar9,(uint)param_8));
        return uVar4;
      }
      FUN_1401ad960(param_1,param_2,param_3,param_4,param_5,param_8,CONCAT44(uVar8,param_6),param_7)
      ;
    }
  }
  else if (((*(int *)(param_5 + 8) != 0) &&
           (pbVar6 = (byte *)(*(longlong *)(param_4 + 8) + (longlong)*(int *)(param_5 + 8)),
           uVar5 = *pbVar6 & 0xf,
           *(uint *)(pbVar6 + (-4 - (longlong)(char)(&DAT_140eb2890)[uVar5])) >>
           ((&DAT_140eb28a0)[uVar5] & 0x1f) != 0)) && (param_6 == 0)) {
    if ((param_1[1] & 0x20U) != 0) {
      if (*param_1 == -0x7fffffda) {
        iVar1 = FUN_1401ab280(param_5,param_4,*(undefined8 *)(param_4 + 0x20));
        if ((-2 < iVar1) && (iVar2 = FUN_1401ac170(param_4,param_5), iVar1 < iVar2)) {
          FUN_1401abd20(param_2,param_4,param_5,iVar1);
          return 1;
        }
LAB_1401ad3a3:
                    /* WARNING: Subroutine does not return */
        FUN_1401a0758();
      }
      if (*param_1 == -0x7fffffd7) {
        iVar1 = param_1[0xe];
        if ((-2 < iVar1) && (iVar2 = FUN_1401ac170(param_4,param_5), iVar1 < iVar2)) {
          FUN_1401abd20(*(undefined8 *)(param_1 + 10),param_4,param_5,iVar1);
          return 1;
        }
        goto LAB_1401ad3a3;
      }
    }
    FUN_14018fb80(param_2,param_4,param_5);
  }
  return 1;
}

