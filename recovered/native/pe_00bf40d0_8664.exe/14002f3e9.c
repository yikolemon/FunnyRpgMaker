/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002f3e9 */

undefined8 FUN_14002f3e9(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_1400311a0(param_1,param_2);
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

