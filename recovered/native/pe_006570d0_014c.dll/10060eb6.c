/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10060eb6 */

void __fastcall FUN_10060eb6(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)*param_1;
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)*puVar1;
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    FUN_102283a0(puVar1,0x10);
    puVar1 = puVar2;
  }
  FUN_102283a0(*param_1,0x10);
  return;
}

