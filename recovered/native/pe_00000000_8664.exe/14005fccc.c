/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005fccc */

void FUN_14005fccc(longlong param_1,undefined2 param_2)

{
  longlong lVar1;
  uint uVar2;
  uint *puVar3;
  
  lVar1 = *(longlong *)(param_1 + 8);
  puVar3 = *(uint **)(lVar1 + 0x30);
  if (puVar3 == (uint *)0x0) {
    puVar3 = (uint *)FUN_1401887b0(0x10);
    puVar3[0] = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(uint **)(lVar1 + 0x30) = puVar3;
  }
  else {
    uVar2 = puVar3[1];
    if (uVar2 < *puVar3) goto code_r0x00014005fd2d;
  }
  FUN_14005fbda(puVar3,1);
  uVar2 = puVar3[1];
code_r0x00014005fd2d:
  puVar3[1] = uVar2 + 1;
  *(undefined2 *)(*(longlong *)(puVar3 + 2) + (ulonglong)uVar2 * 2) = param_2;
  return;
}

