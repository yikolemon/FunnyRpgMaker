/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f4f90 */

int __fastcall FUN_101f4f90(undefined4 param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = (char *)*param_2;
  if (*pcVar1 == -1) {
    iVar2 = ((uint)(byte)pcVar1[3] | (uint)(byte)pcVar1[2] << 8 | (uint)(byte)pcVar1[1] << 0x10) *
            0x100 + 0x8000;
  }
  else {
    if (*pcVar1 != '\x1e') {
      iVar2 = FUN_101f5838();
      return iVar2;
    }
    iVar2 = FUN_101f545a(0,0);
  }
  return iVar2 >> 0x10;
}

