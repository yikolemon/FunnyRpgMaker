/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18015aa83 */

void FUN_18015aa83(longlong param_1,float param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = 0;
  do {
    lVar2 = 0;
    do {
      if (uVar1 == *(uint *)((longlong)&DAT_1802df360 + lVar2)) goto LAB_18015aac1;
      lVar2 = lVar2 + 4;
    } while (lVar2 != 0x18);
    *(float *)(param_1 + 0x14c + uVar1 * 0x10) =
         *(float *)(param_1 + 0x14c + uVar1 * 0x10) * param_2;
LAB_18015aac1:
    uVar1 = uVar1 + 1;
    if (uVar1 == 0x3f) {
      return;
    }
  } while( true );
}

