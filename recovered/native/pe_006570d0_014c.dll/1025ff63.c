/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1025ff63 */

uint __fastcall FUN_1025ff63(int param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  *(undefined4 **)(param_1 + 0x10) = puVar1 + 1;
  puVar2 = (uint *)*puVar1;
  iVar3 = FUN_102786c5();
  if (iVar3 == 0) {
LAB_1025ff7d:
    iVar3 = *(int *)(param_1 + 8);
    *(undefined1 *)(iVar3 + 0x1c) = 1;
    *(undefined4 *)(iVar3 + 0x18) = 0x16;
    uVar4 = FUN_10274034(0,0,0,0,0,*(undefined4 *)(param_1 + 8));
    uVar4 = uVar4 & 0xffffff00;
  }
  else {
    uVar4 = __crt_stdio_output::to_integer_size(*(length_modifier *)(param_1 + 0x28));
    if (uVar4 == 1) {
      uVar4 = 0;
      *(undefined1 *)puVar2 = *(undefined1 *)(param_1 + 0x14);
    }
    else if (uVar4 == 2) {
      uVar4 = (uint)*(ushort *)(param_1 + 0x14);
      *(ushort *)puVar2 = *(ushort *)(param_1 + 0x14);
    }
    else if (uVar4 == 4) {
      uVar4 = *(uint *)(param_1 + 0x14);
      *puVar2 = uVar4;
    }
    else {
      if (uVar4 != 8) goto LAB_1025ff7d;
      uVar4 = *(uint *)(param_1 + 0x14);
      *puVar2 = uVar4;
      puVar2[1] = (int)uVar4 >> 0x1f;
    }
    *(undefined1 *)(param_1 + 0x2c) = 1;
    uVar4 = CONCAT31((int3)(uVar4 >> 8),1);
  }
  return uVar4;
}

