/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101eaa22 */

void __fastcall FUN_101eaa22(int param_1)

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
      puVar2 = &LAB_101eacc2;
      puVar3 = &LAB_101eac90;
      goto LAB_101eaae0;
    }
    if (iVar5 == 0x4000) {
      puVar2 = &LAB_101ead09;
      puVar3 = &LAB_101eacd6;
      goto LAB_101eaae0;
    }
  }
  puVar2 = &LAB_101eadb7;
  puVar3 = &LAB_101ead1e;
LAB_101eaae0:
  *(undefined1 **)(param_1 + 0x1e8) = puVar3;
  *(undefined1 **)(param_1 + 0x1ec) = puVar2;
  if (*(short *)(param_1 + 0xf8) == 0x4000) {
    *(code **)(param_1 + 0x1dc) = FUN_10152814;
  }
  else if (*(short *)(param_1 + 0xfa) == 0x4000) {
    *(undefined1 **)(param_1 + 0x1dc) = &LAB_101eae20;
  }
  else {
    *(undefined1 **)(param_1 + 0x1dc) = &LAB_101eae25;
  }
  if (*(short *)(param_1 + 0xf4) == 0x4000) {
    *(code **)(param_1 + 0x1e0) = FUN_10152814;
  }
  else if (*(short *)(param_1 + 0xf6) == 0x4000) {
    *(undefined1 **)(param_1 + 0x1e0) = &LAB_101eae20;
  }
  else {
    *(undefined1 **)(param_1 + 0x1e0) = &LAB_101eae61;
  }
  *(undefined4 *)(param_1 + 0xdc) = 0;
  return;
}

