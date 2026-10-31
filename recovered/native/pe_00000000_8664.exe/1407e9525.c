/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e9525 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407e9525(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined1 auVar4 [16];
  
  uVar2 = (uint)&stack0xfffffffffffffff8;
  puVar3 = (undefined4 *)(ulonglong)((uVar2 & 0xfffffff0) - 0x50);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(puVar3 + 0xc) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(puVar3 + 0xe) = uVar1;
  *(int *)(param_1 + 0x30) = (int)param_2;
  auVar4._4_4_ = (float)(int)((ulonglong)*(undefined8 *)(param_2 + 0x1c) >> 0x20);
  auVar4._0_4_ = (float)(int)*(undefined8 *)(param_2 + 0x1c);
  auVar4._8_8_ = 0;
  auVar4 = divps(_DAT_150aa05f4,auVar4);
  *(longlong *)(param_1 + 0x44) = auVar4._0_8_;
  *(int *)(param_1 + 0x20) = (int)param_2;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(puVar3 + 5) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(puVar3 + 7) = uVar1;
  puVar3[1] = puVar3[0xc];
  puVar3[2] = puVar3[0xd];
  puVar3[3] = puVar3[0xe];
  puVar3[4] = puVar3[0xf];
  *puVar3 = (int)param_1;
  *(undefined8 *)(puVar3 + -2) = 0x1407e9579;
  FUN_1407e92ea();
  if (_DAT_150b72285 == (puVar3[0x11] ^ uVar2)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(puVar3 + -2) = FUN_1407e9598;
  FUN_1408802b0(puVar3[0x11] ^ uVar2);
}

