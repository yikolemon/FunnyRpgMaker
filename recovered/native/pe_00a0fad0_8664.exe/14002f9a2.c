/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14002f9a2 */

void FUN_14002f9a2(longlong param_1,int *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  if (puVar3 != *(undefined8 **)(param_1 + 0x10)) {
    uVar1 = *param_3;
    iVar2 = *param_2;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    FUN_14002298c(puVar3,uVar1,(longlong)iVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    return;
  }
  FUN_14002f9f6(param_1,puVar3);
  return;
}

