/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005c22f */

void __fastcall FUN_1005c22f(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (DAT_1039ca4c < 0x30257) {
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    uVar2 = **(undefined4 **)(param_1 + 8);
    if (DAT_1039ca4c < 0x30000) {
      FUN_1006233c();
      FUN_10067b31(uVar2,uVar1);
    }
    else {
      FUN_1006233c();
      FUN_100679b1(uVar2,uVar1);
    }
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    uVar2 = **(undefined4 **)(param_1 + 8);
    FUN_1006233c();
    FUN_100621b8(uVar2,uVar1);
  }
  return;
}

