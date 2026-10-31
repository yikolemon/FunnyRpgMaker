/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012b3a9 */

void FUN_18012b3a9(int *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  cVar3 = FUN_18014c0b4(param_2,"%s: %d entries, %d bytes",param_2,*param_1,*param_1 << 4);
  if (cVar3 != '\0') {
    iVar1 = *param_1;
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 2);
      lVar4 = 0;
      do {
        FUN_180133606("Key 0x%08X Value { i: %d }",*(undefined4 *)(lVar2 + lVar4),
                      *(undefined4 *)(lVar2 + 8 + lVar4));
        FUN_180129d64(*(undefined4 *)(lVar2 + lVar4));
        lVar4 = lVar4 + 0x10;
      } while ((longlong)iVar1 * 0x10 != lVar4);
    }
    FUN_18014d7a9();
    return;
  }
  return;
}

