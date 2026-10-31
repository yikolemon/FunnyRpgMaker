/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400e9ca0 */

void FUN_1400e9ca0(undefined8 param_1,undefined4 *param_2,longlong *param_3,longlong *param_4,
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
  
  local_48 = DAT_1401c9640 ^ (ulonglong)auStack_b8;
  local_70 = *(longlong *)(*(longlong *)(param_5 + 0x40) + 8);
  local_80 = param_2;
  (*(code *)PTR__guard_dispatch_icall_140178c20)();
  local_98 = &local_78;
  uVar3 = FUN_1400f4aa0(&local_68,param_3,param_4,*(undefined4 *)(param_5 + 0x18));
  if ((local_70 != 0) && (lVar5 = (*(code *)PTR__guard_dispatch_icall_140178c20)(), lVar5 != 0)) {
    (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar5,1);
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
    uVar4 = FUN_140103460(pcVar6,&local_78,(int)(char)uVar3,local_88);
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
    FUN_1400e3870(param_3);
  }
  if ((char)param_4[1] == '\0') {
    FUN_1400e3870(param_4);
  }
  if (*param_3 == 0) {
    if (*param_4 != 0) goto LAB_1400e9e1b;
  }
  else if (*param_4 == 0) goto LAB_1400e9e1b;
  *param_6 = *param_6 | 1;
LAB_1400e9e1b:
  uVar1 = *(undefined4 *)((longlong)param_3 + 4);
  lVar5 = param_3[1];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
  *param_2 = (int)*param_3;
  param_2[1] = uVar1;
  param_2[2] = (int)lVar5;
  param_2[3] = uVar2;
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_48 ^ (ulonglong)auStack_b8);
}

