/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a131d */

void FUN_1400a131d(longlong *param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  if (0 < (int)param_2) {
    uVar2 = (ulonglong)param_2;
    do {
      lVar1 = *param_1;
      if (*(longlong *)(lVar1 + 0x410) == param_3) {
        FUN_140077d91(local_58,0x14,"[%04d] Window",(int)*(short *)(lVar1 + 0x11e));
        FUN_1400a31b0(lVar1,local_58);
        FUN_1400c6698(local_58);
        FUN_1400a131d(param_1 + 1,(int)uVar2 + -1,lVar1);
        FUN_1400c66d9();
      }
      uVar2 = uVar2 - 1;
      param_1 = param_1 + 1;
    } while (uVar2 != 0);
  }
  if (DAT_140f17b40 == (local_38 ^ (ulonglong)auStack_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_38 ^ (ulonglong)auStack_78);
}

