/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180213eee */

undefined8
FUN_180213eee(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined4 param_8,
             undefined8 param_9)

{
  undefined *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  FUN_1802a89a0(param_1,0,0x740);
  lVar2 = FUN_1801cd293(*(undefined8 *)(param_2 + 0x90),"postscript-cmaps",1);
  if (lVar2 == 0) {
    uVar3 = 7;
  }
  else {
    *(longlong *)(param_1 + 0x658) = lVar2;
    FUN_180213bef(param_1,param_2,param_3,param_4,param_7);
    *(undefined4 *)(param_1 + 0x660) = *(undefined4 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x668) = param_5;
    *(undefined4 *)(param_1 + 0x6f0) = param_8;
    *(undefined8 *)(param_1 + 0x6e8) = param_6;
    *(undefined8 *)(param_1 + 0x6f8) = param_9;
    puVar1 = PTR_FUN_18033c870;
    *(undefined **)(param_1 + 0x700) = PTR_FUN_18033c868;
    *(undefined **)(param_1 + 0x708) = puVar1;
    puVar1 = PTR_FUN_18033c880;
    *(undefined **)(param_1 + 0x710) = PTR_FUN_18033c878;
    *(undefined **)(param_1 + 0x718) = puVar1;
  }
  return uVar3;
}

