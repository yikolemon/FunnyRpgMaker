/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00475747 */

int __fastcall FUN_00475747(byte *param_1)

{
  int iVar1;
  
  FUN_004757e9((undefined4 *)param_1,*(uint *)(param_1 + 100) & 0x100);
  param_1[0x28] = (*(uint *)(param_1 + 100) & 0x20) == 0 | (byte)*(uint *)(param_1 + 100) >> 2 & 6;
  *(undefined1 **)(param_1 + 0x7c) = &LAB_00475830;
  *(undefined1 **)(param_1 + 0x80) = &LAB_00475845;
  *(undefined1 **)(param_1 + 0x84) = &LAB_004758dd;
  *(undefined1 **)(param_1 + 0x88) = &LAB_0047594b;
  iVar1 = FUN_00475956(param_1,0,*(int *)(param_1 + 0x68));
  if (iVar1 == 0) {
    if ((param_1[0x65] & 2) == 0) {
      *(code **)(param_1 + 0x7c) = FUN_00407b8c;
      *(undefined1 **)(param_1 + 0x80) = &LAB_00475a15;
      *(undefined1 **)(param_1 + 0x84) = &LAB_00475a99;
      *(code **)(param_1 + 0x88) = FUN_00407b8c;
      iVar1 = FUN_00475956(param_1,1,*(int *)(param_1 + 0x6c));
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}

