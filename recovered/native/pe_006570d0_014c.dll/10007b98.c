/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10007b98 */

undefined4 *
FUN_10007b98(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,uint param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  
  if (param_4 != 0) {
    uVar1 = param_4 & 0x7fffff;
    uVar2 = param_4 >> 0x17;
    if (param_4 < 0x4b800000 || param_5 != 2) {
      uVar4 = FUN_10007e54(uVar1,uVar2);
      FUN_10008415(param_1,param_2,param_3,uVar4,param_5,uVar1,uVar2);
      return param_1;
    }
    FUN_10007c57(param_1,param_2,param_3,uVar1 | 0x800000,uVar2 - 0x96);
    return param_1;
  }
  if (param_5 == 1) {
    if ((int)param_3 - (int)param_2 < 5) {
LAB_10007c49:
      *param_1 = param_3;
      param_1[1] = 0x84;
      return param_1;
    }
    *(undefined1 *)(param_2 + 1) = 0x30;
    *param_2 = 0x302b6530;
    puVar3 = (undefined1 *)((int)param_2 + 5);
  }
  else {
    if (param_2 == param_3) goto LAB_10007c49;
    *(undefined1 *)param_2 = 0x30;
    puVar3 = (undefined1 *)((int)param_2 + 1);
  }
  *param_1 = puVar3;
  param_1[1] = 0;
  return param_1;
}

