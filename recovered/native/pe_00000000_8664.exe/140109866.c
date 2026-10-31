/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140109866 */

void FUN_140109866(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_2 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_2 + 0x30);
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar5);
      if (*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0x20) == 0) {
        cVar4 = FUN_14007922a(param_1,lVar3,0);
        if (cVar4 != '\0') goto LAB_1401098a9;
      }
      else {
LAB_1401098a9:
        cVar4 = FUN_140109998(param_1,lVar3);
        if (cVar4 != '\0') {
          FUN_140109866(param_1,lVar3);
          FUN_1400c66d9();
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return;
}

