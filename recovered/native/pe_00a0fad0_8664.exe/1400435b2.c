/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400435b2 */

int * FUN_1400435b2(longlong param_1,int *param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1401c9640 ^ (ulonglong)auStack_58;
  param_2[0] = 0;
  param_2[1] = 0xffff;
  if (((uint)param_3 & ~*(uint *)(param_1 + 0x1c)) != 0) {
    if (*(ulonglong *)(param_1 + 0x38) < 8) {
      lVar3 = param_1 + 0x20;
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0x20);
    }
    iVar2 = FUN_1400dcbb0(lVar3,local_38,param_3,
                          -(uint)((*(uint *)(param_1 + 0x1c) & 2) == 0) | *(uint *)(param_1 + 0x10))
    ;
    param_2[2] = iVar2;
    FUN_140007276(param_2,iVar2,local_38);
    goto LAB_140043672;
  }
  param_2[2] = 0;
  uVar1 = *(uint *)(param_1 + 0x10);
  iVar2 = 0x16d;
  if ((uVar1 & 1) == 0) {
    iVar2 = 0x1ff;
  }
  param_2[1] = iVar2;
  if ((uVar1 >> 10 & 1) == 0) {
LAB_14004363f:
    iVar2 = 3 - (uint)((uVar1 & 0x10) == 0);
  }
  else if (*(int *)(param_1 + 0x14) == -0x5ffffff4) {
    iVar2 = 4;
  }
  else {
    if (*(int *)(param_1 + 0x14) != -0x5ffffffd) goto LAB_14004363f;
    iVar2 = 10;
  }
  *param_2 = iVar2;
LAB_140043672:
  if (DAT_1401c9640 == (local_18 ^ (ulonglong)auStack_58)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_18 ^ (ulonglong)auStack_58);
}

