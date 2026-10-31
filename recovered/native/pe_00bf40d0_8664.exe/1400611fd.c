/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400611fd */

void FUN_1400611fd(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x20);
    *(undefined8 *)(lVar1 + 0xb8) = puVar2[4];
    uVar3 = *puVar2;
    uVar4 = puVar2[1];
    uVar5 = puVar2[3];
    *(undefined8 *)(lVar1 + 0xa8) = puVar2[2];
    *(undefined8 *)(lVar1 + 0xb0) = uVar5;
    *(undefined8 *)(lVar1 + 0x98) = uVar3;
    *(undefined8 *)(lVar1 + 0xa0) = uVar4;
  }
  return;
}

