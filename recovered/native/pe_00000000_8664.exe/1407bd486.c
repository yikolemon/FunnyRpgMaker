/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407bd486 */

void FUN_1407bd486(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  uint unaff_retaddr;
  uint local_res8;
  
  uVar5 = (ulonglong)unaff_retaddr;
  puVar6 = (undefined8 *)(ulonglong)local_res8;
  uVar2 = *puVar6;
  uVar3 = puVar6[1];
  uVar4 = puVar6[1];
  *(undefined8 *)(uVar5 + 0x28c) = *puVar6;
  *(undefined8 *)(uVar5 + 0x294) = uVar4;
  uVar1 = *(uint *)(uVar5 + 0x2e8);
  *(undefined8 *)((ulonglong)uVar1 + 0x48) = uVar2;
  *(undefined8 *)((ulonglong)uVar1 + 0x50) = uVar3;
  puVar6 = (undefined8 *)
           (((ulonglong)*(uint *)((ulonglong)*(uint *)(uVar5 + 0x2e8) + 0x8c) - 0x10) +
           (ulonglong)(uint)(*(int *)((ulonglong)*(uint *)(uVar5 + 0x2e8) + 0x84) << 4));
  *puVar6 = uVar2;
  puVar6[1] = uVar3;
  return;
}

