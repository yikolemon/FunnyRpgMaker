/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006a0ab */

undefined8 __fastcall FUN_1006a0ab(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (((param_1 == 0) ||
      (uVar1 = (*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20) >> 2) * -0x47dc11f7,
      *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 5 != uVar1)) || (uVar1 <= param_2)) {
    uVar3 = FUN_1006235a();
  }
  else {
    uVar3 = FUN_1006235a();
  }
  uVar2 = FUN_1006235a();
  return CONCAT44(uVar2,uVar3);
}

