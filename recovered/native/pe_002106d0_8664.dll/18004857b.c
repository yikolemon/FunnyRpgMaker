/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18004857b */

longlong FUN_18004857b(longlong *param_1,int *param_2)

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
  
  local_38 = DAT_180402640 ^ (ulonglong)auStack_88;
  iVar1 = *param_2;
  lVar4 = *param_1 + param_1[1] * 2;
  FUN_1800487ce(&local_60,*param_1,lVar4);
  local_40 = 0;
  if (local_60 == local_58) {
    iVar5 = 0;
  }
  else {
    iVar3 = 0;
    while( true ) {
      if ((-1 < iVar1) && (iVar5 = iVar1, iVar3 == iVar1)) goto LAB_180048622;
      uVar2 = FUN_18000c78b(local_48);
      iVar5 = iVar3;
      if ((int)(uVar2 ^ 0x7fffffff) < iVar3) break;
      iVar3 = uVar2 + iVar3;
      if (((-1 < iVar1) && (iVar1 < iVar3)) ||
         (FUN_180048846(&local_60), iVar5 = iVar3, local_60 == local_58)) goto LAB_180048622;
    }
    if (iVar1 < 0) {
      *param_2 = 0x7fffffff;
      goto LAB_18004862a;
    }
  }
LAB_180048622:
  *param_2 = iVar5;
  lVar4 = local_60;
LAB_18004862a:
  if (DAT_180402640 != (local_38 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_38 ^ (ulonglong)auStack_88);
  }
  return lVar4;
}

