/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101880ee */

uint __thiscall FUN_101880ee(int param_1,float param_2)

{
  uint uVar1;
  float10 fVar2;
  
  if ((uint)(int)(DAT_10301370 + param_2) < 0x40) {
    return (uint)*(byte *)(*(int *)(param_1 + 0x2c) + 0x1dc + (int)(DAT_10301370 + param_2));
  }
  fVar2 = (float10)FUN_100ea38a(*(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x20),param_2);
  fVar2 = (float10)FUN_1026cb00((double)(DAT_1028b430 - (float)fVar2 / param_2));
  fVar2 = (float10)FUN_1026d3b0((double)(DAT_102b9604 / (float)fVar2));
  uVar1 = FUN_10125d9a(((int)fVar2 - ((int)fVar2 + 1 >> 0x1f)) + 1U & 0xfffffffe,4,0x200);
  return uVar1;
}

