/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408be93a */

undefined4 * FUN_1408be93a(uint param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  uVar3 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar1 = *(undefined4 *)(uVar3 + 0x10);
  puVar4 = (undefined4 *)(ulonglong)*(uint *)(uVar3 + 8);
  puVar2 = (undefined4 *)(ulonglong)param_1;
  *puVar2 = *(undefined4 *)(uVar3 + 0xc);
  puVar5 = (undefined4 *)(ulonglong)(param_1 + 8);
  puVar2[1] = uVar1;
  *puVar5 = *puVar4;
  puVar5[1] = puVar4[1];
  puVar5[2] = puVar4[2];
  FUN_1408be1e6(param_1 + 0x18);
  uVar1 = *(undefined4 *)(uVar3 + 0x18);
  puVar2[0x1c] = 0;
  puVar2[0x1a] = uVar1;
  puVar2[0x1b] = *(undefined4 *)(uVar3 + 0x1c);
  return puVar2;
}

