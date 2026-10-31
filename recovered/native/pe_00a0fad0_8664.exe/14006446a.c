/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14006446a */

void FUN_14006446a(longlong param_1,undefined8 *param_2)

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
  FUN_1400644e6();
  return;
}

