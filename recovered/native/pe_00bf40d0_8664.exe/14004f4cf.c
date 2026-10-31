/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004f4cf */

undefined8 FUN_14004f4cf(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  uVar5 = 0xa1;
  if (puVar1 + 4 <= *(undefined8 **)(param_1 + 0x28)) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    iVar3 = FUN_14004f325(param_1,puVar1);
    uVar4 = FUN_140021867(iVar3);
    *(uint *)(lVar2 + 0x50) = uVar4;
    iVar3 = FUN_14004f325(param_1,puVar1 + 1);
    uVar4 = FUN_140021867(iVar3);
    *(uint *)(lVar2 + 0x54) = uVar4;
    iVar3 = FUN_14004f325(param_1,puVar1 + 2);
    uVar4 = FUN_140021867(iVar3);
    *(uint *)(lVar2 + 0x58) = uVar4;
    iVar3 = FUN_14004f325(param_1,puVar1 + 3);
    uVar4 = FUN_140021867(iVar3);
    *(uint *)(lVar2 + 0x5c) = uVar4;
    uVar5 = 0;
  }
  return uVar5;
}

