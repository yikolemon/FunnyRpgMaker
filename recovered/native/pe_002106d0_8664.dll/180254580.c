/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180254580 */

void FUN_180254580(undefined8 param_1,undefined4 *param_2,longlong *param_3,longlong *param_4,
                  longlong param_5,uint *param_6,undefined8 *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [32];
  undefined1 **local_88;
  int local_78 [2];
  undefined1 *local_70;
  longlong local_68;
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_180402640 ^ (ulonglong)auStack_a8;
  local_68 = *(longlong *)(*(longlong *)(param_5 + 0x40) + 8);
  (*(code *)PTR__guard_dispatch_icall_18038bc80)();
  local_88 = &local_70;
  uVar3 = FUN_18025e540(local_60,param_3,param_4,0x800);
  if ((local_68 != 0) && (lVar4 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(), lVar4 != 0)) {
    (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar4,1);
  }
  if ((char)uVar3 < '\0') {
    *param_6 = 2;
    *param_7 = 0;
  }
  else {
    uVar5 = FUN_18026cd30(local_60,&local_70,(int)(char)uVar3,local_78);
    *param_7 = uVar5;
    if ((local_70 == local_60) || (local_78[0] != 0)) {
      *param_6 = 2;
      *param_7 = 0;
    }
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
    if (*param_4 != 0) goto LAB_1802546c2;
  }
  else if (*param_4 == 0) goto LAB_1802546c2;
  *param_6 = *param_6 | 1;
LAB_1802546c2:
  uVar1 = *(undefined4 *)((longlong)param_3 + 4);
  lVar4 = param_3[1];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
  *param_2 = (int)*param_3;
  param_2[1] = uVar1;
  param_2[2] = (int)lVar4;
  param_2[3] = uVar2;
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_40 ^ (ulonglong)auStack_a8);
}

