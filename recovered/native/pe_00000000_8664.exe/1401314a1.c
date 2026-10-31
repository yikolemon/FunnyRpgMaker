/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401314a1 */

undefined8 FUN_1401314a1(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_140133258();
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x208);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x20c);
  uVar1 = *(uint *)(param_2 + 0x20);
  uVar3 = (uint)((uVar1 & 0xfffffffe) == 2);
  uVar2 = uVar3 + 2;
  if (uVar1 == 4) {
    uVar3 = uVar2;
  }
  if (uVar1 == 2) {
    uVar3 = uVar2;
  }
  uVar2 = uVar3 + 4;
  if ((uVar1 & 0xfffffffd) == 1) {
    uVar2 = uVar3;
  }
  uVar3 = uVar2 | 8;
  if (uVar1 != 2) {
    uVar3 = uVar2;
  }
  *(uint *)(param_1 + 0x1178) = *(uint *)(param_1 + 0x1178) | 4;
  *(uint *)(param_1 + 0x117c) = uVar3;
  return 0;
}

