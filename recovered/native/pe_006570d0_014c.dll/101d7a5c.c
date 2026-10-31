/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d7a5c */

undefined4 FUN_101d7a5c(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_101d9435();
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 500);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x1f8);
  uVar1 = *(uint *)(param_2 + 0x18);
  uVar2 = (uint)((uVar1 & 0xfffffffe) == 2);
  uVar3 = uVar2 + 2;
  if (uVar1 == 4) {
    uVar2 = uVar3;
  }
  if (uVar1 == 2) {
    uVar2 = uVar3;
  }
  uVar3 = uVar2 + 4;
  if ((uVar1 & 0xfffffffd) == 1) {
    uVar3 = uVar2;
  }
  uVar2 = uVar3 | 8;
  if (uVar1 != 2) {
    uVar2 = uVar3;
  }
  *(uint *)(param_1 + 0xabc) = *(uint *)(param_1 + 0xabc) | 4;
  *(uint *)(param_1 + 0xac0) = uVar2;
  return 0;
}

