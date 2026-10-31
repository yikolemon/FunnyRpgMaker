/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140129161 */

void FUN_140129161(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 4);
    lVar2 = *(longlong *)(param_1 + 0x20);
    if (iVar1 != 0) {
      lVar3 = 0;
      do {
        FUN_140128b39(param_2,*(undefined8 *)(lVar2 + lVar3 * 8));
        *(undefined8 *)(lVar2 + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (iVar1 != (int)lVar3);
      lVar2 = *(longlong *)(param_1 + 0x20);
    }
    FUN_140128b39(param_2,lVar2);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}

