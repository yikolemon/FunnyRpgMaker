/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011bfef */

void FUN_18011bfef(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  lVar5 = DAT_180419160;
  *(undefined4 *)(DAT_180419160 + 0x21f8) = param_1;
  *(int *)(lVar5 + 0x220c) = param_2;
  FUN_180116dc0(param_3);
  *(undefined4 *)(*(longlong *)(lVar5 + 0x2200) + 0x450 + (longlong)param_2 * 4) = param_1;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  puVar1 = (undefined4 *)(*(longlong *)(lVar5 + 0x2200) + 0x458 + (longlong)param_2 * 0x10);
  *puVar1 = *param_4;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  FUN_18011bfc0(0);
  FUN_18011bfc0(1);
  return;
}

