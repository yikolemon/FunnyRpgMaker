/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800988fe */

void Unwind_1800988fe(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0xd78;
  lVar1 = *(longlong *)(param_2 + 0x88);
  do {
    FUN_1800010ec(lVar1 + lVar2);
    lVar2 = lVar2 + -0x20;
  } while (lVar2 != 0xf8);
  return;
}

