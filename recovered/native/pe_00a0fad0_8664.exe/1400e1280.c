/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400e1280 */

undefined8
FUN_1400e1280(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
             longlong *param_5,longlong param_6,longlong param_7,longlong *param_8)

{
  longlong lVar1;
  int iVar2;
  undefined8 local_res18 [2];
  
  local_res18[0] = 0;
  *param_5 = param_3;
  *param_8 = param_6;
  lVar1 = *param_5;
  while( true ) {
    if (lVar1 == param_4) {
      return 0;
    }
    if ((param_6 == param_7) ||
       (iVar2 = FUN_1400da650(param_6,lVar1,param_4 - lVar1,local_res18,param_1 + 0x10), iVar2 == -2
       )) break;
    if (iVar2 == -1) {
      return 2;
    }
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    *param_5 = *param_5 + (longlong)iVar2;
    *param_8 = *param_8 + 2;
    lVar1 = *param_5;
    param_6 = *param_8;
  }
  return 1;
}

