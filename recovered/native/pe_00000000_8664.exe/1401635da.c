/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401635da */

undefined8
FUN_1401635da(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined4 param_8,
             undefined8 param_9)

{
  undefined *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  FUN_1401c5830(param_1,0,0x740);
  lVar2 = FUN_14012c267(*(undefined8 *)(param_2 + 0x90),"postscript-cmaps",1);
  if (lVar2 == 0) {
    uVar3 = 7;
  }
  else {
    *(longlong *)(param_1 + 0x658) = lVar2;
    FUN_1401632db(param_1,param_2,param_3,param_4,param_7);
    *(undefined4 *)(param_1 + 0x660) = *(undefined4 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x668) = param_5;
    *(undefined4 *)(param_1 + 0x6f0) = param_8;
    *(undefined8 *)(param_1 + 0x6e8) = param_6;
    *(undefined8 *)(param_1 + 0x6f8) = param_9;
    puVar1 = PTR_FUN_140ea0be0;
    *(undefined **)(param_1 + 0x700) = PTR_FUN_140ea0bd8;
    *(undefined **)(param_1 + 0x708) = puVar1;
    puVar1 = PTR_FUN_140ea0bf0;
    *(undefined **)(param_1 + 0x710) = PTR_FUN_140ea0be8;
    *(undefined **)(param_1 + 0x718) = puVar1;
  }
  return uVar3;
}

