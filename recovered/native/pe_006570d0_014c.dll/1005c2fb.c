/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005c2fb */

undefined4 __fastcall FUN_1005c2fb(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (DAT_1039ca4c < 0x30257) {
    uVar1 = **(undefined4 **)(param_2 + 0xc);
    uVar2 = **(undefined4 **)(param_2 + 8);
    uVar3 = **(undefined4 **)(param_2 + 4);
    if (DAT_1039ca4c < 0x30000) {
      uVar4 = FUN_1006233c();
      FUN_1006964f(param_1,uVar4,uVar3,uVar2,uVar1);
    }
    else {
      uVar4 = FUN_1006233c();
      FUN_10068c7a(param_1,uVar4,uVar3,uVar2,uVar1);
    }
  }
  else {
    uVar1 = **(undefined4 **)(param_2 + 0xc);
    uVar2 = **(undefined4 **)(param_2 + 8);
    uVar3 = **(undefined4 **)(param_2 + 4);
    uVar4 = FUN_1006233c();
    FUN_10067cc2(param_1,uVar4,uVar3,uVar2,uVar1);
  }
  return param_1;
}

