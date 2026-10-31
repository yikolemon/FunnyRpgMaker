/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14005e675 */

longlong FUN_14005e675(longlong *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  undefined4 local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1401c9640 ^ (ulonglong)auStack_88;
  iVar1 = *param_2;
  lVar4 = *param_1 + param_1[1] * 2;
  FUN_14005e8c8(&local_60,*param_1,lVar4);
  local_40 = 0;
  if (local_60 == local_58) {
    iVar5 = 0;
  }
  else {
    iVar3 = 0;
    while( true ) {
      if ((-1 < iVar1) && (iVar5 = iVar1, iVar3 == iVar1)) goto LAB_14005e71c;
      uVar2 = FUN_14004b8d1(local_48);
      iVar5 = iVar3;
      if ((int)(uVar2 ^ 0x7fffffff) < iVar3) break;
      iVar3 = uVar2 + iVar3;
      if (((-1 < iVar1) && (iVar1 < iVar3)) ||
         (FUN_14005e940(&local_60), iVar5 = iVar3, local_60 == local_58)) goto LAB_14005e71c;
    }
    if (iVar1 < 0) {
      *param_2 = 0x7fffffff;
      goto LAB_14005e724;
    }
  }
LAB_14005e71c:
  *param_2 = iVar5;
  lVar4 = local_60;
LAB_14005e724:
  if (DAT_1401c9640 != (local_38 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_1400d3720(local_38 ^ (ulonglong)auStack_88);
  }
  return lVar4;
}

