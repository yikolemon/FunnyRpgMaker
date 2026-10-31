/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400af8ba */

undefined8 thunk_FUN_1400af8bf(undefined8 param_1,uint *param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [47];
  char cStack_19;
  ulonglong uStack_18;
  
  uStack_18 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  cStack_19 = (param_3 & *param_2) == param_3;
  uVar2 = *param_2 & param_3;
  if ((uVar2 != 0) && (uVar2 != param_3)) {
    *(uint *)(DAT_140f2a910 + 0x1fac) = *(uint *)(DAT_140f2a910 + 0x1fac) | 0x1000;
  }
  cVar1 = FUN_1400aeb6a(param_1,&cStack_19);
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
  if (DAT_140f17b40 == (uStack_18 ^ (ulonglong)auStack_48)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(uStack_18 ^ (ulonglong)auStack_48);
}

