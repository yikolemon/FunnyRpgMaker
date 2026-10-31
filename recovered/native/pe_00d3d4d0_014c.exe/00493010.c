/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00493010 */

uint __cdecl FUN_00493010(byte *param_1,byte *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  byte bVar3;
  bool bVar4;
  
  if (((uint)param_1 & 3) != 0) {
    if (((uint)param_1 & 1) != 0) {
      bVar3 = *param_1;
      param_1 = param_1 + 1;
      bVar4 = bVar3 < *param_2;
      if (bVar3 != *param_2) goto LAB_00493058;
      param_2 = param_2 + 1;
      if (bVar3 == 0) {
        return 0;
      }
      if (((uint)param_1 & 2) == 0) goto LAB_00493020;
    }
    uVar1 = *(undefined2 *)param_1;
    param_1 = param_1 + 2;
    bVar3 = (byte)uVar1;
    bVar4 = bVar3 < *param_2;
    if (bVar3 != *param_2) goto LAB_00493058;
    if (bVar3 == 0) {
      return 0;
    }
    bVar3 = (byte)((ushort)uVar1 >> 8);
    bVar4 = bVar3 < param_2[1];
    if (bVar3 != param_2[1]) goto LAB_00493058;
    if (bVar3 == 0) {
      return 0;
    }
    param_2 = param_2 + 2;
  }
LAB_00493020:
  while( true ) {
    uVar2 = *(undefined4 *)param_1;
    bVar3 = (byte)uVar2;
    bVar4 = bVar3 < *param_2;
    if (bVar3 != *param_2) break;
    if (bVar3 == 0) {
      return 0;
    }
    bVar3 = (byte)((uint)uVar2 >> 8);
    bVar4 = bVar3 < param_2[1];
    if (bVar3 != param_2[1]) break;
    if (bVar3 == 0) {
      return 0;
    }
    bVar3 = (byte)((uint)uVar2 >> 0x10);
    bVar4 = bVar3 < param_2[2];
    if (bVar3 != param_2[2]) break;
    if (bVar3 == 0) {
      return 0;
    }
    bVar3 = (byte)((uint)uVar2 >> 0x18);
    bVar4 = bVar3 < param_2[3];
    if (bVar3 != param_2[3]) break;
    param_2 = param_2 + 4;
    param_1 = param_1 + 4;
    if (bVar3 == 0) {
      return 0;
    }
  }
LAB_00493058:
  return -(uint)bVar4 | 1;
}

