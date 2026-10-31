/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400761c7 */

void FUN_1400761c7(longlong param_1,float param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = 0;
  do {
    lVar2 = 0;
    do {
      if (uVar1 == *(uint *)((longlong)&DAT_14020ffa0 + lVar2)) goto LAB_140076205;
      lVar2 = lVar2 + 4;
    } while (lVar2 != 0x18);
    *(float *)(param_1 + 0x14c + uVar1 * 0x10) =
         *(float *)(param_1 + 0x14c + uVar1 * 0x10) * param_2;
LAB_140076205:
    uVar1 = uVar1 + 1;
    if (uVar1 == 0x3f) {
      return;
    }
  } while( true );
}

