/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180266480 */

void FUN_180266480(undefined8 param_1,undefined4 *param_2,longlong *param_3,longlong *param_4,
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
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined8 local_90;
  undefined1 *local_88;
  undefined8 **local_78;
  undefined8 **local_70 [2];
  longlong local_60;
  ulonglong local_58;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_180402640 ^ (ulonglong)auStack_b8;
  local_88 = local_50;
  local_90 = param_6;
  local_98 = param_5;
  FUN_180266730(param_1,local_70);
  if ((char)param_3[1] == '\0') {
    FUN_1800e5e14(param_3);
  }
  if ((char)param_4[1] == '\0') {
    FUN_1800e5e14(param_4);
  }
  if (*param_3 == 0) {
    if (*param_4 == 0) {
LAB_18026651a:
      *param_7 = *param_7 | 1;
    }
  }
  else if (*param_4 != 0) goto LAB_18026651a;
  if (local_60 != 0) {
    pppuVar8 = local_70;
    if (0xf < local_58) {
      pppuVar8 = (undefined8 ***)local_70[0];
    }
    piVar7 = (int *)FUN_18027e66c();
    iVar1 = *piVar7;
    *piVar7 = 0;
    uVar3 = FUN_18028b168(pppuVar8,&local_78);
    iVar2 = *piVar7;
    *piVar7 = iVar1;
    if (((undefined8 ***)local_78 != pppuVar8) && (iVar2 == 0)) {
      *param_8 = uVar3;
      goto LAB_18026656f;
    }
  }
  *param_7 = *param_7 | 2;
LAB_18026656f:
  uVar4 = *(undefined4 *)((longlong)param_3 + 4);
  lVar6 = param_3[1];
  uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
  *param_2 = (int)*param_3;
  param_2[1] = uVar4;
  param_2[2] = (int)lVar6;
  param_2[3] = uVar5;
  FUN_180004c8c(local_70);
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_40 ^ (ulonglong)auStack_b8);
}

