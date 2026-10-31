/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001699a */

void FUN_18001699a(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != *(undefined8 **)(param_1 + 0x10)) {
    uVar2 = param_2[1];
    *puVar1 = *param_2;
    puVar1[1] = uVar2;
    *(undefined1 *)param_2 = 0;
    param_2[1] = 0;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x10;
    return;
  }
  FUN_180016a16();
  return;
}

