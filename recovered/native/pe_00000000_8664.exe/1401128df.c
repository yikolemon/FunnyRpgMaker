/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401128df */

void FUN_1401128df(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[1];
  *(undefined8 *)(param_1 + 0x2b8) = *param_2;
  *(undefined8 *)(param_1 + 0x2c0) = uVar5;
  lVar2 = *(longlong *)(param_1 + 800);
  *(undefined8 *)(lVar2 + 0x60) = uVar3;
  *(undefined8 *)(lVar2 + 0x68) = uVar4;
  puVar1 = (undefined8 *)
           (*(longlong *)(*(longlong *)(param_1 + 800) + 0xa8) + -0x10 +
           (longlong)*(int *)(*(longlong *)(param_1 + 800) + 0xa0) * 0x10);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  return;
}

