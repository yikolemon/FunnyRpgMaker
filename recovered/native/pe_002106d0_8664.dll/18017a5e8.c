/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017a5e8 */

undefined8 FUN_18017a5e8(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_18017a657(param_1,&DAT_18036dfd6);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = *(ulonglong *)(param_1 + 0xc0);
  iVar1 = 0x54;
  do {
    if (uVar2 < *(ulonglong *)(param_1 + 200)) {
LAB_18017a62b:
      uVar2 = uVar2 + 1;
      *(ulonglong *)(param_1 + 0xc0) = uVar2;
    }
    else if (*(int *)(param_1 + 0x30) != 0) {
      FUN_180176673(param_1);
      uVar2 = *(ulonglong *)(param_1 + 0xc0);
      goto LAB_18017a62b;
    }
    iVar1 = iVar1 + -1;
    if (iVar1 == 0) {
      uVar3 = FUN_18017a657(param_1,&DAT_18036c25d);
      return uVar3;
    }
  } while( true );
}

