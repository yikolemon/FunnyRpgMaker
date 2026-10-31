/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14004b370 */

undefined8 *
FUN_14004b370(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,uint param_4,int param_5)

{
  undefined8 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  
  if (param_4 != 0) {
    uVar2 = param_4 & 0x7fffff;
    uVar4 = param_4 >> 0x17;
    if (param_4 < 0x4b800000 || param_5 != 2) {
      uVar1 = FUN_14004b651(uVar2,uVar4);
      FUN_14004bb7e(param_1,param_2,param_3,uVar1,param_5,uVar2,uVar4);
      return param_1;
    }
    FUN_14004b45a(param_1,param_2,param_3,uVar2 | 0x800000,uVar4 - 0x96);
    return param_1;
  }
  if (param_5 == 1) {
    if ((longlong)param_3 - (longlong)param_2 < 5) {
LAB_14004b440:
      *param_1 = param_3;
      *(undefined4 *)(param_1 + 1) = 0x84;
      return param_1;
    }
    *(undefined1 *)(param_2 + 1) = 0x30;
    *param_2 = 0x302b6530;
    puVar3 = (undefined1 *)((longlong)param_2 + 5);
  }
  else {
    if (param_2 == param_3) goto LAB_14004b440;
    *(undefined1 *)param_2 = 0x30;
    puVar3 = (undefined1 *)((longlong)param_2 + 1);
  }
  *param_1 = puVar3;
  *(undefined4 *)(param_1 + 1) = 0;
  return param_1;
}

