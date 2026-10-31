/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c3b62 */

void FUN_1801c3b62(undefined8 param_1,longlong param_2)

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
        cVar4 = FUN_1800fff6e(param_1,lVar3,0);
        if (cVar4 != '\0') goto LAB_1801c3ba5;
      }
      else {
LAB_1801c3ba5:
        cVar4 = FUN_1801c3c94(param_1,lVar3);
        if (cVar4 != '\0') {
          FUN_1801c3b62(param_1,lVar3);
          FUN_18014d7a9();
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return;
}

