/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402765dc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402765dc(undefined4 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [64];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = ram0x000140613b10 ^ (ulonglong)auStack_68;
  if (0x2f < param_2 - (longlong)param_1) {
    local_18 = *(undefined8 *)(param_2 + -8);
    local_28 = *(undefined8 *)(param_2 + -0x18);
    uStack_20 = *(undefined8 *)(param_2 + -0x10);
    uVar1 = *param_1;
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    uVar4 = param_1[3];
    *(undefined4 *)(param_2 + -0x18) = uVar1;
    *(undefined4 *)(param_2 + -0x14) = uVar2;
    *(undefined4 *)(param_2 + -0x10) = uVar3;
    *(undefined4 *)(param_2 + -0xc) = uVar4;
    *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_1 + 4);
    FUN_140276498(uVar1,0,((param_2 + -0x18) - (longlong)param_1 >> 3) * -0x5555555555555555);
  }
  if (ram0x000140613b10 == (local_8 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_8 ^ (ulonglong)auStack_68);
}

