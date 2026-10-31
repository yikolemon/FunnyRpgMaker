/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180075212 */

fpos_t * FUN_180075212(longlong param_1,fpos_t *param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  fpos_t fVar3;
  char cVar4;
  int iVar5;
  undefined1 auStack_78 [40];
  fpos_t local_50;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_78;
  lVar1 = **(longlong **)(param_1 + 0x38);
  lVar2 = *(longlong *)(param_1 + 0x68);
  if (*(longlong *)(param_1 + 0x80) != 0) {
    cVar4 = FUN_18007576e();
    if (cVar4 != '\0') {
      param_3 = param_3 - (ulonglong)((param_4 == 1 && lVar2 == 0) && lVar1 == param_1 + 0x70);
      if ((param_4 != 1) || (param_3 != 0)) {
        iVar5 = FUN_18027e874(*(undefined8 *)(param_1 + 0x80),param_3,param_4);
        if (iVar5 != 0) goto LAB_1800752b2;
      }
      iVar5 = fgetpos(*(FILE **)(param_1 + 0x80),&local_50);
      if (iVar5 == 0) {
        if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
          iVar5 = *(int *)(param_1 + 0x90);
          lVar1 = *(longlong *)(param_1 + 0x88);
          **(longlong **)(param_1 + 0x18) = lVar1;
          **(longlong **)(param_1 + 0x38) = lVar1;
          **(int **)(param_1 + 0x50) = iVar5 - (int)lVar1;
        }
        fVar3 = *(fpos_t *)(param_1 + 0x74);
        *param_2 = local_50;
        param_2[1] = 0;
        param_2[2] = fVar3;
        goto LAB_1800752c0;
      }
    }
  }
LAB_1800752b2:
  *param_2 = -1;
  param_2[1] = 0;
  param_2[2] = 0;
LAB_1800752c0:
  if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_78)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_78);
}

