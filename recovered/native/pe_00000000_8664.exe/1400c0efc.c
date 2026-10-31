/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c0efc */

undefined4 *
FUN_1400c0efc(undefined4 *param_1,longlong param_2,longlong param_3,int *param_4,longlong param_5,
             undefined8 param_6,int param_7)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  longlong local_58;
  undefined4 local_50 [2];
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_98;
  piVar3 = *(int **)(param_4 + 2);
  iVar2 = *param_4;
  local_58 = param_3;
  piVar4 = (int *)FUN_1400cf9b9(piVar3,piVar3 + iVar2,param_7);
  if (piVar3 < piVar4) {
    if ((piVar4 != piVar3 + iVar2) && (*piVar4 == param_7)) {
      if ((*(float *)(local_58 + 0x68) <= 0.0) ||
         (((*(char *)(local_58 + 0x76) != '\x01' ||
           (cVar1 = *(char *)(param_7 + param_5 + -1), cVar1 == '\0')) || (cVar1 == '\n'))))
      goto LAB_1400c0f8e;
    }
    piVar4 = piVar4 + -1;
  }
LAB_1400c0f8e:
  lVar5 = 0;
  iVar6 = (int)((ulonglong)((longlong)piVar4 - (longlong)piVar3) >> 2);
  if (piVar4 == piVar3) {
    iVar6 = 0;
  }
  if (iVar2 != 0) {
    lVar5 = (longlong)piVar3[iVar6];
  }
  local_78 = param_6;
  local_68 = 2;
  local_70 = 0;
  FUN_1400cf392(local_50,param_2,param_5 + lVar5,param_7 + param_5);
  *param_1 = local_50[0];
  param_1[1] = (float)(iVar6 + 1) * *(float *)(param_2 + 0x1320);
  if (DAT_140f17b40 == (local_48 ^ (ulonglong)auStack_98)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_48 ^ (ulonglong)auStack_98);
}

