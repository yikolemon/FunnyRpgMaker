/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006d403 */

ulonglong FUN_14006d403(uint *param_1,int param_2,int param_3,longlong param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  int *piVar5;
  int iVar6;
  undefined1 auStack_78 [32];
  int *local_58;
  uint *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_78;
  iVar3 = param_2 + -0x15;
  if (param_3 != -0x15) {
    iVar3 = param_2;
  }
  uVar2 = 0;
  iVar6 = 0;
  if (0 < param_3) {
    iVar6 = param_3;
  }
  uVar1 = *param_1;
  if (uVar1 != 0) {
    piVar5 = (int *)(*(longlong *)(param_1 + 2) + 4);
    do {
      if ((piVar5[-1] == iVar3) && (*piVar5 == iVar6)) goto LAB_14006d4a7;
      uVar2 = uVar2 + 1;
      piVar5 = piVar5 + 3;
    } while (uVar1 != uVar2);
  }
  uVar4 = FUN_14006d516(param_1,param_4,(longlong *)&local_58);
  if ((int)uVar4 == 0) {
    *local_58 = iVar3;
    local_58[1] = iVar6;
    local_58[2] = param_3 >> 0x1f & (uint)(param_3 == -0x15) * 2 + 1;
    uVar2 = uVar1;
LAB_14006d4a7:
    iVar3 = FUN_14006d562(param_1 + 4,param_4,(longlong *)&local_50);
    uVar4 = CONCAT44(extraout_var,iVar3);
    if (iVar3 == 0) {
      iVar3 = FUN_14006d5d1(local_50,uVar2,param_4);
      uVar4 = CONCAT44(extraout_var_00,iVar3);
      if ((iVar3 == 0) && (uVar4 = 0, param_5 != (uint *)0x0)) {
        *param_5 = uVar2;
      }
    }
  }
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStack_78);
  }
  return uVar4;
}

