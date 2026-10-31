/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043a1ba */

void __fastcall FUN_0043a1ba(int param_1,ushort *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  
  if ((uint)*param_2 < (uint)*(ushort *)(param_1 + 0x28)) {
    bVar2 = -(*(short *)(param_1 + 0xfc) == 0) | 0xf7;
    bVar3 = bVar2 & 0xef;
    if (*(short *)(param_1 + 0xfe) == 0) {
      bVar3 = bVar2;
    }
    pbVar1 = (byte *)(*(int *)(param_1 + 0x38) + (uint)*param_2);
    *pbVar1 = *pbVar1 & bVar3;
  }
  else if (*(char *)(param_1 + 0x1ce) != '\0') {
    *(undefined4 *)(param_1 + 0x10) = 0x86;
    return;
  }
  return;
}

