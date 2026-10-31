/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041ca38 */

void __cdecl FUN_0041ca38(int param_1)

{
  short *psVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    return;
  }
  uVar2 = 0;
  uVar3 = uVar2;
  if (*(short *)(param_1 + 0x38) != 0) {
    do {
      psVar1 = (short *)(*(int *)(param_1 + 0x44) + uVar3 * 2);
      *psVar1 = *psVar1 + *(short *)(param_1 + 0x16);
      uVar3 = uVar3 + 1;
      uVar2 = (uint)*(ushort *)(param_1 + 0x38);
    } while (uVar3 < uVar2);
  }
  *(uint *)(param_1 + 0x14) =
       CONCAT22(*(short *)(param_1 + 0x3a) + (short)((uint)*(undefined4 *)(param_1 + 0x14) >> 0x10),
                (short)uVar2 + (short)*(undefined4 *)(param_1 + 0x14));
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x54);
  FUN_0041ca1c(param_1);
  return;
}

