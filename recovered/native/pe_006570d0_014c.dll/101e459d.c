/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e459d */

void __fastcall FUN_101e459d(int param_1,ushort *param_2)

{
  if ((*param_2 < *(ushort *)(param_1 + 0x44)) && (param_2[2] < *(ushort *)(param_1 + 0x60))) {
    FUN_101ec9f3(param_1 + 0xf4);
    FUN_101ec9f3(param_1 + 0xf8);
    FUN_101eaa22();
    return;
  }
  if (*(char *)(param_1 + 0x1ce) != '\0') {
    *(undefined4 *)(param_1 + 0x10) = 0x86;
  }
  return;
}

