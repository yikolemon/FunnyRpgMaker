/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10266494 */

uint __fastcall FUN_10266494(int param_1)

{
  uint uVar1;
  
  switch(*(undefined4 *)(param_1 + 0x28)) {
  case 0:
  case 1:
  case 8:
    return (*(char *)(param_1 + 0x24) != '\0') + 1;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 9:
    uVar1 = __crt_stdio_input::to_integer_length(*(length_modifier *)(param_1 + 0x20));
    return uVar1;
  case 7:
    uVar1 = __crt_stdio_input::to_floating_point_length(*(length_modifier *)(param_1 + 0x20));
    return uVar1;
  default:
    return 0;
  }
}

