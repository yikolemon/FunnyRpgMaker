/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801283ed */

void FUN_1801283ed(longlong *param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_180402640 ^ (ulonglong)auStack_78;
  if (0 < (int)param_2) {
    uVar2 = (ulonglong)param_2;
    do {
      lVar1 = *param_1;
      if (*(longlong *)(lVar1 + 0x410) == param_3) {
        FUN_1800fead5(local_58,0x14,"[%04d] Window",(int)*(short *)(lVar1 + 0x11e));
        FUN_18012a280(lVar1,local_58);
        FUN_18014d768(local_58);
        FUN_1801283ed(param_1 + 1,(int)uVar2 + -1,lVar1);
        FUN_18014d7a9();
      }
      uVar2 = uVar2 - 1;
      param_1 = param_1 + 1;
    } while (uVar2 != 0);
  }
  if (DAT_180402640 == (local_38 ^ (ulonglong)auStack_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_38 ^ (ulonglong)auStack_78);
}

