/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14032d4bf */

void FUN_14032d4bf(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  lVar5 = DAT_14062a630;
  *(undefined4 *)(DAT_14062a630 + 0x21f8) = param_1;
  *(int *)(lVar5 + 0x220c) = param_2;
  FUN_140328290(param_3);
  *(undefined4 *)(*(longlong *)(lVar5 + 0x2200) + 0x450 + (longlong)param_2 * 4) = param_1;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  puVar1 = (undefined4 *)(*(longlong *)(lVar5 + 0x2200) + 0x458 + (longlong)param_2 * 0x10);
  *puVar1 = *param_4;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  FUN_14032d490(0);
  FUN_14032d490(1);
  return;
}

