/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004399fb */

void __fastcall FUN_004399fb(int param_1)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x148);
  uVar2 = (ushort)((uVar1 & 1) << 0xe);
  uVar3 = uVar2 ^ 0x4000;
  if ((byte)uVar1 < 4) {
    *(ushort *)(param_1 + 0xf8) = uVar2;
    *(ushort *)(param_1 + 0xfa) = uVar3;
    *(ushort *)(param_1 + 0xf4) = uVar2;
    *(ushort *)(param_1 + 0xf6) = uVar3;
  }
  if ((uVar1 & 2) == 0) {
    *(ushort *)(param_1 + 0xfc) = uVar2;
    *(ushort *)(param_1 + 0xfe) = uVar3;
  }
  FUN_00442192(param_1);
  return;
}

