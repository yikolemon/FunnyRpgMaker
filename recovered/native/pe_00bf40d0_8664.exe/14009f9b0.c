/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14009f9b0 */

undefined8
FUN_14009f9b0(int *param_1,longlong *param_2,ULONG_PTR param_3,ulonglong *param_4,byte *param_5,
             int param_6,undefined8 param_7,byte param_8)

{
  int iVar1;
  PVOID pvVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  byte *pbVar6;
  bool bVar7;
  undefined8 in_stack_ffffffffffffff80;
  undefined4 uVar8;
  uint local_68 [14];
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff80 >> 0x20);
  __except_validate_context_record(param_3);
  pvVar2 = FUN_14009d690();
  if ((*(int *)((longlong)pvVar2 + 0x40) == 0) && (iVar1 = *param_1, iVar1 != -0x1f928c9d)) {
    if (iVar1 == -0x7fffffd7) {
      if (param_1[6] == 0xf) {
        bVar7 = *(longlong *)(param_1 + 0x18) == 0x19930520;
        goto LAB_14009fa0c;
      }
    }
    else {
      bVar7 = iVar1 == -0x7fffffda;
LAB_14009fa0c:
      if (bVar7) goto LAB_14009fa17;
    }
    if ((*param_5 & 0x20) != 0) {
      return 1;
    }
  }
LAB_14009fa17:
  if ((param_1[1] & 0x66U) == 0) {
    FUN_14009dd50(local_68,(longlong)param_5,param_4[1]);
    if ((local_68[0] != 0) || ((*param_5 & 0x40) != 0)) {
      if ((*param_1 == -0x1f928c9d) &&
         ((((2 < (uint)param_1[6] && (0x19930522 < (uint)param_1[8])) &&
           (iVar1 = *(int *)(*(longlong *)(param_1 + 0xc) + 8), iVar1 != 0)) &&
          (lVar3 = FUN_14008d690(), lVar3 + iVar1 != 0)))) {
        uVar4 = (*(code *)PTR__guard_dispatch_icall_1401200f0)
                          (param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                           CONCAT44(uVar8,(uint)param_8));
        return uVar4;
      }
      FUN_1400a01c0(param_1,param_2,param_3,param_4,param_5,param_8);
    }
  }
  else if (((*(int *)(param_5 + 8) != 0) &&
           (pbVar6 = (byte *)(param_4[1] + (longlong)*(int *)(param_5 + 8)), uVar5 = *pbVar6 & 0xf,
           *(uint *)(pbVar6 + (-4 - (longlong)(char)(&DAT_14010b650)[uVar5])) >>
           ((&DAT_14010b660)[uVar5] & 0x1f) != 0)) && (param_6 == 0)) {
    if ((param_1[1] & 0x20U) != 0) {
      if (*param_1 == -0x7fffffda) {
        iVar1 = FUN_14009dae0((longlong)param_5,(longlong)param_4,param_4[4]);
        if ((-2 < iVar1) &&
           (uVar5 = FUN_14009e9d0((longlong)param_4,(longlong)param_5), iVar1 < (int)uVar5)) {
          FUN_14009e580(param_2,param_4,(longlong)param_5,iVar1);
          return 1;
        }
LAB_14009fc03:
                    /* WARNING: Subroutine does not return */
        FUN_140096cf8();
      }
      if (*param_1 == -0x7fffffd7) {
        iVar1 = param_1[0xe];
        if ((-2 < iVar1) &&
           (uVar5 = FUN_14009e9d0((longlong)param_4,(longlong)param_5), iVar1 < (int)uVar5)) {
          FUN_14009e580(*(longlong **)(param_1 + 10),param_4,(longlong)param_5,iVar1);
          return 1;
        }
        goto LAB_14009fc03;
      }
    }
    FUN_14008d2e0(param_2,param_4,param_5);
  }
  return 1;
}

