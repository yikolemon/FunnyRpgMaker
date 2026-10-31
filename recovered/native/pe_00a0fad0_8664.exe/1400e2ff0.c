/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400e2ff0 */

void FUN_1400e2ff0(undefined8 param_1,undefined4 *param_2,longlong *param_3,longlong *param_4,
                  longlong param_5,uint *param_6,undefined8 *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  int local_68 [2];
  undefined1 *local_60;
  longlong local_58;
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = DAT_1401c9640 ^ (ulonglong)auStack_98;
  local_58 = *(longlong *)(*(longlong *)(param_5 + 0x40) + 8);
  (*(code *)PTR__guard_dispatch_icall_140178c20)();
  local_78 = &local_60;
  uVar3 = FUN_1400f7ad0(local_50,param_3,param_4,*(undefined4 *)(param_5 + 0x18));
  if ((local_58 != 0) && (lVar4 = (*(code *)PTR__guard_dispatch_icall_140178c20)(), lVar4 != 0)) {
    (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar4,1);
  }
  if ((char)uVar3 < '\0') {
    *param_6 = 2;
    *param_7 = 0;
  }
  else {
    uVar5 = FUN_140103760(local_50,&local_60,(int)(char)uVar3,local_68);
    *param_7 = uVar5;
    if (((local_60 == local_50) || (local_68[0] != 0)) || ((char)((ushort)uVar3 >> 8) != '\0')) {
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
    if (*param_4 != 0) goto LAB_1400e3120;
  }
  else if (*param_4 == 0) goto LAB_1400e3120;
  *param_6 = *param_6 | 1;
LAB_1400e3120:
  uVar1 = *(undefined4 *)((longlong)param_3 + 4);
  lVar4 = param_3[1];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
  *param_2 = (int)*param_3;
  param_2[1] = uVar1;
  param_2[2] = (int)lVar4;
  param_2[3] = uVar2;
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_30 ^ (ulonglong)auStack_98);
}

