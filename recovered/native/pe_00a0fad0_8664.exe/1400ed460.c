/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400ed460 */

void FUN_1400ed460(undefined8 param_1,undefined4 *param_2,longlong *param_3,longlong *param_4,
                  undefined1 param_5,undefined8 param_6,uint *param_7,undefined8 *param_8)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  int *piVar7;
  undefined8 ***pppuVar8;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  undefined8 **local_88;
  undefined8 **local_80 [2];
  longlong local_70;
  ulonglong local_68;
  undefined1 local_60 [24];
  ulonglong local_48;
  
  local_48 = DAT_1401c9640 ^ (ulonglong)auStack_c8;
  local_98 = local_60;
  local_a0 = param_6;
  local_a8 = param_5;
  FUN_1400ed710(param_1,local_80);
  if ((char)param_3[1] == '\0') {
    FUN_1400e3870(param_3);
  }
  if ((char)param_4[1] == '\0') {
    FUN_1400e3870(param_4);
  }
  if (*param_3 == 0) {
    if (*param_4 == 0) {
LAB_1400ed4fd:
      *param_7 = *param_7 | 1;
    }
  }
  else if (*param_4 != 0) goto LAB_1400ed4fd;
  if (local_70 != 0) {
    pppuVar8 = local_80;
    if (0xf < local_68) {
      pppuVar8 = (undefined8 ***)local_80[0];
    }
    piVar7 = (int *)FUN_140113dd4();
    iVar1 = *piVar7;
    *piVar7 = 0;
    uVar3 = FUN_140118100(pppuVar8,&local_88);
    iVar2 = *piVar7;
    *piVar7 = iVar1;
    if (((undefined8 ***)local_88 != pppuVar8) && (iVar2 == 0)) {
      *param_8 = uVar3;
      goto LAB_1400ed552;
    }
  }
  *param_7 = *param_7 | 2;
LAB_1400ed552:
  uVar4 = *(undefined4 *)((longlong)param_3 + 4);
  lVar6 = param_3[1];
  uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
  *param_2 = (int)*param_3;
  param_2[1] = uVar4;
  param_2[2] = (int)lVar6;
  param_2[3] = uVar5;
  FUN_1400017de(local_80);
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_48 ^ (ulonglong)auStack_c8);
}

