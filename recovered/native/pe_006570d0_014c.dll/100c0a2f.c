/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c0a2f */

void __fastcall FUN_100c0a2f(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (DAT_1039ca4c < 0x30257) {
    uVar1 = **(undefined4 **)(param_1 + 0x14);
    uVar2 = **(undefined4 **)(param_1 + 0x10);
    uVar3 = **(undefined4 **)(param_1 + 0xc);
    uVar4 = **(undefined4 **)(param_1 + 8);
    if (DAT_1039ca4c < 0x30000) {
      FUN_1006233c(uVar4);
      FUN_100c0c9e(uVar4,uVar3,uVar2,uVar1);
    }
    else {
      FUN_1006233c();
      FUN_100c0bba(uVar4,uVar3,uVar2,uVar1);
    }
  }
  else {
    uVar1 = **(undefined4 **)(param_1 + 0x14);
    uVar2 = **(undefined4 **)(param_1 + 0x10);
    uVar3 = **(undefined4 **)(param_1 + 0xc);
    uVar4 = **(undefined4 **)(param_1 + 8);
    FUN_1006233c(uVar4);
    FUN_100c0ad2(uVar4,uVar3,uVar2,uVar1);
  }
  return;
}

