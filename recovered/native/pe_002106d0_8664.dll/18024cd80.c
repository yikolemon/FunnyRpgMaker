/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18024cd80 */

void FUN_18024cd80(undefined8 param_1,undefined4 *param_2,longlong *param_3,longlong *param_4,
                  longlong param_5,uint *param_6,undefined8 *param_7)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  longlong lVar7;
  int *piVar8;
  undefined1 auStack_3a8 [32];
  undefined1 **local_388;
  undefined1 *local_378;
  longlong local_370;
  undefined1 local_368 [800];
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_3a8;
  local_370 = *(longlong *)(*(longlong *)(param_5 + 0x40) + 8);
  (*(code *)PTR__guard_dispatch_icall_18038bc80)();
  local_388 = &local_378;
  uVar6 = FUN_1802623c0(local_368,0x300,param_3,param_4);
  if ((local_370 != 0) && (lVar7 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(), lVar7 != 0)) {
    (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar7,1);
  }
  if ((char)uVar6 == '\0') {
    *param_6 = 2;
    *param_7 = 0;
  }
  else {
    piVar8 = (int *)FUN_18027e66c();
    iVar1 = *piVar8;
    *piVar8 = 0;
    uVar3 = FUN_18028b168(local_368,&local_378);
    iVar2 = *piVar8;
    *piVar8 = iVar1;
    *param_7 = uVar3;
    if (((local_378 == local_368) || (iVar2 != 0)) || ((char)((ushort)uVar6 >> 8) != '\0')) {
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
    if (*param_4 != 0) goto LAB_18024cecb;
  }
  else if (*param_4 == 0) goto LAB_18024cecb;
  *param_6 = *param_6 | 1;
LAB_18024cecb:
  uVar4 = *(undefined4 *)((longlong)param_3 + 4);
  lVar7 = param_3[1];
  uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
  *param_2 = (int)*param_3;
  param_2[1] = uVar4;
  param_2[2] = (int)lVar7;
  param_2[3] = uVar5;
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_3a8);
}

