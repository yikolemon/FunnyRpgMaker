/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400ea740 */

void FUN_1400ea740(undefined8 param_1,undefined4 *param_2,longlong *param_3,longlong *param_4,
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
  
  local_48 = DAT_1401c9640 ^ (ulonglong)auStack_3a8;
  local_370 = *(longlong *)(*(longlong *)(param_5 + 0x40) + 8);
  (*(code *)PTR__guard_dispatch_icall_140178c20)();
  local_388 = &local_378;
  uVar6 = FUN_1400f58f0(local_368,0x300,param_3,param_4);
  if ((local_370 != 0) && (lVar7 = (*(code *)PTR__guard_dispatch_icall_140178c20)(), lVar7 != 0)) {
    (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar7,1);
  }
  if ((char)uVar6 == '\0') {
    *param_6 = 2;
    *param_7 = 0;
  }
  else {
    piVar8 = (int *)FUN_140113dd4();
    iVar1 = *piVar8;
    *piVar8 = 0;
    uVar3 = FUN_140118100(local_368,&local_378);
    iVar2 = *piVar8;
    *piVar8 = iVar1;
    *param_7 = uVar3;
    if (((local_378 == local_368) || (iVar2 != 0)) || ((char)((ushort)uVar6 >> 8) != '\0')) {
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
    if (*param_4 != 0) goto LAB_1400ea88b;
  }
  else if (*param_4 == 0) goto LAB_1400ea88b;
  *param_6 = *param_6 | 1;
LAB_1400ea88b:
  uVar4 = *(undefined4 *)((longlong)param_3 + 4);
  lVar7 = param_3[1];
  uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
  *param_2 = (int)*param_3;
  param_2[1] = uVar4;
  param_2[2] = (int)lVar7;
  param_2[3] = uVar5;
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_48 ^ (ulonglong)auStack_3a8);
}

