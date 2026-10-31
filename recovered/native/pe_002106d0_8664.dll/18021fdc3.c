/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021fdc3 */

undefined8 FUN_18021fdc3(int *param_1,int param_2,int param_3,undefined8 param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  int iVar6;
  undefined1 auStack_78 [32];
  int *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_78;
  iVar2 = param_2 + -0x15;
  if (param_3 != -0x15) {
    iVar2 = param_2;
  }
  iVar3 = 0;
  iVar6 = 0;
  if (0 < param_3) {
    iVar6 = param_3;
  }
  iVar1 = *param_1;
  if (iVar1 != 0) {
    piVar5 = (int *)(*(longlong *)(param_1 + 2) + 4);
    do {
      if ((piVar5[-1] == iVar2) && (*piVar5 == iVar6)) goto LAB_18021fe67;
      iVar3 = iVar3 + 1;
      piVar5 = piVar5 + 3;
    } while (iVar1 != iVar3);
  }
  uVar4 = FUN_18021fed6(param_1,param_4,&local_58);
  if ((int)uVar4 == 0) {
    *local_58 = iVar2;
    local_58[1] = iVar6;
    local_58[2] = param_3 >> 0x1f & (uint)(param_3 == -0x15) * 2 + 1;
    iVar3 = iVar1;
LAB_18021fe67:
    uVar4 = FUN_18021ff22(param_1 + 4,param_4,&local_50);
    if ((((int)uVar4 == 0) && (uVar4 = FUN_18021ff91(local_50,iVar3,param_4), (int)uVar4 == 0)) &&
       (uVar4 = 0, param_5 != (int *)0x0)) {
      *param_5 = iVar3;
    }
  }
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_78);
  }
  return uVar4;
}

