/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180215201 */

undefined8 FUN_180215201(undefined8 param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_48;
  param_2 = param_2 + 1;
  do {
    param_2 = param_2 + -1;
    if (param_2 < 1) {
      goto LAB_180215257;
    }
    lVar2 = FUN_180214f52(param_1,0);
  } while (lVar2 != 0);
LAB_180215232:
  uVar3 = 0xa0;
LAB_180215237:
  if (DAT_180402640 != (local_18 ^ (ulonglong)auStack_48)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_18 ^ (ulonglong)auStack_48);
  }
  return uVar3;
  while( true ) {
    iVar1 = FUN_180214faa(lVar2,local_20);
    uVar3 = 0;
    if ((iVar1 == 0x14) || (iVar1 == 0x11)) break;
LAB_180215257:
    lVar2 = FUN_180214f52(param_1,&local_20);
    if (lVar2 == 0) goto LAB_180215232;
  }
  goto LAB_180215237;
}

