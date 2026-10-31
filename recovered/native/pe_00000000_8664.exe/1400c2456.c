/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c2456 */

void FUN_1400c2456(undefined8 *param_1,float *param_2,float *param_3,float *param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  float fVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  lVar2 = DAT_140f2a910;
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  if (*(int *)(DAT_140f2a910 + 0x27e4) != *(int *)(DAT_140f2a910 + 0x27e0)) goto LAB_1400c24f3;
  iVar1 = *(int *)(DAT_140f2a910 + 0x27f0);
  local_38 = *(undefined4 *)(param_1 + 1);
  local_40 = *param_1;
  local_34 = 0;
  iVar3 = FUN_140078692();
  if (iVar1 != iVar3) goto LAB_1400c24f3;
  if ((*param_3 != 0.0) || (NAN(*param_3))) {
    if ((*param_2 == 0.0) && (!NAN(*param_2))) {
      if ((*(float *)(lVar2 + 0x27e8) == DAT_1401c86c8) &&
         (fVar4 = DAT_1401c86c8, !NAN(*(float *)(lVar2 + 0x27e8)) && !NAN(DAT_1401c86c8)))
      goto LAB_1400c24d4;
    }
  }
  else {
    fVar4 = *(float *)(lVar2 + 0x27e8);
LAB_1400c24d4:
    *param_2 = fVar4;
  }
  if ((*param_4 == 0.0) && (!NAN(*param_4))) {
    *param_3 = *(float *)(lVar2 + 0x27ec);
  }
LAB_1400c24f3:
  if (DAT_140f17b40 != (local_30 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_30 ^ (ulonglong)auStack_68);
  }
  return;
}

