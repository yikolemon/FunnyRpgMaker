/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003809e */

longlong * FUN_14003809e(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  
  FUN_140038797(param_2,param_1);
  lVar1 = *param_2;
  puVar7 = (undefined4 *)(lVar1 + 8);
  if (puVar7 != param_3) {
    FUN_140001f36(puVar7);
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = *(undefined8 *)(param_3 + 6);
    *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_3 + 4);
    *(undefined8 *)(lVar1 + 0x20) = uVar6;
    *puVar7 = uVar2;
    *(undefined4 *)(lVar1 + 0xc) = uVar3;
    *(undefined4 *)(lVar1 + 0x10) = uVar4;
    *(undefined4 *)(lVar1 + 0x14) = uVar5;
    *(undefined8 *)(param_3 + 4) = 0;
    *(undefined8 *)(param_3 + 6) = 0xf;
    *(undefined1 *)param_3 = 0;
  }
  FUN_14000109c(param_3);
  return param_2;
}

