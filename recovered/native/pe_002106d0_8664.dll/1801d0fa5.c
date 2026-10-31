/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d0fa5 */

int FUN_1801d0fa5(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = *param_1;
  lVar3 = FUN_1801d13ec(uVar1,param_3,&DAT_18036b98e);
  if (lVar3 == 0) {
    iVar2 = 0x40;
  }
  else {
    iVar2 = FUN_1801d14e5(param_1,lVar3,param_5);
    if (iVar2 == 0) {
      *param_4 = lVar3;
      iVar2 = 0;
    }
    else {
      FUN_1801c9b65(uVar1,lVar3);
    }
  }
  return iVar2;
}

