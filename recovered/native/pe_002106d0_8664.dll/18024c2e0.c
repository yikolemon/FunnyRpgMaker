/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18024c2e0 */

void FUN_18024c2e0(undefined8 param_1,undefined4 *param_2,longlong *param_3,longlong *param_4,
                  longlong param_5,uint *param_6,short *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  uint uVar4;
  longlong lVar5;
  char *pcVar6;
  undefined1 auStack_b8 [32];
  undefined1 **local_98;
  int local_88 [2];
  undefined4 *local_80;
  char *local_78;
  longlong local_70;
  char local_68;
  char local_67 [31];
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_b8;
  local_70 = *(longlong *)(*(longlong *)(param_5 + 0x40) + 8);
  local_80 = param_2;
  (*(code *)PTR__guard_dispatch_icall_18038bc80)();
  local_98 = &local_78;
  uVar3 = FUN_180261570(&local_68,param_3,param_4,*(undefined4 *)(param_5 + 0x18));
  if ((local_70 != 0) && (lVar5 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(), lVar5 != 0)) {
    (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar5,1);
  }
  if ((char)uVar3 < '\0') {
    *param_6 = 2;
    *param_7 = 0;
  }
  else {
    pcVar6 = &local_68;
    if (local_68 == '-') {
      pcVar6 = local_67;
    }
    uVar4 = FUN_18026ca30(pcVar6,&local_78,(int)(char)uVar3,local_88);
    *param_7 = (short)uVar4;
    if (((local_78 == pcVar6) || (local_88[0] != 0)) || (0xffff < uVar4)) {
      *param_6 = 2;
      *param_7 = -1;
    }
    else if (local_68 == '-') {
      *param_7 = -(short)uVar4;
    }
    param_2 = local_80;
    if ((char)((ushort)uVar3 >> 8) != '\0') {
      *param_6 = 2;
    }
  }
  if ((char)param_3[1] == '\0') {
    FUN_18024d310(param_3);
  }
  if ((char)param_4[1] == '\0') {
    FUN_18024d310(param_4);
  }
  if (*param_3 == 0) {
    if (*param_4 != 0) goto LAB_18024c45b;
  }
  else if (*param_4 == 0) goto LAB_18024c45b;
  *param_6 = *param_6 | 1;
LAB_18024c45b:
  uVar1 = *(undefined4 *)((longlong)param_3 + 4);
  lVar5 = param_3[1];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
  *param_2 = (int)*param_3;
  param_2[1] = uVar1;
  param_2[2] = (int)lVar5;
  param_2[3] = uVar2;
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_b8);
}

