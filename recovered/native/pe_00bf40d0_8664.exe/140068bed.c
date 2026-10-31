/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140068bed */

void FUN_140068bed(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined1 uVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_140069c6b(param_1,param_3);
  if ((uVar2 != 0) && (param_1[3] != 0)) {
    uVar2 = 0;
    do {
      uVar1 = FUN_140067c84(param_2);
      *(undefined1 *)((longlong)param_1 + uVar2 + 0x20) = uVar1;
      uVar2 = uVar2 + 1;
    } while (uVar2 < (ulonglong)param_1[3]);
  }
  return;
}

