/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006152a */

undefined8
FUN_14006152a(undefined1 (*param_1) [32],longlong param_2,longlong param_3,longlong param_4,
             undefined8 param_5,undefined8 param_6,char param_7,undefined4 param_8,
             undefined8 param_9)

{
  undefined *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  FUN_1400b3c00(param_1,0,0x740);
  lVar2 = FUN_14001f8d7(*(longlong **)(param_2 + 0x90),"postscript-cmaps",'\x01');
  if (lVar2 == 0) {
    uVar3 = 7;
  }
  else {
    *(longlong *)(param_1[0x32] + 0x18) = lVar2;
    FUN_14006122b((undefined8 *)param_1,param_2,param_3,param_4,param_7);
    *(undefined4 *)param_1[0x33] = *(undefined4 *)(param_2 + 0x10);
    *(undefined8 *)(param_1[0x33] + 8) = param_5;
    *(undefined4 *)(param_1[0x37] + 0x10) = param_8;
    *(undefined8 *)(param_1[0x37] + 8) = param_6;
    *(undefined8 *)(param_1[0x37] + 0x18) = param_9;
    puVar1 = PTR_FUN_1400f99a0;
    *(undefined **)param_1[0x38] = PTR_FUN_1400f9998;
    *(undefined **)(param_1[0x38] + 8) = puVar1;
    puVar1 = PTR_FUN_1400f99b0;
    *(undefined **)(param_1[0x38] + 0x10) = PTR_FUN_1400f99a8;
    *(undefined **)(param_1[0x38] + 0x18) = puVar1;
  }
  return uVar3;
}

