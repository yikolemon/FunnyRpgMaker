/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a491e */

void __fastcall FUN_100a491e(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x7c) != *(int *)(param_1 + 0x78)) {
    uVar2 = 0;
    do {
      FUN_1008c8aa("events");
      uVar1 = FUN_1008c5a4(uVar2);
      FUN_100a7458(uVar1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)((*(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78) >> 2) * 0x286bca1b)
            );
  }
  return;
}

