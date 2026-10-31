/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c0fc8 */

int __fastcall FUN_101c0fc8(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_1c;
  piVar1 = *(int **)(param_1[1] + 0x60);
  local_1c = piVar1[2];
  iVar4 = piVar1[3];
  *param_1 = piVar1[1];
  iVar2 = FUN_101bff17(local_1c,0x2c,&local_18);
  iVar3 = local_18;
  if (local_18 != 0) goto LAB_101c1068;
  param_1[0x27] = iVar2;
  if ((*(byte *)(*piVar1 + 1) & 2) == 0) {
    iVar3 = FUN_101bfec4(local_1c,iVar2);
    if (iVar3 == 0) goto LAB_101c1029;
  }
  else {
LAB_101c1029:
    if (*(code **)(iVar4 + 0x40) == (code *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (**(code **)(iVar4 + 0x40))(param_1);
    }
  }
  if ((*(byte *)(param_1[1] + 10) & 1) != 0) {
    iVar4 = FUN_101bff17(local_1c,0x44,&local_18);
    iVar3 = local_18;
    if (local_18 == 0) {
      param_1[0x26] = iVar4;
      iVar3 = 0;
    }
  }
LAB_101c1068:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_1c)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

