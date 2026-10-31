/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0045cd04 */

void __cdecl FUN_0045cd04(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    *(undefined4 *)(iVar1 + 0x7c) = puVar2[4];
    uVar3 = puVar2[1];
    uVar4 = puVar2[2];
    uVar5 = puVar2[3];
    *(undefined4 *)(iVar1 + 0x6c) = *puVar2;
    *(undefined4 *)(iVar1 + 0x70) = uVar3;
    *(undefined4 *)(iVar1 + 0x74) = uVar4;
    *(undefined4 *)(iVar1 + 0x78) = uVar5;
  }
  return;
}

