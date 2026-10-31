/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400dae32 */

void FUN_1400dae32(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  if ((*(longlong *)(param_1 + 0x78) == param_2[1]) && (*(longlong *)(param_1 + 0x70) == *param_2))
  {
    return;
  }
  lVar4 = param_2[1];
  *(longlong *)(param_1 + 0x70) = *param_2;
  *(longlong *)(param_1 + 0x78) = lVar4;
  uVar2 = *(undefined4 *)((longlong)param_2 + 4);
  lVar4 = param_2[1];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  puVar1 = (undefined4 *)
           (*(longlong *)(param_1 + 0xb8) + -0x10 + (longlong)*(int *)(param_1 + 0xb0) * 0x10);
  *puVar1 = (int)*param_2;
  puVar1[1] = uVar2;
  puVar1[2] = (int)lVar4;
  puVar1[3] = uVar3;
  FUN_1400da9bc();
  return;
}

