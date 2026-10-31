/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10144ac4 */

void __fastcall FUN_10144ac4(undefined8 *param_1,float *param_2,float *param_3,float *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  
  iVar2 = DAT_1039d74c;
  local_10 = DAT_10388d00 ^ (uint)&local_20;
  if (*(int *)(DAT_1039d74c + 0x2568) != *(int *)(DAT_1039d74c + 0x2564)) goto LAB_10144b55;
  iVar1 = *(int *)(DAT_1039d74c + 0x2574);
  local_18 = *(undefined4 *)(param_1 + 1);
  local_20 = *param_1;
  local_14 = 0;
  iVar3 = FUN_100fad3d(&local_20);
  if (iVar1 != iVar3) goto LAB_10144b55;
  if ((*param_3 != 0.0) || (NAN(*param_3))) {
    if ((*param_2 == 0.0) && (!NAN(*param_2))) {
      if ((*(float *)(iVar2 + 0x256c) == DAT_1028b430) &&
         (fVar4 = DAT_1028b430, !NAN(*(float *)(iVar2 + 0x256c)) && !NAN(DAT_1028b430)))
      goto LAB_10144b37;
    }
  }
  else {
    fVar4 = *(float *)(iVar2 + 0x256c);
LAB_10144b37:
    *param_2 = fVar4;
  }
  if ((*param_4 == 0.0) && (!NAN(*param_4))) {
    *param_3 = *(float *)(iVar2 + 0x2570);
  }
LAB_10144b55:
  if (DAT_10388d00 != (local_10 ^ (uint)&local_20)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

