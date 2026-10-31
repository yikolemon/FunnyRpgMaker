/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140079eb6 */

ulonglong thunk_FUN_140079ebb(undefined8 param_1,undefined8 param_2,longlong param_3,
                             longlong param_4,ulonglong param_5)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStack_a8 [32];
  longlong *plStack_88;
  undefined1 *puStack_80;
  undefined8 ***pppuStack_78;
  undefined8 ***pppuStack_70;
  longlong lStack_68;
  undefined1 auStack_5a [2];
  undefined8 ***pppuStack_58;
  longlong lStack_50;
  ulonglong uStack_48;
  
  uStack_48 = DAT_1401c9640 ^ (ulonglong)auStack_a8;
  lStack_68 = param_3;
  if (param_3 != param_4 && param_5 != 0) {
    while( true ) {
      pppuStack_70 = &pppuStack_58;
      plStack_88 = &lStack_50;
      puStack_80 = auStack_5a;
      pppuStack_78 = &pppuStack_58;
      iVar1 = FUN_140079cb4(param_1,param_2,param_3,param_4);
      if (iVar1 != 0) break;
      param_5 = param_5 - ((undefined8 ****)pppuStack_58 == &pppuStack_58);
      param_3 = lStack_50;
      if ((param_5 == 0) || (lStack_50 == param_4)) goto LAB_140079f72;
    }
    if (iVar1 == 3) {
      uVar2 = param_4 - param_3;
      if (param_5 < (ulonglong)(param_4 - param_3)) {
        uVar2 = param_5;
      }
      param_3 = param_3 + uVar2;
    }
  }
LAB_140079f72:
  uVar2 = param_3 - lStack_68;
  if (0x7ffffffe < (longlong)uVar2) {
    uVar2 = 0x7fffffff;
  }
  if (DAT_1401c9640 != (uStack_48 ^ (ulonglong)auStack_a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1400d3720(uStack_48 ^ (ulonglong)auStack_a8);
  }
  return uVar2 & 0xffffffff;
}

