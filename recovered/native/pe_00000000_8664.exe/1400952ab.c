/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400952ab */

void FUN_1400952ab(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  lVar5 = DAT_140f2a910;
  *(undefined4 *)(DAT_140f2a910 + 0x21f8) = param_1;
  *(int *)(lVar5 + 0x220c) = param_2;
  FUN_1400900d8(param_3);
  *(undefined4 *)(*(longlong *)(lVar5 + 0x2200) + 0x450 + (longlong)param_2 * 4) = param_1;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  puVar1 = (undefined4 *)(*(longlong *)(lVar5 + 0x2200) + 0x458 + (longlong)param_2 * 0x10);
  *puVar1 = *param_4;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  FUN_14009527c(0);
  FUN_14009527c(1);
  return;
}

