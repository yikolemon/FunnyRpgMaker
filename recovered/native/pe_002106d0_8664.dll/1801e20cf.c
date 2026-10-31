/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e20cf */

undefined8 FUN_1801e20cf(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  lVar2 = *(longlong *)(param_2 + 8);
  FUN_1801e3b6c();
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x248);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x24c);
  uVar1 = *(uint *)(param_2 + 0x20);
  uVar3 = *(uint *)(param_1 + 0x1178);
  if (((uVar1 & 0xfffffffd) == 1) || ((*(byte *)(lVar2 + 0xc) & 1) != 0)) {
    uVar3 = uVar3 | 1;
  }
  uVar5 = (uint)((uVar1 & 0xfffffffe) == 2);
  uVar4 = uVar5 + 2;
  if (uVar1 == 4) {
    uVar5 = uVar4;
  }
  if (uVar1 == 2) {
    uVar5 = uVar4;
  }
  uVar4 = uVar5 + 4;
  if ((uVar1 & 0xfffffffd) == 1) {
    uVar4 = uVar5;
  }
  uVar5 = uVar4 | 8;
  if (uVar1 != 2) {
    uVar5 = uVar4;
  }
  *(uint *)(param_1 + 0x1178) = uVar3;
  *(uint *)(param_1 + 0x117c) = uVar5;
  return 0;
}

