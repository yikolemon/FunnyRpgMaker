/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00442192 */

void __fastcall FUN_00442192(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = (int)*(short *)(param_1 + 0xfc);
  iVar5 = (int)*(short *)(param_1 + 0xfe);
  iVar4 = iVar5 * *(short *)(param_1 + 0xfa) + *(short *)(param_1 + 0xf8) * iVar1 + 0x2000 >> 0xe;
  if (iVar4 < 0x3ffe) {
    if (iVar4 + 0x3ffU < 0x7ff) {
      *(undefined4 *)(param_1 + 0x1d4) = 0;
      iVar4 = 0;
    }
    else {
      *(int *)(param_1 + 0x1d4) = (iVar1 << 0x10) / iVar4;
      iVar4 = (iVar5 << 0x10) / iVar4;
    }
    *(int *)(param_1 + 0x1d8) = iVar4;
  }
  else {
    *(int *)(param_1 + 0x1d4) = iVar1 * 4;
    *(int *)(param_1 + 0x1d8) = iVar5 * 4;
    if (iVar1 == 0x4000) {
      puVar2 = &LAB_00442432;
      puVar3 = &LAB_00442400;
      goto LAB_00442250;
    }
    if (iVar5 == 0x4000) {
      puVar2 = &LAB_00442479;
      puVar3 = &LAB_00442446;
      goto LAB_00442250;
    }
  }
  puVar2 = &LAB_00442527;
  puVar3 = &LAB_0044248e;
LAB_00442250:
  *(undefined1 **)(param_1 + 0x1e8) = puVar3;
  *(undefined1 **)(param_1 + 0x1ec) = puVar2;
  if (*(short *)(param_1 + 0xf8) == 0x4000) {
    *(undefined1 **)(param_1 + 0x1dc) = &LAB_00442590;
  }
  else if (*(short *)(param_1 + 0xfa) == 0x4000) {
    *(undefined1 **)(param_1 + 0x1dc) = &LAB_00442595;
  }
  else {
    *(undefined1 **)(param_1 + 0x1dc) = &LAB_0044259a;
  }
  if (*(short *)(param_1 + 0xf4) == 0x4000) {
    *(undefined1 **)(param_1 + 0x1e0) = &LAB_00442590;
  }
  else if (*(short *)(param_1 + 0xf6) == 0x4000) {
    *(undefined1 **)(param_1 + 0x1e0) = &LAB_00442595;
  }
  else {
    *(undefined1 **)(param_1 + 0x1e0) = &LAB_004425d6;
  }
  *(undefined4 *)(param_1 + 0xdc) = 0;
  return;
}

