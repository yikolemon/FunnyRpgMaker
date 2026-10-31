/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c28ce */

undefined4 FUN_101c28ce(int param_1,int param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  
  uVar2 = 0x23;
  if ((param_1 != 0) && ((*(byte *)(param_1 + 8) & 2) != 0)) {
    uVar2 = 6;
    if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x1c))) {
      pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x60) + 0xc) + 0x5c);
      if (pcVar1 != (code *)0x0) {
        uVar2 = (*pcVar1)(*(undefined4 *)(param_1 + 0x58),param_2);
        return uVar2;
      }
      FUN_101c2486(param_1,param_2);
      uVar2 = 0;
    }
  }
  return uVar2;
}

