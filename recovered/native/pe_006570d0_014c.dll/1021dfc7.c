/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1021dfc7 */

int __fastcall FUN_1021dfc7(int param_1)

{
  int iVar1;
  
  FUN_1021e069();
  *(byte *)(param_1 + 0x28) =
       (*(uint *)(param_1 + 100) & 0x20) == 0 | (byte)(*(uint *)(param_1 + 100) >> 2) & 6;
  *(undefined1 **)(param_1 + 0x7c) = &LAB_1021e0b0;
  *(undefined1 **)(param_1 + 0x80) = &LAB_1021e0c5;
  *(undefined1 **)(param_1 + 0x84) = &LAB_1021e15d;
  *(undefined1 **)(param_1 + 0x88) = &LAB_1021e1cb;
  iVar1 = FUN_1021e1d6(*(undefined4 *)(param_1 + 0x68));
  if (iVar1 == 0) {
    if ((*(byte *)(param_1 + 0x65) & 2) == 0) {
      *(code **)(param_1 + 0x7c) = FUN_10041162;
      *(undefined1 **)(param_1 + 0x80) = &LAB_1021e295;
      *(undefined1 **)(param_1 + 0x84) = &LAB_1021e319;
      *(code **)(param_1 + 0x88) = FUN_10041162;
      iVar1 = FUN_1021e1d6(*(undefined4 *)(param_1 + 0x6c));
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}

