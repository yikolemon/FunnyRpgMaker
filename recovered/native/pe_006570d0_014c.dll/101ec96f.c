/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101ec96f */

undefined4 __fastcall FUN_101ec96f(int param_1,ushort param_2,ushort param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if ((param_2 < *(ushort *)(param_1 + 0x60)) && (param_3 < *(ushort *)(param_1 + 0x44))) {
    FUN_101ec9f3(param_4);
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
    if (*(char *)(param_1 + 0x1ce) != '\0') {
      *(undefined4 *)(param_1 + 0x10) = 0x86;
    }
  }
  return uVar1;
}

