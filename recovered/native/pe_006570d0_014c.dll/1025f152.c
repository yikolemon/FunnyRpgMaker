/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1025f152 */

int FUN_1025f152(undefined4 param_1,undefined4 param_2,undefined1 *param_3,int param_4,int param_5,
                int param_6,undefined4 param_7)

{
  int iVar1;
  
  if (param_5 == 0) {
    *(undefined1 *)(param_6 + 0x1c) = 1;
    *(undefined4 *)(param_6 + 0x18) = 0x16;
    FUN_10274034(0,0,0,0,0,param_6);
  }
  else {
    if ((param_3 == (undefined1 *)0x0) || (param_4 == 0)) {
      *(undefined1 *)(param_6 + 0x1c) = 1;
      *(undefined4 *)(param_6 + 0x18) = 0x16;
    }
    else {
      iVar1 = FUN_10261894(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      if (iVar1 < 0) {
        *param_3 = 0;
      }
      if (iVar1 != -2) {
        return iVar1;
      }
      *(undefined1 *)(param_6 + 0x1c) = 1;
      *(undefined4 *)(param_6 + 0x18) = 0x22;
    }
    FUN_10274034(0,0,0,0,0,param_6);
  }
  return -1;
}

