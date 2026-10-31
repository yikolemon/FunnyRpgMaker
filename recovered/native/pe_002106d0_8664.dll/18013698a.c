/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18013698a */

undefined8 thunk_FUN_18013698f(undefined8 param_1,uint *param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [47];
  char cStack_19;
  ulonglong uStack_18;
  
  uStack_18 = DAT_180402640 ^ (ulonglong)auStack_48;
  cStack_19 = (param_3 & *param_2) == param_3;
  uVar2 = *param_2 & param_3;
  if ((uVar2 != 0) && (uVar2 != param_3)) {
    *(uint *)(DAT_180419160 + 0x1fac) = *(uint *)(DAT_180419160 + 0x1fac) | 0x1000;
  }
  cVar1 = FUN_180135c3a(param_1,&cStack_19);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    if (cStack_19 == '\x01') {
      param_3 = param_3 | *param_2;
    }
    else {
      param_3 = ~param_3 & *param_2;
    }
    *param_2 = param_3;
    uVar3 = 1;
  }
  if (DAT_180402640 == (uStack_18 ^ (ulonglong)auStack_48)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(uStack_18 ^ (ulonglong)auStack_48);
}

