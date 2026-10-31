/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140096572 */

void FUN_140096572(longlong param_1,undefined2 param_2)

{
  longlong lVar1;
  uint uVar2;
  uint *puVar3;
  
  lVar1 = *(longlong *)(param_1 + 8);
  puVar3 = *(uint **)(lVar1 + 0x30);
  if (puVar3 == (uint *)0x0) {
    puVar3 = (uint *)FUN_1400d3680(0x10);
    puVar3[0] = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(uint **)(lVar1 + 0x30) = puVar3;
  }
  else {
    uVar2 = puVar3[1];
    if (uVar2 < *puVar3) goto code_r0x0001400965d3;
  }
  FUN_140096480(puVar3,1);
  uVar2 = puVar3[1];
code_r0x0001400965d3:
  puVar3[1] = uVar2 + 1;
  *(undefined2 *)(*(longlong *)(puVar3 + 2) + (ulonglong)uVar2 * 2) = param_2;
  return;
}

