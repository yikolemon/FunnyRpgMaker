/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014e1b4 */

undefined4 FUN_1014e1b4(undefined4 param_1,undefined4 param_2,byte *param_3,undefined1 param_4)

{
  char cVar1;
  undefined4 uVar2;
  
  if (param_3 == (byte *)0x0) {
    uVar2 = FUN_1014dc16(param_1,0,param_2,0,param_4);
  }
  else {
    cVar1 = FUN_1014dc16(param_1,0,param_2,*param_3,param_4);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      *param_3 = *param_3 ^ 1;
      uVar2 = 1;
    }
  }
  return uVar2;
}

