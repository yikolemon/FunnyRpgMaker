/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10238b80 */

undefined4 __thiscall
FUN_10238b80(int param_1,undefined4 param_2,int param_3,int param_4,int *param_5,int param_6,
            int param_7,int *param_8)

{
  int iVar1;
  undefined8 local_10;
  int local_8;
  
  *param_5 = param_3;
  local_10 = 0;
  *param_8 = param_6;
  iVar1 = *param_5;
  local_8 = param_1;
  while( true ) {
    if (iVar1 == param_4) {
      return 0;
    }
    if ((param_6 == param_7) ||
       (iVar1 = FUN_1022d8f0(param_6,iVar1,param_4 - iVar1,&local_10,local_8 + 8), iVar1 == -2))
    break;
    if (iVar1 == -1) {
      return 2;
    }
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    *param_5 = *param_5 + iVar1;
    *param_8 = *param_8 + 2;
    iVar1 = *param_5;
    param_6 = *param_8;
  }
  return 1;
}

