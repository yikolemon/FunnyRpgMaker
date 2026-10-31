/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180149526 */

void FUN_180149526(undefined8 *param_1,float *param_2,float *param_3,float *param_4)

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
  
  lVar2 = DAT_180419160;
  local_30 = DAT_180402640 ^ (ulonglong)auStack_68;
  if (*(int *)(DAT_180419160 + 0x27e4) != *(int *)(DAT_180419160 + 0x27e0)) goto LAB_1801495c3;
  iVar1 = *(int *)(DAT_180419160 + 0x27f0);
  local_38 = *(undefined4 *)(param_1 + 1);
  local_40 = *param_1;
  local_34 = 0;
  iVar3 = FUN_1800ff3d6();
  if (iVar1 != iVar3) goto LAB_1801495c3;
  if ((*param_3 != 0.0) || (NAN(*param_3))) {
    if ((*param_2 == 0.0) && (!NAN(*param_2))) {
      if ((*(float *)(lVar2 + 0x27e8) == DAT_1802ac570) &&
         (fVar4 = DAT_1802ac570, !NAN(*(float *)(lVar2 + 0x27e8)) && !NAN(DAT_1802ac570)))
      goto LAB_1801495a4;
    }
  }
  else {
    fVar4 = *(float *)(lVar2 + 0x27e8);
LAB_1801495a4:
    *param_2 = fVar4;
  }
  if ((*param_4 == 0.0) && (!NAN(*param_4))) {
    *param_3 = *(float *)(lVar2 + 0x27ec);
  }
LAB_1801495c3:
  if (DAT_180402640 != (local_30 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_30 ^ (ulonglong)auStack_68);
  }
  return;
}

