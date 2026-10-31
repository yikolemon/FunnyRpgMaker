/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102777f9 */

void FUN_102777f9(undefined4 *param_1,undefined1 *param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  undefined4 uVar1;
  int iVar2;
  int local_10 [3];
  
  uVar1 = FUN_1028395e(*param_1,param_1[1],param_6 + 1,1,local_10,param_4,param_5);
  iVar2 = (param_3 - (uint)(0 < param_6)) - (uint)(local_10[0] == 0x2d);
  if (param_3 == -1) {
    iVar2 = -1;
  }
  iVar2 = FUN_102837b4(param_2 + (uint)(0 < param_6) + (uint)(local_10[0] == 0x2d),iVar2,param_6 + 1
                       ,local_10,uVar1,param_9,param_10);
  if (iVar2 == 0) {
    FUN_102776b6(param_2,param_3,param_6,param_7,param_8,local_10,0,param_10);
  }
  else {
    *param_2 = 0;
  }
  return;
}

