/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400e3150 */

void FUN_1400e3150(undefined8 param_1,undefined4 *param_2,longlong *param_3,longlong *param_4,
                  longlong param_5,uint *param_6,undefined4 *param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  longlong lVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined1 auStack_3a8 [32];
  undefined1 **local_388;
  undefined1 *local_378;
  longlong local_370;
  undefined1 local_368 [800];
  ulonglong local_48;
  
  local_48 = DAT_1401c9640 ^ (ulonglong)auStack_3a8;
  local_370 = *(longlong *)(*(longlong *)(param_5 + 0x40) + 8);
  (*(code *)PTR__guard_dispatch_icall_140178c20)();
  local_388 = &local_378;
  uVar4 = FUN_1400f8920(local_368,0x300,param_3,param_4);
  if ((local_370 != 0) && (lVar5 = (*(code *)PTR__guard_dispatch_icall_140178c20)(), lVar5 != 0)) {
    (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar5,1);
  }
  if ((char)uVar4 == '\0') {
    *param_6 = 2;
    *param_7 = 0;
  }
  else {
    piVar6 = (int *)FUN_140113dd4();
    iVar1 = *piVar6;
    *piVar6 = 0;
    uVar7 = FUN_1401180f8(local_368,&local_378);
    iVar2 = *piVar6;
    *piVar6 = iVar1;
    *param_7 = uVar7;
    if (((local_378 == local_368) || (iVar2 != 0)) || ((char)((ushort)uVar4 >> 8) != '\0')) {
      *param_6 = 2;
    }
  }
  if ((char)param_3[1] == '\0') {
    FUN_1400e3870(param_3);
  }
  if ((char)param_4[1] == '\0') {
    FUN_1400e3870(param_4);
  }
  if (*param_3 == 0) {
    if (*param_4 != 0) goto LAB_1400e329b;
  }
  else if (*param_4 == 0) goto LAB_1400e329b;
  *param_6 = *param_6 | 1;
LAB_1400e329b:
  uVar7 = *(undefined4 *)((longlong)param_3 + 4);
  lVar5 = param_3[1];
  uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
  *param_2 = (int)*param_3;
  param_2[1] = uVar7;
  param_2[2] = (int)lVar5;
  param_2[3] = uVar3;
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_48 ^ (ulonglong)auStack_3a8);
}

