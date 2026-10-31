/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140059426 */

undefined2 FUN_140059426(longlong *param_1)

{
  undefined2 *puVar1;
  short sVar2;
  undefined2 uVar3;
  
  sVar2 = (**(code **)(*param_1 + 0x30))();
  if (sVar2 == -1) {
    uVar3 = 0xffff;
  }
  else {
    *(int *)param_1[10] = *(int *)param_1[10] + -1;
    puVar1 = *(undefined2 **)param_1[7];
    *(undefined2 **)param_1[7] = puVar1 + 1;
    uVar3 = *puVar1;
  }
  return uVar3;
}

